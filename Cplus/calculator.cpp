#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter the number"<<endl;
    cin>>n1>>n2;
   
    cout<<"op(+,-,*,/)";
     char op;
    cin>>op;
    
    switch(op){
    case '+':
    cout<<"sum:"<<n1+n2<<endl;
    break;
    case '-':
    cout<<"sub:"<<n1-n2<<endl;
    break ;
    case '*':
    cout<<"product:"<<n1*n2<<endl;
    break;
    case '/':
    cout<<"division:"<<n1/n2<<endl;
    break ;
    return 0;
    }
}