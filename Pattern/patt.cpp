#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j=i+3)
        {
            cout<< "*";
        }
        cout<< endl;
    }

}

int main()
{
    int n;
    cout<<"Enter how many rows you want to print:";
    cin>>n;
    print1(n);

}