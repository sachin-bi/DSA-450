#include <iostream>
#include <vector>
using namespace std;

int find_sqroot(int target)
{
    int s = 0;
    int e = target;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        else if (mid * mid < target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (mid * mid == target)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 12;
    int ans = find_sqroot(n);
    // cout << ans;

    double finalans = ans;
    int precision = 4;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j*j<=n ; j=j+step)
        {
            finalans=j;
        }
        step/=10;
    }cout<<finalans;
    
    return 0;
}