#include<iostream>
using namespace std;
int main(){
// Write a program that takes input of age
// and prints if you are adult or not

 int age;
 cout<<"Enter your age: ";
 cin>> age;

 if(age>=18)
 {
    cout<<"You are an adult";
 }
 else if(age<18)
 {
    cout<<"You are not an adult";
 }
}