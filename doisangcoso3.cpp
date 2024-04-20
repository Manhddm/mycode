#include <bits/stdc++.h>
using namespace std;
void cs3(int x){
    vector <int>a ; 
    while (x>0){
        a.push_back(x%3);
        x/=3;
    }
    for (int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
}
main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cs3(x);
        cout<<endl;
    }
}