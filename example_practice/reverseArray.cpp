#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    int j = (sizeof(arr) / 4) - 1;

    for (int i = 0; i < j; i++)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}