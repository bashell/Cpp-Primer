#ifndef EX13_28_H
#define EX13_28_H

#include <string>

class TreeNode {
 public:
  TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) { }
  TreeNode(const TreeNode &rhs) : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { }
  TreeNode &operator=(const TreeNode &rhs) {
    ++*rhs.count;
    if(--*count == 0) {
      if(left) {
        delete left;
      }
      if(right) {
        delete right;
      }
      delete count;
    }
    value = rhs.value;
    left = rhs.left;
    right = rhs.right;
    count = rhs.count;
    return *this;
  }
  ~TreeNode() {
    if(--*count == 0) {
      if(left) {
        delete left;
        left = nullptr;
      }
      if(right) {
        delete right;
        right = nullptr;
      }
      delete count;
      count = nullptr;
    }
  }
 private:
  std::string value;
  int count;
  TreeNode *left;
  TreeNode *right;
};

class BinStrTree {
 public:
  BinStrTree() : root(new TreeNode()) { }
  BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) { }
  BinStrTree &operator=(const BinStrTree &bst) {
    TreeNode *new_root = new TreeNode(*bst.root);
    delete root;
    root = new_root;
    return *this;
  }
  ~BinStrTree() { delete root; }
 private:
  TreeNode *root;
};

#endif  // EX13_28_H
