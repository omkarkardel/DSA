#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N<=1){
        cout<<"Not Prime";
    }
    else{
        int cnt = 0;
        for(int i=1;i<=N;i++)
        {
            
            if(N%i == 0){
              cnt++;
            }
        }
        if(cnt == 2) {cout<<cnt<<"Prime";}
        else{
            cout<<cnt<<"Not prime";
        }

    }
}