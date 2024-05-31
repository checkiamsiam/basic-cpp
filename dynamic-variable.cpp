#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    
    int *a = new int[5]; // dynamic memory won't be deleted after function call
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    // delete[] a; // if we delete here then it will give error because we are returning a pointer to a
    return a;
}
int main()
{
    // int *p = new int; // dynamic memory will be deleted after function call
    // *p = 10;
    // delete p;
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;
    return 0;
}