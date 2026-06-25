// Write Program for Prime number
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number that You want to check for Prime:";
    cin>>n;
    if(n<=1) {
        cout<<"Not Prime";
    }
    else {   
        int cnt = 0;
        for(int i=1;i<n;i++) {
            if(n%i == 0) {
             cnt++;
            }
        }
        if(cnt == 2) {                                                  
            cout<<"prime";
        }else{
            cout<<"Not Prime";
        }
    }
}



    

