#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i =0;i<s.length()-1;i++) {
        int smallest = i;
        for(int j=i+1;j<s.length();j++) {
            if(s[smallest]>s[j]) {
                smallest = j;
            }
        }

        char temp = s[i];
        s[i] = s[smallest];
        s[smallest] = temp;
    }

    cout << s;
}
