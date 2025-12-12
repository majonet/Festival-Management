#include<string>
#pragma once
#include <iostream>
using namespace std;
#include "Participant.h"
#include<vector>
enum Etype {ev1,ev2,ev3};

class Event{
public:
   string eventName;
   int eventID;
   Etype eventType;
   int capacity;
   map<int, Participant> registeredParticipants;
   Event() : eventName(""), eventID(0), eventType(ev1), capacity(0) {}
   Event(const string& name, int id, Etype type, int cap): eventName(name), eventID(id), eventType(type), capacity(cap) {}
   ~Event(){};
   
};
