#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    // for(int i = 0; i<5; i++){
    //     for(int j=i+1; j<5; j++){
    //         for(int k=i ; k<=j; k++){
    //             cout << arr[k] << " " ;
    //         }cout<<endl;
    //     }
    // }

    // kendelen algorithm
    int carrySum = 0;
    int maxSum = INT_MIN;

    for( int i=0; i<5; i++){
        carrySum +=arr[i];
        maxSum = max(maxSum,carrySum);
        if(carrySum <0){
            carrySum = 0;
        }
        cout << "Current maxSum: " << maxSum << endl;
    }

    return 0;
}