#include<iostream>
using namespace std;
bool check_eligible(int age, int limit){
    if(age>=limit){
        return true;
    } else{
        return false;
    }
}
int main(){
    int voting_limit= 18;
    int is_eligible_to_vote=check_eligible(21,voting_limit);
    if(is_eligible_to_vote){
        cout<<"yes,you can vote";
    }else{
        cout<<"No,you can't vote";
    }
    return 0;
}