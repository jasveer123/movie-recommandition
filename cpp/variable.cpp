#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n;
 int q;
 cin >> n;
 cin >> q;
 int* a[n];
 for(int i=0;i<n;i++){
        int s,z;
        cin >> s;
        a[i] = new int[s];
        for(int j=0;j<s;j++){
            cin>>z;
            a[i][j] = z;
        }
    }
    int x,y;
    for(int i=0;i<q;i++){
        cin >> x>> y;
        cout << a[x][y] << endl;
    }
return 0;
}
