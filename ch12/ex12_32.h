#ifndef EX12_32_H
#define EX12_32_H

#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include "ex12_22.h"

class QueryResult;
class TextQuery {
 public:
  TextQuery(std::ifstream &);
  QueryResult query(const std::string &) const;

 private:
  StrBlob file;
  std::map<std::string, std::shared_ptr<std::set<StrBlob::size_type>>> result;
};

class QueryResult {
 public:
  friend std::ostream& print(std::ostream &, const QueryResult &);
 public:
  QueryResult(const std::string &s,
              std::shared_ptr<std::set<StrBlob::size_type>> set, 
              const StrBlob &f) : 
    word(s), nos(set), file(f) { }

 private:
  std::string word;
  std::shared_ptr<std::set<StrBlob::size_type>> nos;
  StrBlob file;
};

#endif  // EX12_32_H
