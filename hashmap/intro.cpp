#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    // creation of map
    unordered_map<string, int>m;
    // now insetion way -1;
    pair<string, int>p = make_pair("mera" , 1);
    m.insert(p);

    // insertion way -2;
    pair<string, int>p2("rajiv", 2);
    m.insert(p2);

    // insertion way -3;
    m["nam"] = 3;

    // search
    cout<<m["nam"]<<endl;
    cout<< m.at("rajiv")<<endl;

    //cout<< m.at("unkmownkey")<< endl; // this will give error as key is not present in map
    cout<< m["unkmownkey"]<< endl; // this will create a new key with value 0 and return 0
    cout<< m.at("unkmownkey")<< endl; // ab ye error nahi dega kyuki upr wala new key bana diya hai
    // size 
    cout<< m.size()<<endl;

    // itrataion over map approach - 1;
    // for(auto i:m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // itrataion over map approach - 2;
    unordered_map<string , int>:: iterator it = m.begin();
    while(it != m.end()){
        cout<< it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}