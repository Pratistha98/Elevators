/*
School : Diablo Valley College
Term : 2018 Fall
Course : ComSc - 200 - 3565,
Programmar : Pratistha Maharjan
Programmar's ID: 1650717*/


#ifndef Rider_h
#define Rider_h

struct Rider
{
  const int to;
  const int from;
  bool goingUp;
  bool goingDown;
  Rider(int, int); 
  Rider& operator=(const Rider&);
};

#endif