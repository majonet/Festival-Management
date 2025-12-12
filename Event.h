// Event.h
// تعریف کلاس Event با ویژگی‌های:
//  eventName، eventID، eventType، capacity، registeredParticipants
#include<string>
#pragma once
#include <iostream>
using namespace std;
#include "Participant.h"
#include<map>
enum Etype {ev1,ev2,ev2};

class Event{
protected:
   string eventName;
   int eventID;
   Etype eventType;
   int capacity;
   map<int, string> registeredParticipants;
public:
   Event(){};
   ~Event(){};
   
};
