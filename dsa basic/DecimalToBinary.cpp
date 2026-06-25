#include<iostream>
#include<cmath>
using namespace std;
int DecimalToBinary(int n)
{
    int binaryno =0;
    int i =0;
    while(n>0)
    {
        int bit = n%2;
        binaryno = bit*pow(10,i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}


int main()
{
    int n;
    cout<<"Enter Decimal number that you want to convert in Binary:";
    cin>>n;
    int binary = DecimalToBinary(n);
    cout<<binary<<endl;


}