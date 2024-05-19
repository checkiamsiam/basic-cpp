#include <iostream>

using namespace std;

int main()
{
    double a;
    cin >> a;

    // ternary operator
    cout << (a > 0 ? "positive" : "negative") << endl;

    // nested ternary operator
    cout << (a > 0 ? "positive" : (a == 0 ? "zero" : "negative")) << endl;
    return 0;
}