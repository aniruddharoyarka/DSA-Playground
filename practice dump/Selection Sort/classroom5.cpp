#include <bits/stdc++.h>
using namespace std;

int kth_smallest(vector<int> vec, int k)
{
    for(int i=0;i<k;i++) {
        int smallest = i;
        for(int j=i+1;j<vec.size();j++) {
            if(vec[j]<vec[smallest]) {
                smallest = j;
            }
        }
        int temp = vec[smallest];
        vec[smallest] = vec[i];
        vec[i] = temp;
    }

    return vec[k-1];
}

int main()
{
    vector<int> vec = {10,9,8,7,6,5,4,3,2,1};

    cout << kth_smallest(vec,3);
}
