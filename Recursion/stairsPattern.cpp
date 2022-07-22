#include <iostream>
using namespace std;

int ways(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    int ans = ways(n - 1) + ways(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = ways(n);
    cout << ans << endl;
    return 0;
}