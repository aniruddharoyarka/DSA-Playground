#include<bits/stdc++.h>
using namespace std;

int kthSmallNumber(vector<int> vec,int n)
{
    int smallest;
    for(int i = 0;i<n;i++) {
        smallest = i;
        for(int j = i+1;j<=vec.size()-1;j++) {
            if(vec[smallest]>vec[j]) {
                smallest = j;
            }
        }
        int temp = vec[i];
        vec[i] = vec[smallest];
        vec[smallest] = temp;
    }
    /*
    for(int i = 0;i<vec.size();i++) {
        cout << vec[i] << " ";
    }
    */

    return vec[n-1];
}

int main()
{
    vector<int> vec = {3,5,6,1,2,4};

    cout << kthSmallNumber(vec, 3);
}
