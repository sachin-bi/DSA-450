// find the pivot element of the array{first assending , again assending} eg.{ 3, 4, 5, 1,2}; here ans(pivotElement) is 5
#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if ( mid+1 < arr.size() &&  arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if ( mid-1>=0 && arr[mid - 1] > arr[mid])
        {
            return arr[mid - 1];
        }
        else if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = (s + e) / 2;
    }
    return arr[mid];
}

int main()
{

    vector<int> arr = {4,5,6,9,1,3,5};
    int n = arr.size();
    cout << findPivot(arr);

    return 0;
}