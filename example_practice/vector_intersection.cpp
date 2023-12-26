#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // intersection - (find common in btw 2 arrays)
    vector<int> arr{2, 3, 8, 8, 4, 8, 5, 6, 7, 8};
    vector<int> brr{45, 8, 6, 0, 8, 8, 49};

    vector<int> ans;
    vector<int> noDublicate;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                ans.push_back(element);
                brr[j] = INT8_MIN;
                break; // break is necessary to get exact no. of intersection
                // arr[i]=-2;   //not needed as only once loop is going
            }
        }
    }

    for (auto i : ans)
    {
        cout << " " << i;
    }
    cout << endl;


/*
    // this is for the elemination of double occurance no.s
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = INT8_MIN;
            }
        }
    }
    for (auto value : arr)
    {
        cout << " " << value;
    }
*/
    return 0;
}
