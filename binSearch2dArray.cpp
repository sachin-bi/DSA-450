// find the elements of 2d array with idx using binary search
#include <iostream>
using namespace std;

bool findEle(int arr[][4], int rows, int cols, int target)
{
    int s = 0;
    int e = (rows * cols) - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowidx = mid / cols;
        int colidx = mid % cols;
        if (arr[rowidx][colidx] == target)
        {
            cout<<rowidx<<", "<<colidx<<endl;
            return true;
        }
        else if (arr[rowidx][colidx] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    bool ans = findEle(arr, 3, 4, 11);
    if (ans)
    {
        cout << "found    ";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}