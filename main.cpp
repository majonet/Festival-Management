#include "Manager.h"
#include "exception.h"
#include "Event.h"
#include "Participant.h"
#include <iostream>
using namespace std;

int main() {
    Manager mgr;
    Event e1{1, "Music Concert", ev1, 2};
    Event e2{2, "Art Workshop", ev2, 3};
    Event e3{3, "Tech Talk", ev3, 1};
    try {
        mgr.addEvent(e1);
        mgr.addEvent(e2);
        mgr.addEvent(e3);
    } catch (myerror& e) {
        e.show_error();
    }

    try {
        Participant p1;
        p1.participantID = 1; p1.name = "Alice";
        Participant p2;
        p2.participantID = 2; p2.name = "Bob";
        Participant p3;
        p3.participantID = 3; p3.name = "Charlie";

        mgr.addParticipant(p1);
        mgr.addParticipant(p2);
        mgr.addParticipant(p3);
    } catch (myerror& e) {
        e.show_error();
    }

    try {
        mgr.registerParticipantToEvent(1, 1);
        mgr.registerParticipantToEvent(2, 1);
        mgr.registerParticipantToEvent(3, 2);
        mgr.registerParticipantToEvent(2, 2);
        mgr.registerParticipantToEvent(1, 3);
    } catch (myerror& e) {
        e.show_error();
    }

    try {
        mgr.findEvent(1);
        mgr.findEvent(3);
        mgr.findEvent(5);
    } catch (myerror& e) {
        e.show_error();
    }

    try {
        mgr.findParticipant(1);
        mgr.findParticipant(3);
        mgr.findParticipant(4);
    } catch (myerror& e) {
        e.show_error();
    }


    cout << "Events sorted by type:" << endl;
    mgr.listEventsSortedByType();

   
    cout << "Events sorted by participant count:" << endl;
    mgr.listEventsSortedByParticipantCount();
   

    return 0;
}
