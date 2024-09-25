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


    hero(){
        cout << " constructor called " << endl;
    }

    // parameterized constuctor 

    hero(int health){
        cout << " health is " << this << endl;
        this -> health = health;
    }


    // now useof gettr and settr
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }

};
int main(){

    //staticallt created object
    hero ramesh(70);
    cout << " address of ramesh " << &ramesh << endl;
    ramesh.gethealth();














    /*
    // this is statically allocated
    hero a ;
    a.level = 'b'; 
    a.sethealth(50);
    cout<< " leval is " << a.level << endl;
    cout << " helth is " << a.gethealth() << endl;
    // hero ramesh;

    // now dynamically 
    hero *b = new hero;
     b-> sethealth(70);
     b->level = 'A';
    // we can also do print like this 
    // cout<< " leval is " << (*b).level << endl;
    // cout << " helth is " << (*b).gethealth() << endl;

    cout<< " leval is " << b->level << endl;
    cout << " helth is " << b->gethealth() << endl;

    // cout<< " ramesh health is " << ramesh.gethealth() << endl;
    // ramesh.health = 99;
    //  setter 
    // ramesh.sethealth(70);
    // ramesh.level = 'A';
    // cout<< "  health is " << ramesh.gethealth() << endl;
    // cout << " health is : " << ramesh.health << endl;
    // cout << " health is : " << ramesh.level << endl;

    */

    return 0;
}