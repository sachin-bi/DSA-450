// Find idx of target of a nearly sorted array {10,3,40,20,50,80,70};
// T.C. <= O( log (n) )

#include <iostream>
#include <vector>
using namespace std;

int nearlySorted_idx(vector<int> nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (mid + 1 < nums.size() && nums[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (mid - 1 > -1 && nums[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 2;
        }
        else if (nums[mid] > target)
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> nums = {10, 3, 40, 20, 50, 80, 70};
    int target = 50;
    int idx = nearlySorted_idx(nums, target);
    cout << "idx of " << target << " is " << idx << endl;
    return 0;
}