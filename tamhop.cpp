#include <bits/stdc++.h>
using namespace std;
main(){
    int n;  cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    int tmax=INT_MIN;
    int maxLeft[n],maxRight[n];
    maxLeft[1]=a[0];
    maxRight[n-2]=a[n-1];
    for (int i=2;i<n-1;i++){
        maxLeft[i]=max(maxLeft[i-1],a[i-1]);
    }
    for (int i=n-3;i>=0;i--){
        maxRight[i]=max(maxRight[i+1],a[i+1]);
    }
    for (int i=1;i<n-1;i++){
        tmax=(tmax < maxLeft[i]-a[i]+maxRight[i]) ? maxLeft[i]-a[i]+maxRight[i] : tmax;
    }
    cout<<tmax<<endl;
}