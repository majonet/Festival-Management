#pragma once
#include <string>
using namespace std;
#include "Event.h"
#include "Participant.h"
#include <map>
// - addEvent(Event)
// - addParticipant(Participant)
// - registerParticipantToEvent(participantID, eventID)
// - findEvent(eventID)
// - findParticipant(participantID)
// - listEventsSortedByType()
// - listEventsSortedByParticipantCount()
class Manager{
protected:
  map<int, Event> cont_Events;
  map<int, Participant> cont_Participants;
public:
  Manager(){};
  ~Manager(){};
  void addEvent(Event);
  void addParticipant(Participant);
  void registerParticipantToEvent(int participantID,int eventID);
  void findEvent(int eventID);
  void findParticipant(int participantID);
  void listEventsSortedByType();
  void listEventsSortedByParticipantCount();
} ;