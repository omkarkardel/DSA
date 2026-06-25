#include<bits/stdc++.h>
using namespace std;
//print for 1 to N lineraly
void print(int i,int N) {

    if(i > N) return;
    cout<<i<<endl;
    print(i+1,N);
}
int main() {
    int n;
    cin>>n;
    print(1,n);
}

