#include<iostream>
// i can take from another file also 
//#include "hello.cpp"
using namespace std;

class hero {
    // properties 
    //int health;
    // if i take empty class; ----- then size is 1 because of identification 
    public:
    char name[20];
    private:
    int health;
    public:
    char level;

    // now useof gettr and settr

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }

};
int main(){

    hero ramesh;

    cout<< " ramesh health is " << ramesh.gethealth() << endl;
    //ramesh.health = 99;
    // setter 
    ramesh.sethealth(70);
    ramesh.level = 'A';
    cout<< "  health is " << ramesh.gethealth() << endl;
    //cout << " health is : " << ramesh.health << endl;
    cout << " health is : " << ramesh.level << endl;


    return 0;
}