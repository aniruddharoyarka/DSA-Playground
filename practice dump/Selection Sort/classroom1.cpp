#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> vec)
{
    int comparsionCount = 0;
    int swapCount = 0;
    for(int i=0;i<vec.size()-1;i++) {

        if(vec[i]<=0) continue;

        int smallest = i;
        for(int j =i+1;j<vec.size();j++) {
            comparsionCount++;
            if(vec[j]>0 && vec[j]<vec[smallest]) {
                smallest = j;
            }
        }
        if(smallest != i) {
            int temp = vec[smallest];
            vec[smallest] = vec[i];
            vec[i] = temp;
            swapCount++;
        }

    }

    for(int i=0;i<vec.size();i++) {
        cout << vec[i] << " ";
    }

    cout << "\nCompares: " << comparsionCount;
    cout << "\nSwaps: " << swapCount;
}

int main()
{
    vector<int> vec = {-5,1,-2,-3,3,9,8,4};

    selectionSort(vec);
}
