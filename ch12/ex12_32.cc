#include <sstream>
#include <algorithm>
#include "ex12_32.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ostream;
using std::istringstream;
using std::shared_ptr;
using std::set;

TextQuery::TextQuery(ifstream &ifs) {
  StrBlob::size_type lineNo{0};
  for(string line; std::getline(ifs, line); ++lineNo) {
    file.push_back(line);
    istringstream line_stream(line);
    for(string text, word; line_stream >> text; word.clear()) {
      std::remove_copy_if(text.begin(), text.end(), std::back_inserter(word), ispunct);
      auto &nos = result[word];
      if(!nos)
        nos.reset(new set<StrBlob::size_type>);
      nos->insert(lineNo);
    }
  }
}

QueryResult TextQuery::query(const string &str) const {
  static shared_ptr<set<StrBlob::size_type>> nodate(new set<StrBlob::size_type>);
  auto found = result.find(str);
  if(found == result.end())
    return QueryResult(str, nodate, file);
  else
    return QueryResult(str, found->second, file);
}

ostream& print(ostream &out, const QueryResult &qr) {
  out << qr.word << " occurs " << qr.nos->size() << (qr.nos->size() > 1 ? " times" : " time");
  for(auto i : *qr.nos) {
    ConstStrBlobPtr p(qr.file, i);
    out << "\t(line " << i+1 << ") " << p.deref() << endl;
  }
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
