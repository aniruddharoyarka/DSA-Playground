#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int binarySearch(int value) {
    int low =0, high = vec.size()-1;
    while(low<=high) {
        int mid = (low + high) /2;
        if(vec[mid] == value) {
            return mid;
        }
        else if(vec[mid] > value) {
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
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