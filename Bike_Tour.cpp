#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int T=1;
    while(T<=t) {
        int n;
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++) {
            if(a[i-1]<a[i]&&a[i+1]<a[i]) {
                ans++;
            }
        }
        cout<<"Case #"<<T<<": "<<ans<<endl;
        T++;
    }
}
