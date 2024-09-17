#include<iostream>
using namespace std;
// find all prime numbers between two number
 bool isprime(int number){
    for(int i=2;i<=(number-1);i++){
        if(number%2==0)return false;
    }
    return true;
 }
 int main(){
    int a=2 , b=10;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
 }   