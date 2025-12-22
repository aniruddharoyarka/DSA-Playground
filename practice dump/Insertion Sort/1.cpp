#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> vec,int value)
{
    int low=0,high = vec.size()-1;
    while(high>=low) {
        int mid = low + (high-low)/2;
        if(vec[mid] == value) {
            return true;
        }
        else if(vec[mid] > value) {
            high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    return false;
}

int main()
{
    vector<int> vec;

    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    for(int i=1;i<vec.size();i++) {
        int key = vec[i];
        int j = i-1;
        while(j>=0 && vec[j] > key) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }

    for(int i =0 ;i<vec.size();i++) {
        cout << vec[i] << " ";
    }

    int search;
    cin >> search;

    for(int i=0;i<search;i++) {
        int num;
        cin >> num;
        if(binarySearch(vec,num)) {
            cout << "Found\n";
        }
        else {
            cout << "Not Found\n";
        }
    }
}




