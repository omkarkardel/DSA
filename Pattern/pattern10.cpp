#include<iostream>
using namespace std;

void print10(int n){
    for(int i=1;i<2*n-1;i++)
    {
        int stars =i;
        if(i>n) stars = 2*n - i;
        for(int j=1;j<= stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    cout<<endl;
}
void print11(int n){
    int start = 1;
    for(int i = 0;i<n;i++)
    {
        if(i % 2 == 0) start =1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<< start;
            start = 1 - start;
        }
        cout<<endl;
    }
}
void print12(int n){
    for(int i =1;i<=n;i++)
    {
        int space = 2* (n-1);
        //numbers
        for(int j=1;j<=i;j++)
        {
            cout<< j;
        }

        //space
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }

        //numbers
        for(int j=i;j>=1;j--)
        {
            cout<< j;
        }

        cout<<endl;
        space -= 2;

    }
}
void print13(int n)
{
    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
    
        for(char ch = 'A'; ch<='A'+ i; ch++){
            cout<< ch <<" ";
        }
        cout<< endl;
    }
}


int main()
{
    int n;
    cout<<"Enter the rows:";
    cin>>n;
    print14(n);
}