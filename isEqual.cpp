/*
Program to accept two numbers and check whether they are equal or not 
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;

    cout << "Enter two numbers : ";
    cin >> a >> b;

    if (a == b)
        cout << "Entered numbers are EQUAL";
    else
        cout << "Entered numbers are NOT EQUAL";

    return 0;
}
