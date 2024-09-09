#include<iostream>
using namespace std;
/*
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
*/

void sayDigit(int n , string arr[]){
    // base case 

    if( n == 0)
        return ;
    
    //proccessing 

    int digit = n%10 ;
    n  = n/10;

    //cout << arr[digit] << " " ;
    //eske karn ulta print hoga  because yaha 2 1 4 aisa print hoga

    sayDigit( n , arr);
    cout << arr[digit] << " " ;
    // yaha base case hit hone ke bad print ho rha ulta aur de rha
}

int main(){
    int n ;
    cin>>n;

    string arr[10] = { "zero" , " one ", " two" , " three" ,
     "four" , " five ", "six" , " seven " , " eight " , " nine " };

    sayDigit( n , arr );


    return 0;
}