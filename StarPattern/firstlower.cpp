#include <iostream>
using namespace std;
//First lower case repeating twice
int main() {
    string s;
    cin >> s;
    int freq[26] = {0};
    for(char c : s) {
        if(c >= 'a' && c <= 'z') {      // only lowercase
            freq[c - 'a']++;
            if(freq[c - 'a'] == 2) {
                cout << c;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
