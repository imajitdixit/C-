#include <iostream>
using namespace std;
int main(){
    int array[]={4,2,6,5,8};
    int max=array[0];
    for(int i=1;i<6;i++){
        if (max<array[i]){
            max=array[i];
        }
    }
    cout<<max<<endl;
    
}