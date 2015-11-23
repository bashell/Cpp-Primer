#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cout;
using std::string;
using std::vector;

class MyDate {
 public:
  MyDate(const string &s);
  void printDate();

 private:
  unsigned year, month, day;
};

MyDate::MyDate(const string &s) {
  unsigned tag, format;
  tag = format = 0;

  // 1/1/1990
  if(s.find_first_of("/") != string::npos)
    format = 1;

  // January 1, 1990  or  Jan 1, 1990
  if(s.find_first_of(',') >= 4 && s.find_first_of(',') != string::npos)
    format = 2;
  // Jan 1 1990
  else if(s.find_first_of(' ') >= 3 && s.find_first_of(' ') != string::npos)
    format = 2, tag = 1;

  switch(format) {
    case 1:
      day = stoi(s.substr(0, s.find_first_of("/")));
      month = stoi(s.substr(s.find_first_of("/") + 1, s.find_last_of("/") - s.find_first_of("/")));
      year = stoi(s.substr(s.find_last_of("/") + 1, 4));
      break;

    case 2:
      if(s.find("Jan") < s.size()) month = 1;
      if(s.find("Feb") < s.size()) month = 2;
      if(s.find("Mar") < s.size()) month = 3;
      if(s.find("Apr") < s.size()) month = 4;
      if(s.find("May") < s.size()) month = 5;
      if(s.find("Jun") < s.size()) month = 6;
      if(s.find("Jul") < s.size()) month = 7;
      if(s.find("Aug") < s.size()) month = 8;
      if(s.find("Sep") < s.size()) month = 9;
      if(s.find("Oct") < s.size()) month = 10;
      if(s.find("Nov") < s.size()) month = 11;
      if(s.find("Dec") < s.size()) month = 12;

      char ch = (tag == 1 ? ' ' : ',');
      day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(ch) - s.find_first_of("123456789")));
      year = stoi(s.substr(s.find_last_of(' ') + 1, 4));
      break;
  }
}

void MyDate::printDate() {
  cout << "day: " << day << " " << "month: " << month << " " << "year: " << year << endl;
}

int main()
{
  MyDate date1("Jan 1 1990");
  MyDate date2("Feb 3, 1994");
  MyDate date3("September 28, 1991");
  MyDate date4("12/11/1999");
  date1.printDate();
  date2.printDate();
  date3.printDate();
  date4.printDate();
  return 0;
}
