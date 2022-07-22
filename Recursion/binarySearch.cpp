#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{

    for (int i = s ; i <=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    
}

bool binarySearch(int arr[], int starting, int ending, int element)
{

    print(arr, starting, ending);
    // basecase
    // if not found
    if (starting > ending)
        return false;

    int mid = starting + (ending - starting) / 2;
    cout<<"Value of Array mid is " <<arr[mid]<<endl;
    // if found
    if (arr[mid] == element)
       { return true;}

     if (arr[mid] < element)
    {
        return binarySearch(arr, mid + 1, ending, element);
    }
    else
    {
        return binarySearch(arr, starting, mid - 1, element);
    }
}
int main()
{
    int arr[9] = {2, 6, 9, 10, 15,45,96,105, 222};
    int element = 6;
    bool ans = binarySearch(arr, 0, 8, element);
    if (ans)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}