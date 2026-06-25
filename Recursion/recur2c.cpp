#include<bits/stdc++.h>
using namespace std;

// Print 1 to n recursion


void print(int i, int N)
{
    if(i < 1) return;
    print(i-1,N);
     cout<<i<<endl;
}
int main() {
    int n;
    cout<<"How many number you want to print from n to 1:";
    cin>>n;
    print(n,n);
}