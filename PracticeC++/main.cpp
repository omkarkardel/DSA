#include<iostream>
using namespace std;
// Reverse Number 123 then 321
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int revNum = 0;
    while(n>0){
        int ld = n%10;
        revNum = (revNum*10)+ ld;
        n = n/10;
    }
    return revNum;

    
}
   


    