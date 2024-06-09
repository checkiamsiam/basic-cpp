#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n); // ascending
    sort(a, a + n, greater<int>()); // descending
   
   // shorthand loop for printing array or array of something
    for (int i: a)
    {
        cout << i << " ";
    }
    return 0;
}