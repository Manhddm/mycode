#include <bits/stdc++.h>
using namespace std;
main(){
    int n;
    queue<int>q1,q2;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        q1.push(x);
    }
    int d=0,k=1;
    while (!q1.empty())
    {
        if (q2.empty()){
            q2.push(q1.front());
            q1.pop();
            d++;
        }
        else if (q2.front()>q1.back()&&q1.front()>q1.back()){
            d++;
            if (q2.front()>q1.front()){
                q1.push(q1.front());
                q1.pop();
            }
            else{
                q1.push(q2.front());
                q2.pop();
            }
        }
        else if(q1.front()>q1.back()&&q1.front()>q2.back()){
            d++;
            if (q1.back()>q2.back()){
                q1.push(q1.front());
                q1.pop();
            }
            else{
                q2.push(q1.front());
                q1.pop();
            }
        }
        else if(q1.front()>q1.back()||q2.front()>q1.back()){
            d++;
            if(q1.front()>q2.front()){
                q1.push(q1.front());
                q1.pop();
            }
            else{
                q1.push(q2.front());
                q2.pop();
            }
        }
        else if (q1.front()>q1.back()||q1.front()>q2.back()){
            d++;
            if (q2.back()<q1.back()){
                q2.push(q1.front());
                q1.pop();
            }
            else{
                q1.push(q1.front());
                q1.pop();
            }
        }
        else{
            d++;
            if (q1.front()<q2.front()){
                q1.push(q1.front());
                q1.pop();
            }
            else{
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    cout<<d;
    return 0;
}