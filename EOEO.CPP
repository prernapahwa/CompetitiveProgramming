#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int ts;
        cin>>ts;
        int twos=0;
        long long int temp=ts;
        if (ts==1||ts==0) {
            cout<<"0"<<"\n";
        }
        else if(ts%2==1) {
            long long int ans=ts/2;
            cout<<ans<<"\n";
        }
        else if(ts%2==0) {
            while(ts%2==0) {
                ts=ts/2;
            }
            long long int ans=ts/2;
            printf("%lld\n",ans);
        }
    }
}
