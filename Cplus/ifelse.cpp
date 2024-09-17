#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"enter your score";
    cin>>score;
    if(score>80){
        cout<<"well Done";
    }else if(score>50){
        cout<<"You Can Improve";
    
    }else{
        cout<<"poor Performance";
    } 
}