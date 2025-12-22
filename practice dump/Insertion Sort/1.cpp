#include <bits/stdc++.h>
using namespace std;

vector<int> vec = {5,1,7,3,2,8};

int main()
{
    for(int i = 1;i<vec.size();i++) {
        int key = vec[i];
        int j = i-1;
        while(j>=0 && vec[j]>key) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }

    for(int i =0 ;i<vec.size();i++) {
        cout << vec[i] << " ";
    }
}




