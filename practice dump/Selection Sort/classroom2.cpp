#include <bits/stdc++.h>
using namespace std;

void k_swaps(vector<int> vec, int k)
{
    for(int i=0; i<vec.size()-1 && i<k; i++)
    {
        int smallest = i;
        for(int j=i+1; j<vec.size(); j++) {
            if(vec[j]<vec[smallest]) {
                smallest = j;
        }
    }

    int temp = vec[smallest];
        vec[smallest] = vec[i];
        vec[i] = temp;
    }

    for(int i=0;i<vec.size();i++) {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {5,1,2,7,3,9,8,4};

    int n;
    cin >> n;

    k_swaps(vec,n);
}
