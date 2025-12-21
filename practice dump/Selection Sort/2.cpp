#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    cin.ignore();
    vector<string> name(n),author(n);
    vector<int> year(n);

    for(int i = 0;i<n;i++) {
        getline(cin,name[i],',');
        cin.ignore();
        getline(cin,author[i],',');
        cin.ignore();
        cin >> year[i];
        cin.ignore();
    }

    cout << endl;

    for(int i = 0;i<n-1;i++) {
        int recent = i;
        for(int j = i+1;j<n;j++) {
            if(
               (year[j]>year[recent]) ||
               (year[j] == year[recent] && author[recent]>author[j]) ||
               (year[j] == year[recent] && author[recent] == author[j] && name[recent]>name[j])
               ) {
                recent = j;
            }
        }

        string temp = name[recent];
        name[recent] = name[i];
        name[i] = temp;

        temp = author[recent];
        author[recent] = author[i];
        author[i] = temp;

        int temp_year = year[recent];
        year[recent] = year[i];
        year[i] = temp_year;
    }

    for(int i = 0;i<n;i++) {
        cout << name[i] << ", "<< author[i] << ", " << year[i]<<endl;
    }
}
