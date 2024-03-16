// find the peak element of the array{first assending , then decending} eg.{2, 3, 4, 5, 4, 1}; here ans(peakElement) is 5
#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = (s + e) / 2;
    } return arr[mid];
}

int main()
{

    vector<int> arr = {2, 3, 4, 5, 7,4, 1,0};
    int n = arr.size();
    cout << findPeak(arr, n);

    return 0;
}