#include<string>
using namespace std;
#include "Event.h"
#include<map>
#pragma once
//  name، participantID، registeredEvents
class Participant{
protected:
   string name;
   int participantID;
   // map<int, Event> registeredEvents;
   // vector<int> registeredEvents; 
public:
   Participant(){};
   ~Participant(){};
};
