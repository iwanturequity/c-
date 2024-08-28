#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    for(int row=0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin>> arr[row][col];
        }
    }
    

    for(int row=0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout<<  arr[row][col] << " ";
        }
        cout << endl;
    }
    
    cout <<" enter the element for search " << endl;

    int target ;
    
    cin>> target;

    if(isPresent(arr, target)){
        cout << "yes it is present " <<endl;
    }else{
        cout << " not present " << endl;
    }

    return 0;
}