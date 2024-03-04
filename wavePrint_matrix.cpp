//  WAVE PRINT A MATRIX

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr2d{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

        int m = arr2d.size();
        int n = arr2d[0].size();

        for (int startcol = 0; startcol < n; startcol++)
        {
            if((startcol & 1)==0){  //for even top-bottom
                for (int i = 0; i < m; i++)
                {
                    cout<<" "<<arr2d[i][startcol]<<" ";
                }
            }else{      //for odd this need to be understand
                for (int i = m-1; i>=0 ; i--)
                {
                    cout<<" "<<arr2d[i][startcol]<<" ";
                }
                
            }
        }
        

    return 0;
}