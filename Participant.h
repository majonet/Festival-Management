#include<string>
using namespace std;
// #include "Event.h"
#include<map>
#pragma once
class Event;
class Participant{
public:
   string name;
   int participantID;
   map<int, Event> registeredEvents;
   Participant() : name(""), participantID(0) {}
   Participant(const string& n, int id) : name(n), participantID(id) {}
   ~Participant(){};
};
