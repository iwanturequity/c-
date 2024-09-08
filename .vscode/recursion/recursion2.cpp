#include<iostream>
using namespace std;

void reachhome(int dest , int src){

    cout << "source " << src << " destination " <<  dest << endl;
    if( dest == src ){
        cout << " pauch gya " << endl;
        return ;
    }

    src++;

    reachhome(dest , src);
}

int main(){

    int dest = 10;
    int src = 0;

    reachhome( dest , src);

    return 0;
}