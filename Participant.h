#include<string>
using namespace std;
#include "Event.h"
#include<map>
#pragma once
//  name، participantID، registeredEvents
class Participant{
public:
   string name;
   int participantID;
   map<int, Event> registeredEvents;
   // vector<int> registeredEvents; 
   Participant(){};
   ~Participant(){};
};
