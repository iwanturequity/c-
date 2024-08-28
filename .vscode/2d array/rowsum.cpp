#include<iostream>
using namespace std;

// void printSum(int arr[][4] , int row , int col){

//     cout << " print sun row wise " << endl;
//     for(int row=0; row<3; row++){
//         int sum = 0;
//         for(int col = 0; col<4; col++){
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

int largestsum(int arr[][4] , int row , int col){
    int maxi = INT_MIN;
    int rowIndex  = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex  = row;
        }
    }
    cout<< " the maximum sum is " << largestsum(arr , 3, 4)  <<endl;
    return rowIndex;
}

int main(){
    int arr[3][4];
    cout<< " enter the elements  " << endl;
    for(int row=0; row<3; row++){
        for(int col = 0; col<4; col++){
            cin>> arr[row][col];
        }
    }
    
    cout<< " printting the array" << endl;
    for(int row=0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout<<  arr[row][col] << " ";
        }
        cout << endl;
    }
    

    //printSum(arr , 3, 4);

    int largest = largestsum(arr , 3 , 4);
    cout<< " largest sum is " << largest << endl; 
   

    return 0;
}