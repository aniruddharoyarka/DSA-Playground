#include <bits/stdc++.h>
using namespace std;

vector<int> vec = {10,20,30,40,50,60,70};

int binarySearch(int target) {
    int low = 0,high =vec.size() -1;

    while(low<=high) {
        int mid = (low+high)/2;

        if(vec[mid] == target) {
            return mid;
        }
        else if (vec[mid] > target) {
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
}

int main()
{
    int answer = binarySearch(60);
    cout << answer;
}
