/*
School : Diablo Valley College
Term : 2018 Fall
Course : ComSc - 200 - 3565,
Programmar : Pratistha Maharjan
Programmar's ID: 1650717*/

#include "Rider.h"
#include "Building.h"

Rider::Rider(int f, int t)
:from(f), to(t), goingUp(!(Building::floors[to] < Building::floors[from])),goingDown(Building::floors[to] < Building::floors[from]){
}

Rider& Rider::operator=(const Rider& r){
  const_cast<int&>(this->from) = r.from;
  const_cast<int&>(this->to) = r.to;
  const_cast<bool&>(this->goingUp) = r.goingUp;
  const_cast<bool&>(this->goingDown) = r.goingDown;
  return *this;
}
