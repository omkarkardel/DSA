#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int dup = n;
    int revNum = 0;
    while(n>0){
        int ld = n%10;
        revNum = (revNum*10) + ld;
        n = n/10;
    }
    if(dup == revNum){
        cout<<"Pallindrom";
    }
    else{
        cout<<"Not Pallindrom";
    }
}