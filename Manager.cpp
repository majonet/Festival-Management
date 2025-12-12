#include "Manager.h"
using namespace std;
void Manager::addEvent(Event m){
    cont_Events.insert({m.eventID, m});
};

void Manager::addParticipant(Participant m){
    cont_Participants.insert({m.participantID, m});
};