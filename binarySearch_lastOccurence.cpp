// Find the Last occurence of the target element in arrray..

#include <iostream>
#include <vector>
using namespace std;

int first_occur(vector<int> arr, int target)
{
    int e = arr.size() - 1;
    int idx = -1;
    int s = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (target == arr[mid])
        {
            idx = mid;
            s = mid + 1; // search right
        }
        else if (target > arr[mid])
        {
            s = mid + 1; // search right
        }
        else
        {                // cond{tar<arr[mid]}
            e = mid - 1; // search left
        }
        mid = s + (e - s) / 2;
        }
    return idx;
}

int main()
{

    // int arr[]={1,3,4,4,4,4,4,6,7,9};
    // int e = sizeof(arr)/sizeof(int) - 1;
    vector<int> arr{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int occur_idx = first_occur(arr, target);

    if (occur_idx == -1)
    {
        cout << target << " not found";
    }
    else
    {
        cout << endl
             << occur_idx << " -- idx is LAST occurence of " << arr[occur_idx] << endl;
    }

    return 0;
}