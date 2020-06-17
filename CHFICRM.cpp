#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int i;
	    int p[n];
	    int fre[3]={0};
	    for(i=0;i<n;i++) {
	        cin>>p[i];
	    }
	    int flag=0;
	    for(i=0;i<n;i++) {
	        if(p[i]==5) {
	            fre[0]++;
	        }
	        else {
	           if(p[i]==10) {
	               if(fre[0]>=1) {
	                   fre[0]--;
	                   fre[1]++;
	               }
	               else if(fre[0]==0) {
	                   cout<<"NO"<<endl;
	                   flag=1;
	                   break;
	               }
	           }
	           if(p[i]==15) {
	               
	               if(fre[1]>=1) {
	                   fre[1]--;
	                   fre[2]++;
	               }
	               else if(fre[0]>=2) {
	                   fre[0]=fre[0]-2;
	                   fre[2]++;
	               }
	               else {
	                   cout<<"NO"<<endl;
	                   flag=1;
	                   break;
	               }
	           }
	        }
	    }
	    if(flag==0) {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
