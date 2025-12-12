#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

bool binarySearch(int value) {
    int low =0, high = vec.size()-1;
    while(low<=high) {
        int mid = (low + high) /2;
        if(vec[mid] == value) {
            return 1;
        }
        else if(vec[mid] > value) {
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return 0;
}

int lowerBound(int value)
{
    int low =0, high = vec.size()-1;
    int ans = vec.size();
    while(low<=high) {
        int mid = (low + high) /2;

        if(vec[mid] >= value) {
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(int value)
{
    int low =0, high = vec.size()-1;
    int ans = vec.size();
    while(low<=high) {
        int mid = (low + high) /2;

        if(vec[mid] > value) {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);

    int x;

    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        vec.push_back(x);
    }

    int value;
    scanf("%d", &value);
    bool isFound = binarySearch(value);
    if(isFound) {
        cout << "BOOK FOUND\n";
    }
    else {
        cout << "BOOK NOT FOUND\n";
    }
    cout << "Lower Bound Index: " << lowerBound(value) << "\n";
    cout << "Upper Bound Index: " << upperBound(value) << "\n";

}
