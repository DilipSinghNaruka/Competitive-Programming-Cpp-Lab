#include <iostream>
using  namespace std;

bool Prime(int n){
    for (int i = 2; i <n; i++)
    {
        if(n%i==0){
            return true;
        }
    }
    return false;
    
}

int main(){
    int n ;
    cout<<"Enter a Number :- ";
    cin>>n;
    if(Prime(n)){
        cout<<"this is not prime number";
    }else{
        cout<<"this is prime number";
    }
}