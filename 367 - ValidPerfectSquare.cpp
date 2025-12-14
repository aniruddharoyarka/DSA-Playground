#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    if(num<2) return true;

    int low = 1,high = num/2;

    while(low<=high) {
        long long  mid = (low+high)/2;
        long long sq = mid*mid;

        if(sq == num) return true;
        else if(sq<num) low = mid + 1;
        else high = mid -1;
    }
    return false;
}

int main()
{
    cout << isPerfectSquare(25);
}
