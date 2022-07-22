#include <iostream>
#include <string>
using namespace std;
void sayDigit(int n)
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // basecase
    if (n <= 0)
        return;

    int digit = n % 10;
    n = n / 10;
    sayDigit(n);
    cout << arr[digit] << endl;
}

int main()
{
    int n;
    cin >> n;

    sayDigit(n);

    return 0;
}