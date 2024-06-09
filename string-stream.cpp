#include <bits/stdc++.h>
using namespace std;

void printWord(stringstream &ss) // pass by reference
{
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    printWord(ss); // stringstream must be passed by reference

    return 0;
}