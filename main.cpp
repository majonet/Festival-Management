#include "Manager.h"
#include "exception.h"
#include "Event.h"
#include "Participant.h"
#include <iostream>
using namespace std;

int main() {
    Manager mgr;
    Event e1{"Music Concert",1,ev2, 2};
    Event e2{"Art Workshop",2,ev1, 3};
    Event e3{"Tech Talk",3,ev3, 1};
    Event e4{"Art Work",5,ev1, 3};
    Event e5{"Art",4,ev1, 2};

    try {
        mgr.addEvent(e1);
        mgr.addEvent(e2);
        mgr.addEvent(e3);
        mgr.addEvent(e4);
        mgr.addEvent(e5);
        
    } catch (myerror& e) {
        cout<<"ERROR :"<<endl;
        e.show_error();
        cout<<"----------------------"<<endl;
    }


    Participant p1;
    p1.participantID = 1; p1.name = "Alice";
    Participant p2;
    p2.participantID = 2; p2.name = "Bob";
    Participant p3;
    p3.participantID = 3; p3.name = "Charlie";

    mgr.addParticipant(p1);
    mgr.addParticipant(p2);
    mgr.addParticipant(p3);


    try {
        mgr.registerParticipantToEvent(1, 3);
        mgr.registerParticipantToEvent(2, 3);
        mgr.registerParticipantToEvent(3, 3);
        mgr.registerParticipantToEvent(2, 3);
        mgr.registerParticipantToEvent(1, 3);
    } catch (myerror& e) {
        cout<<"ERROR :"<<endl;
        e.show_error();
        cout<<"----------------------"<<endl;
    }

    try {
        mgr.findEvent(1);
        mgr.findEvent(3);
        mgr.findEvent(5);
    }catch (myerror& e) {
        cout<<"ERROR :"<<endl;
        e.show_error();
        cout<<"----------------------"<<endl;
    }

    try {
        mgr.findParticipant(1);
        mgr.findParticipant(3);
        mgr.findParticipant(4);
    }catch (myerror& e) {
        cout<<"ERROR :"<<endl;
        e.show_error();
        cout<<"----------------------"<<endl;
    }


    cout << "Events sorted by type:" << endl;
    mgr.listEventsSortedByType();

   
    cout << "Events sorted by participant count:" << endl;
    mgr.listEventsSortedByParticipantCount();
   

    return 0;
}
