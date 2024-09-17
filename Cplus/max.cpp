##include<iostream>
using namespace std;
int main()
    {
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
   
    if(num1>num2){
        cout<<num1;
    }else if(num1>num3){
        cout<<num1;
    }else if(num3>num2){
      cout<<num3;  
    }else {
        cout<<num2;
    }
}