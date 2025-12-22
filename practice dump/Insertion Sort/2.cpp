#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> vec)
{
    for(int i =1;i<vec.size();i++) {
        int key = vec[i];
        int j = i-1;
        while(j>=0 && vec[j]>key) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] =key;
    }

    for(int i =0;i<vec.size();i++) {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {10,9,8,7,6,5,4,3,2,1};
    insertionSort(vec);
}
