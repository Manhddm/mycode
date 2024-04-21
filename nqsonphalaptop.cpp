#include <bits/stdc++.h>
using namespace std;
main(){
    long long n,x,y1,y2,z;
    cin>>n>>x>>y1>>y2>>z;
    long long m=min(min(y1*n+y2,z),x*n);
    cout<<m;
}
