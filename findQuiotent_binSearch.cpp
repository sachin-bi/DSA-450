// find the quiotent of a divide with binary search

#include <iostream>
using namespace std;

int findQuiotent(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (abs(dividend) == abs(divisor) * mid)
        {
            ans = mid;
            break;
        }
        else if (abs(dividend) < abs(divisor) * mid)
        {
            e = mid - 1;
        }
        else if (abs(dividend) > abs(divisor) * mid)
        {
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s) / 2;
    }
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        return -ans;
    }
    else
    {
        return ans;
    }
}

int main()
{
    int dividend = -22;
    int divisor = 7;
    int ans = findQuiotent(dividend, divisor);
    cout << "ans is " << ans;
    return 0;
}