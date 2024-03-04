// find the dublicate ranging from [1,n] n=size

#include <iostream>
#include <vector>
#include <algorithm> //for using sorted fn
using namespace std;

void display(vector<int> arr)
{
    // sort(arr.begin(),arr.end());
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortedMethod(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        sort(arr.begin(), arr.end());
        if (arr[i] == arr[i + 1])
        {
            cout << "sorted method -> " << arr[i];
        }
    };
}

void visitedMethod(vector<int> arr)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        arr[index] *= -1;
    }
    cout << ans << " -> is dublicate";
}

void PositioningMethod(vector<int> arr)
{
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0] << " -->> is dublicate through positioning method" << endl;
    display(arr);
}

int main()
{
    vector<int> arr{2, 1, 3, 3};
    PositioningMethod(arr);

    // visitedMethod(arr);
    // sortedMethod(arr);



//-------------brute-force---------------------------
    // display(arr);
    // long process for marking method{bruth force}
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         if (i+1==arr[j])
    //         {
    //             arr[j]=-arr[j];
    //             break;
    //         }

    //     }

    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i]>0)
    //     {
    //         cout<<arr[i];
    //     }

    // }

    return 0;
};