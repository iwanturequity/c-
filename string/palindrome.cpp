#include<iostream>
using namespace std;

// for lowercase

char toLowercase(char ch){
    if(ch >= 'a' && ch<= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a' ;
        return temp; 
    }
}

bool cheakpalindrome( char a[] , int n){
    int s =0;
    int e =n-1;
    while (s<=e)
    {
        if(toLowercase(a[s]) != toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    
}

int getLength( char name[]){
    int count = 0;
    for (int i= 0; name[i] != '0'; i++){
        count++ ;
    }
    return count;
}

int main(){
    char name[20];
    cout << " your name is " ;
    cin>> name;
    cout<< "enter your name " ;

    cout<< name << endl;

    int len = getLength(name);
    cout<< "length " << len <<endl;
    
    cout<< "palindrome or not " << cheakpalindrome(name , len)<< endl;

    cout<< " CHARECTOR is " << toLowercase('a') << endl;
    cout<< " CHARECTOR is " << toLowercase('A') << endl;
    return 0;
}