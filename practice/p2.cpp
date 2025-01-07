#include <iostream>
#include<vector>
using namespace std;

// reverse the array 

// void reverse( int *arr , int n){
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         swap( arr[s] , arr[e]);
//         s++;
//         e--;
//     }
// }
// void print( int *arr , int n){
//     for( int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout <<  endl;
// }

vector<int> reverse(vector<int>v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<< endl;
}
int main(){

    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for(int i = 0; i< n; i++){
    //     cin >>  arr[i];
    // }

    // reverse( arr , n);
    // print( arr , n);

    // delete [] arr;

    vector<int>v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    
    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}