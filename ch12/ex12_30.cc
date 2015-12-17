#include <iostream>
#include <algorithm>
#include <sstream>
#include "ex12_30.h"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::ifstream;
using std::shared_ptr;
using std::map;
using std::set;
using std::vector;
using std::string;
using std::istringstream;

TextQuery::TextQuery(ifstream &ifs) : input(new vector<string>) {
  LineNo lineNo{0};
  for(string line; std::getline(ifs, line); ++lineNo) {
    input -> push_back(line);  // 保存此行文本
    istringstream line_stream(line);  // 将行文本分解为单词
    for(string text, word; line_stream >> text; word.clear()) {
      std::remove_copy_if(text.begin(), text.end(), std::back_inserter(word), ispunct);
      auto &nos = result[word];  // nos为一个shared_ptr
      if(!nos)  // 第一次遇到这个单词时, 此指针为空
        nos.reset(new set<LineNo>);  // 分配一个新的set
      nos -> insert(lineNo);  // 将此行号插入set中
    }
  }
}

QueryResult TextQuery::query(const string &str) const {
  static shared_ptr<set<LineNo>> nodate(new set<LineNo>);
  auto found = result.find(str);
  if(found == result.end())
    return QueryResult(str, nodate, input);
  else
    return QueryResult(str, found->second, input);
}

ostream& print(ostream &out, const QueryResult& qr) {
  out << qr.word << " occurs " << qr.nos->size() << (qr.nos->size() > 1? " times" : " time") << std::endl;
  for(auto i : *qr.nos)
    out << "\t(line " << i+1 << ")" << qr.input->at(i) << endl;
  return out;
}

void runQueries(ifstream &infile) {
  TextQuery tq(infile);
  while(true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if(!(cin >> s) || s == "q") break;
    print(cout, tq.query(s)) << endl;
  }
}

int main()
{
  ifstream file("data/storyDataFile");
  runQueries(file);
  return 0;
}
