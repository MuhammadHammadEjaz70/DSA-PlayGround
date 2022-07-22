#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // basecase
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {2, 3, 3, 5, 6};
    int size = 5;
    bool ans = isSorted(arr, size);
    // arr is a pointer to the first element of the array.So, if we move arr by 1 position it will point the second element.
    if (ans)
    {
        cout << "The Array is sorted";
    }
    else
    {
        cout << "The Array is not sorted";
    }

    return 0;
}