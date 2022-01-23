#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,grade;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>grade;
        cout << (grade < 38 || grade % 5 < 3 ? grade : grade + (5 - (grade % 5))) <<endl;
    }
    return 0;
}
