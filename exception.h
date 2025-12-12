#include <string>
using namespace std;
#include <iostream>
class myerror{
public:
    string error;
    myerror(string error):error(error){}
    void show_error(){
     cout<< error<<endl;
    };
    ~myerror(){};

};