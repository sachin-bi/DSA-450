//  SPIRAL PRINT A MATRIX

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int m = arr.size();
    int n = arr[0].size();

    int total_element = m * n;
    int count = 0;

    int start_row = 0;
    int end_col = n - 1;
    int end_row = m - 1;
    int start_col = 0;

    while (count < total_element)
    {
        for (int i = start_col; i <= end_col && count < total_element; i++)
        {
            cout << " " << arr[start_row][i];

            count++;
        }
        start_row++;
        for (int i = start_row; i <= end_row && count < total_element; i++)
        {
            cout << " " << arr[i][end_col];

            count++;
        }
        end_col--;
        for (int i = end_col; i >= start_col && count < total_element; i--)
        {
            cout << " " << arr[end_row][i];

            count++;
        }
        end_row--;
        for (int i = end_row; i >= start_row && count < total_element; i--)
        {
            cout << " " << arr[i][start_col];

            count++;
        }
        start_col++;
    }

    return 0;
}