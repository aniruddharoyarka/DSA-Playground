//Binary Search on duplicate elements

#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int binarySearch(int value) {
    int low =0, high = vec.size()-1;
    int ans = 0;
    while(low<=high) {
        int mid = (low + high) /2;

        if(vec[mid] == value) {
            ans = mid;
            low = mid + 1;
        }
        else if(vec[mid] < value) {

        }
        else {
            high = mid -1;
        }
    }
    return low;
}

int main()
{
    int n;
    cout << "Enter Number of elements: ";
    scanf("%d", &n);

    int x;

    for(int i=0;i<n;i++) {
        cout << i+1 << ": ";
        scanf("%d",&x);
        vec.push_back(x);
    }

    cout << "Enter your number: ";
    int value;
    scanf("%d", &value);
    int index = binarySearch(value);
    cout << "INDEX: " << index;
}
