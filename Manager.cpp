#include "Manager.h"
#include "exception.h"
#include <list>
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
    if (!cont_Participants.count(participantID)) {
    throw myerror("participant Id not found");
    } 
    Participant se_par;
    se_par=cont_Participants[participantID];

    if (se_event.capacity<=se_event.registeredParticipants.size()) {
    throw myerror("capacity event is full");
    } 
    se_event.registeredParticipants.insert({se_par.participantID, se_par});
    se_par.registeredEvents.insert({se_event.eventID,se_event});
    cout<<"Participant "<<se_par.name<<"register in "<<se_event.eventName<<" event"<<endl;
}

void Manager::findEvent(int eventID){
    Event se_event;
    if (!cont_Events.count(eventID)){
       throw myerror("event id ID not found");}
    se_event=cont_Events[eventID];
    cout<<"event find with name "<< se_event.eventName<<endl;
};

void Manager::findParticipant(int participantID){
    if (!cont_Participants.count(participantID)) {
    throw myerror("participant Id not found");
    } 
    Participant se_par;
    se_par=cont_Participants[participantID];
    cout<<"participant find with name "<< se_par.name<<endl;
}

 void Manager::listEventsSortedByType(){
    enum Etype_ {ev1,ev2,ev3,EtypeCount};
    for (int i = 0; i < EtypeCount; ++i) {
        Etype_  x = static_cast<Etype_>(i);
        for (auto& y : cont_Events){
            if (y.second.eventType == x){
                cout<<y.second.eventName<<endl;
            }
        }}
 };
