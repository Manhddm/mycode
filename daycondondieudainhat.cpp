#include <bits/stdc++.h>
using namespace std;
main(){
    int n; cin>>n;
    int a[n];
    vector<int> dc(n,1);

    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[i]>a[j]){
                dc[i]=fmax(dc[i],dc[j]+1);
            }
        }
        max=fmax(max,dc[i]);
    }
    cout<<max;
}