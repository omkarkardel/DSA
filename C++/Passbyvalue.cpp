#include<iostream>
using namespace std;

//Pass by value
void doSomething(string s)
{
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    s[0] = 't';
    cout << s << endl;
}
int main()
{
    string s = "raj";
    // doSomething(num);
    // cout << num << endl;
    doSomething(s);
    cout << s <<endl;
    return 0;

}