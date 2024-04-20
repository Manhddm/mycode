#include <bits/stdc++.h>
using namespace std;
main(){
    int a,b,h;
    cin>>a>>b>>h;
    int cnt=1;
    while (h>a){
        h-=a;
        h+=b;
        cnt++;
    }
    cout<<cnt;
}