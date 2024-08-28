#include<iostream>
using namespace std;

int main(){
    // taking array in input 
    int array[3][4];
    for(int i = 0; i<3; i++){
        for(int j =0; j<4; j++){
            cin>> array[i][j];
        }
    }


    //output of the array
    for(int i = 0; i<3; i++){
        for(int j =0; j<4; j++){
            cout<< array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}