#include "Manager.h"
#include "exception.h"
using namespace std;
void Manager::addEvent(Event m){
    cont_Events.insert({m.eventID, m});
};

void Manager::addParticipant(Participant m){
    cont_Participants.insert({m.participantID, m});
};
void Manager::registerParticipantToEvent(int participantID,int eventID){
    Event se_event;
    if (!cont_Events.count(eventID)){
       throw myerror("event id ID not found");
    }
    se_event=cont_Events[eventID];
    if (!se_event.registeredParticipants.count(participantID)) {
    throw myerror("participant Id not found");
    } 
    cout<<"Participant is in event"<<endl;
}


void Manager::findEvent(int eventID){
    Event se_event;
    se_event=cont_Events[eventID];
    cout<<"event find"
};