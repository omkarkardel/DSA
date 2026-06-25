#include <iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int changes = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1]) {
            changes++;
        }
    }
    cout << changes;
    return 0;
}
