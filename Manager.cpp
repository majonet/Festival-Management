#include "Manager.h"
using namespace std;
void Manager::addEvent(Event m){
    cont_Events.insert({m.eventID, m});
};

void Manager::addParticipant(Participant m){
    cont_Participants.insert({m.participantID, m});
};
void Manager::registerParticipantToEvent(int participantID,int eventID){
    Event se_event;
    se_event=cont_Events[eventID];
    if (se_event.registeredParticipants.count(participantID)) {
    cout << "participant ID  find";
} else {
    cout << "participant ID not found";}
}
