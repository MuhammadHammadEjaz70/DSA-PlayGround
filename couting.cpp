#include <iostream>
using namespace std;

void counting(int n)
{
    // basecase
    if (n == 0)
        return;

    // Processing
    cout << n << endl;

    // Tail Recursion
    // Recursive Relation
    counting(n - 1);
}

int main()
{

    int n;
    cin >> n;
    counting(n);
    return 0;
}