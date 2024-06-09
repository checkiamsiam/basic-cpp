#include <bits/stdc++.h>
using namespace std;

void rename(string &s) // pass by reference 
{
    s="Sunil";
}

int main()
{
    string name = "Rahul";
    // string is a class in c++ and it is a part of standard template library
    // string is a dynamic array of characters
    // string is a class so it has its own functions
    int len = name.length(); // returns the length of the string
    name.size();             // returns the size of the string
    name.append(" Kumar");   // appends the string
    name = "Siam";
    rename(name); // pass by reference

    string newName = name + " Kumar"; // concatenation

    cout << newName << endl;

    cout << name << len << endl;
    return 0;
}

// string s="hello world";
// 1
// string s("hello world");
// 2
// string s("hello world",7);
// 3
// string a="hello world";
// string s(a,4);