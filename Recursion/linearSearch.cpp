#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // basecase
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
     linearSearch(arr + 1, size - 1, key);
    }

}

int main()
{
    int arr[5] = {2, 5, 7, 4, 8};
    int size = 5;
    int element = 9;

    bool ans = linearSearch(arr, size, element);
    if(ans){
        cout<<"Present"<<endl;

    }
    else{
        cout << "Absent"<<endl;
    }
    return 0;
}