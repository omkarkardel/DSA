#include<bits/stdc++.h>
using namespace std;

// Print name N times

void print(int i, int N) {
    if(i > N) return;
    cout<<"raj striver"<<endl;
    print(i+1, N);
   
}
int main() {
    int n;
    cin>>n;
    print(1,n);
} 