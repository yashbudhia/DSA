#include<bits/stdc++.h>
using namespace std;

int main(){

    //Write a program that takes age as input and returns adult(>=18) or underage

    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age>= 18){
        cout << "Adult";
    }
    else{
        cout << "underage";
    }
}