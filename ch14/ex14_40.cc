#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class ShorterString {
 public:
  bool operator()(const std::string &s1, const std::string &s2) const {
    return s1.size() < s2.size();
  }
};

class BiggerEqual {
 public:
  BiggerEqual(size_t sz) : sz_(sz) {}
  bool operator()(const std::string &s) { return s.size() >= sz_; }
 private:
  size_t sz_;
};

class Print {
 public:
  void operator()(const std::string &s) { std::cout << s << " "; }
};

std::string make_plural(size_t ctr, const std::string &word, const std::string ending) {
  return (ctr > 1) ? word + ending : word;
}

void elimDups(std::vector<std::string> &words) {
  std::sort(words.begin(), words.end());
  auto end_unique = std::unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}


void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz) {
  elimDups(words);
  std::stable_sort(words.begin(), words.end(), ShorterString());
  auto wc = std::find_if(words.begin(), words.end(), BiggerEqual(sz));
  auto count = words.end() - wc;
  std::cout << count << " " << make_plural(count, "word", "s")
            << " of length " << sz << " or longer" << std::endl;
  std::for_each(wc, words.end(), Print());
  std::cout << std::endl;
}

int main()
{
  std::vector<std::string> svec{"c++", "Primer", "5th", "aaaaaaaa", "bb", "ccc"};
  biggies(svec, 3);
}
