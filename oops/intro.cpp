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

    hero(int health , char level){
        cout << " health is " << this << endl;
        this -> health = health;
        this -> level = level;
    }
    
    // copy constructor

    hero( hero& temp){
        cout << " copy constuctor called " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout << " health " << this -> health << endl;
        cout << " level " << this -> level << endl;
    }


    // now useof gettr and settr
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }

    char getlevel(){
        return level;
    }

    void setlevel( char ch){
        level = ch;
    }

    // Destructor
    ~hero(){
        cout << " destructor called " << endl;
    }

};
int main(){

    // statically
    hero a;

    // dynamically 
    hero *b = new hero();
    delete b;
    return 0;
}









/*  
    // hero suresh( 70, 'a');
    // // now copy one object to another object 

    
    // hero R(suresh);

    // //ye niche wale ka short 
    // // r.health = suresh.health;
    // // r.level = suresh.level;


    // R.print();


    //staticallt created object
    // hero ramesh(70);
    // cout << " address of ramesh " << &ramesh << endl;
    // ramesh.gethealth();


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

    

    return 0;
}
*/
