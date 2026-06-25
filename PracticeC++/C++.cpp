#include<iostream>
using namespace std;
// To check given Numeber is prime or not
int main()
{
   int n;
   cin>>n;
   for(int i = 0;i<n;i++){
    
    int cnt = 0;

    for(int div=2;div*div<=n;div++)
    {
        if(n%div == 0){
         cnt++;
        }
    }
    if(cnt == 2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

   }
}