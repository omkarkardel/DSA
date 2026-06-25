#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    if(num<=1){
        cout<<"Not Prime";
    }
    else{
        int cnt = 0;
        for(int i =1;i<=num;i++){
            if(num%i == 0){
                cnt++;
            }
            else{
                cout<<"Not Prime";
                break;
            }
        }
        if(cnt == 2){
            cout<<"Prime";
        }
        return 0;
    }
    

    
}