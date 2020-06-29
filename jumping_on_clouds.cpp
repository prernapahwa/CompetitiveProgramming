#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n-1;) {
        //cout<<i<<" ";
        if(a[i+2]==0) {
            i=i+2;
            ans++;
        }
        else if (a[i+2]==1){
            if(a[i+1]==0) {
                i=i+1;
                ans++;
            }
        }
    }
    cout<<ans;
}
