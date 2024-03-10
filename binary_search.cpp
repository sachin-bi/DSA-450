#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        if (target > element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    // binary search
    int arr[] = {2, 4, 6, 7, 9, 13, 14};
    int size = 7;
    int target = 15;

    int ans = binarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << target << " not found";
    }
    else
    {
        cout << ans << " is index ";
    }

    return 0;
}