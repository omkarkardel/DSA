#include<iostream>
using namespace std;
void print2(int n) {
    for(int i=0;i<n;i++) {
   
     for(int j=0;j<=i;j++) {
        cout<<"*";
     }
    cout<<endl;
   }
}
int main() {
    //Left aligned
   int n;
   cout<<"Enter the Number:";
   cin>>n;
   print2(n);
   
} 
