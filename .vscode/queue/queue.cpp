#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(20);
    q.push(15);
    q.push(10);

    cout<< " size of queue " << q.size() << endl;

    q.pop();
    cout<< " size of queue " << q.size() << endl;
}