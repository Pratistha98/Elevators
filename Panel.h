/*
School : Diablo Valley College
Term : 2018 Fall
Course : ComSc - 200 - 3565,
Programmar : Pratistha Maharjan
Programmar's ID: 1650717*/


#ifndef Panel_h
#define Panel_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Panel{
  struct Button{
    string label;
    bool lit;
    int seqNum;
    static int totalNumPress;
  };
  vector<Button> buttons;

public:
  friend ostream& operator<<(ostream&, const Panel&);
  void addButton(string);
  void press(string);
  void clear(string);
  string getFirstLit() const;
  bool isLit(string) const;
  bool areAnyLit() const;
};

#endif