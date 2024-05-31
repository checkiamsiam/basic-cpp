#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "Rahul";
    // string is a class in c++ and it is a part of standard template library
    // string is a dynamic array of characters
    // string is a class so it has its own functions
    int len = name.length(); // returns the length of the string
    name.size();   // returns the size of the string
    name.append(" Kumar"); // appends the string
    name = "Siam";

    cout << name << len << endl;
    return 0;
}