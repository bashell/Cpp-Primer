#ifndef EX13_34_36_37_H
#define EX13_34_36_37_H

#include <string>
#include <set>

class Folder;

class Message {
  friend void swap(Message&, Message&);
  friend void swap(Folder&, Folder&);
  friend class Folder;
  
 public:
  explicit Message(const std::string &str = "") : contents(str) { }
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();
  void save(Folder&);
  void remove(Folder&);
  void print_debug();
 private:
  std::string contents;
  std::set<Floder*> folders;
  void add_to_Folders(const Message&);
  void remove_from_Floders();
  void addFldr(Folder *f) { folders.insert(f); }
  void remFldr(Folder *f) { folders.erase(f); }
};

void swap(Message&, Message&);

class Folder {
  friend void swap(Message&, Message&);
  friend void swap(Folder&, Folder&);
  friend class Message;
 public:
  Folder() = default;
  Folder(const Folder&);
  Folder& operator=(const Folder&);
  ~Folder();
  void print_debug();
 private:
  std::set<Message*> msgs;
  void add_to_Message(const Folder&);
  void remove_to_Message();
  void addMsg(Message *m) { msgs.insert(m); }
  void remMsg(Message *m) { msgs.erase(m); }
};

void swap(Folder&, Folder&);

#endif  // EX13_34_36_37_H