#include<iostream>
using namespace std;
int addition(int x , int y){
    int result=x+y;
    return result;
}
int main(){
    int x= addition(5,7);
    cout<<x;
    return 0;
}