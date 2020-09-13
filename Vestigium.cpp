#include<iostream>
using namespace std;
int main() {
    int t=0;
    int T;
    cin>>T;
    while(t++<T) {
        
        int n;
        cin>>n;
        int arr[n][n];
        //int fre[n]={0};
        int r=0,c=0;
        int trace=0;
        int flag=0;
        for(int i=0;i<n;i++) {
            flag=0;
            int fre[n+1]={0};
            for(int j=0;j<n;j++) {
                cin>>arr[i][j];
                fre[arr[i][j]]++;
                if(fre[arr[i][j]]>=2&&flag==0) {
                    r++;
                    flag=1;
                }
                if(i==j) {
                    trace+=arr[i][j];
                }
            }
        }
        for(int i=0;i<n;i++) {
            flag=0;
            int fre[n+1]={0};
            for(int j=0;j<n;j++) {
                fre[arr[j][i]]++;
                if(fre[arr[j][i]]>=2&&flag==0) {
                    c++;
                    flag=1;
                }    
            }
        }
        cout<<"Case #"<<t<<": ";
        cout<<trace<<" "<<r<<" "<<c<<endl;
    }
}
