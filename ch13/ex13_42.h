#ifndef EX12_42_H
#define EX12_42_H

#include <iostream>
#include <fstream>
#include <memory>
#include <map>
#include <set>
#include <vector>
#include <string>
#include "ex13_42_StrVec.h"

class QueryResult;
class TextQuery {
 public:
  TextQuery(std::ifstream &);
  QueryResult query(const std::string &) const;

 private:
  std::shared_ptr<StrVec> input;
  std::map<std::string, std::shared_ptr<std::set<size_t>>> result;
};

class QueryResult {
 public:
  friend std::ostream& print(std::ostream &, const QueryResult &);
 public:
  QueryResult(const std::string &s,
              std::shared_ptr<std::set<size_t>> set,
              std::shared_ptr<StrVec> v):
    word(s), nos(set), input(v) { }

 private:
  std::string word;
  std::shared_ptr<std::set<size_t>> nos;
  std::shared_ptr<StrVec> input;
};

#endif  // EX12_42_H
