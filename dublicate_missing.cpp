// find the missing elements ranging from [1,n] . n is the size of the array
#include <iostream>
#include <vector>
#include <algorithm> //to use sort fn
using namespace std;

void display(vector<int> arr)
{
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void visited_method(vector<int> arr)
{
    display(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        int idx = abs(arr[i]);
        if (arr[idx - 1] > 0)
        {
            arr[idx - 1] *= -1;
        }
    }
    display(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            // cout << "duli - " << arr[i] << endl;    //this line needs to be corrected..
            cout << "missing - " << i + 1 << endl;
        }
    }
}

void sorting_swaping(vector<int> arr)
{
    int i = 0;
    while (i < arr.size())
    {
        int idx = arr[i];
        if (arr[idx - 1] != idx)
        {
            swap(arr[i], arr[idx - 1]);
        }
        else
        {
            i++;
        }
    };

    display(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 1 + i)
        {
            cout << "missing = " << i + 1 << endl;
        }
    }
}

int main()
{
    vector<int> arr = {2, 3, 4, 3};

    sorting_swaping(arr);
    // visited_method(arr);
    

    //----------bruth-force(ROUGH)----------------------
    // int dublicate=-60;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int idx=abs(arr[i]);
    //     if (arr[idx-1]<0)
    //     {
    //         dublicate=idx;
    //         break;
    //     }

    //     arr[idx-1] *=-1;

    // }
    // cout<<dublicate;
    // cout << endl;
    // int missing=-61;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    //     if (arr[i]>0)
    //     {
    //         missing=i+1;
    //     }

    // }
    // cout << endl<<missing;
    // // display(arr);

    return 0;
}