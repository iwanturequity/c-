#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>divideArray(vector<int>&arr , vector<int>&sizes){
    vector<vector<int>>result;
    int index = 0;
    for(int size: sizes){
        vector<int>subArray;
        for(int i=0; i<size; i++){
            if(index < arr.size()){
                subArray.push_back(arr[index]);
                index++;
            }
        }
        result.push_back(subArray);
    }
    return result;
}

int main(){

    vector<int>arr  = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vector<int>sizes = {3,5,7};

    vector<vector<int>> result = divideArray(arr , sizes);

    // for printing the subarray
    for(const auto &sunarray : result){
        for(int num: sunarray){
            cout << num << " ";
        }
        cout << endl; 
    }
    return 0;
}