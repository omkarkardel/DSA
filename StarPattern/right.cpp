#include<iostream>
using namespace std;
void print(int n) {
    for(int i = 1; i <= n; i++) {
    // spaces
    for(int s = 1; s <= n - i; s++)
        cout << " ";

    // stars
    for(int j = 1; j <= i; j++)
        cout << "*";

    cout << endl;
    }
}
int main() {
   int n;
   cin>>n;
   print(n);
}

