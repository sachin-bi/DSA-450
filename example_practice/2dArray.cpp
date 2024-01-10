#include <iostream>
using namespace std;

void print2d(int arr[][3]) //-----look into syntax....compiler finds it by (c*i+j)
{
    //  //----printing 2d array-------
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << arr[i][j]; // for coloumn wise - arr[j][i]
        }
        cout << endl;
    }
    cout << "---printed using function---" << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print2d(arr);

    // //----this for input of 2d Array----
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cin>>arr[i][j];
    //             //cout << " " << arr[i][j];   // coloumn wise - arr[j][i]
    //         }
    //         cout << endl;
    //     }

    //  //-----printing row sum of 2d Array------
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[j][i]; //--column wise sum print

            // sum = sum + arr[i][j];        //--row wise sum print
        }
        cout << "sum = " << sum << endl;
    }
    cout << "---printed---" << endl;

    return 0;
}