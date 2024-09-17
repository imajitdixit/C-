#include<iostream>
using namespace std;
int radius(int r){
    int area=3.14*r*r;
    return area;
     int circumference=2*3.14*r;
    return circumference;
}
int main(){
    int r=3;
    int area;
    int circumference;
    cout<<"Area:"<<area<<endl;
    cout<<"Circumference:"<<circumference<<endl;
    return 0;
}