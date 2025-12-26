#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& vec,int low, int mid,int high)
{
    int i = low;
    int j = mid+1;

    vector<int> temp;

    while(i<= mid && j <= high) {
        if(vec[i]<vec[j]) {
            temp.push_back(vec[i]);
            i++;
        }
        else {
            temp.push_back(vec[j]);
            j++;
        }
    }

     while(i<= mid) {
        temp.push_back(vec[i]);
        i++;
     }

     while(j<= high) {
        temp.push_back(vec[j]);
        j++;
     }

     for(int k=0;k<temp.size();k++) {
        vec[low + k] = temp[k];
     }
}

void mergeSortA(vector<int>& vec,int low,int high)
{
    if(low<high) {
        int mid = (low+high)/2;
        mergeSortA(vec,low,mid);
        mergeSortA(vec,mid+1,high);
        mergeSort(vec,low,mid,high);
    }
}

int main()
{
    vector<int> vec = {4,1,7,8,3,2};

    int n = vec.size()-1;

    mergeSortA(vec,0,n);

    for(int i=0;i<vec.size();i++) {
        cout <<vec[i] << " ";
    }
}
