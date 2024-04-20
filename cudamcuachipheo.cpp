#include <bits/stdc++.h>
using namespace std;
main(){
    int x;
    cin>>x;
    vector<int>a(2,1);
    int i=2,pucnh=1,cnt=0;
    x-=1;
    while (x>=0){
        a.push_back(a[i-1]+i);
        x-=a[i];
        cnt++;
        i++;
    }
    cout<<cnt;
}