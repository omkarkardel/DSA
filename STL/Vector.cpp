#include<iostream>
#include<vector>>
using namespace std;
int main() {
    vector<int> v;
    
    vector<int> a(5,1);

    vector<int > last(a);
    
    cout<<"print last"<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }
    //check size of vector
    cout<<"Size->"<<v.capacity()<<endl;

    // push element in vector
    v.push_back(1);
    cout<<"Size->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;

    cout<<"Element at 2nd Index->"<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }

    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;






}