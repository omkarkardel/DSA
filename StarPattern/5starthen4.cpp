#include<iostream>
using namespace std;
void print(int n) {
    for(int i=0;i<n;i++) {
        for(int j=1;j<n-i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print1(int n) {
    for(int i=0;i<=n;i++) {
        for(int j=0;j<n-i+1; j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print2(int n) {
    for(int i=0;i<n;i++) {
        //space
        for(int j=0;j<n-i-1; j++) {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    print2(n);
}