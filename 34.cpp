#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> result = {2, -1};

    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            if (nums[mid] == target){
                first = mid;
            }
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (first == -1){
        return result;
    }

    low = 0;
    high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target)
        {
            if (nums[mid] == target) {
                 last = mid;
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    result[0] = first;
    result[1] = last;
    return result;
}

int main()
{
    vector<int> vec = {5,7,7,8,8,10};
    int target = 8;

    vector<int> result = searchRange(vec,target);
    cout << "[" << result[0] << ", " << result[1] << "]";
}
