/*
School : Diablo Valley College
Term : 2018 Fall
Course : ComSc - 200 - 3565,
Programmar : Pratistha Maharjan
Programmar's ID: 1650717*/


#ifndef BUILDING_H
#define BUILDING_H

#include "Floor.h"
#include "Elevator.h"

struct Building
{
  static Floor floors[];
  static Elevator elevators[];
  static const int FLOORS;
  static const int ELEVATORS;

  static void getDifferentInts(int&, int&);
  static int getPoisson(double);
  static void action(double);
  
  // actions
  static void placeNewRiders(double);
  static bool openDoorToDisembarkRider(int);
  static bool disembarkRider(int); 
  static bool boardRider(int); 
  static bool waitingForMoreRiders(int); 
  static bool doneWaitingMove(int); 
 
};
#endif