// ADDITION OF TWO NUMBERS USING ARRAY
#include <iostream>
#include <vector>
#include <algorithm>    //  for reverse functon
using namespace std;

int main()
{
    string ans;
    vector<int> a{0, 3, 1, 9};
    vector<int> b{8, 3, 2, 4};

    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        carry = x / 10;
        ans.push_back(digit + '0');
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = a[i] + carry;
        int digit = x % 10;
        carry = x / 10;
        ans.push_back(digit + '0');
        i--;
    }
    while (j >= 0)
    {
        int x = b[j] + carry;
        int digit = x % 10;
        carry = x / 10;
        ans.push_back(digit + '0');
        j--;
    }
    if (carry > 0)
    {
        ans.push_back(carry + '0');
    }
    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;

    return 0;
}