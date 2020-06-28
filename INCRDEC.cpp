#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n],max=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]>max) {
				max=a[i];
			}
		}
		int fre[max+1]={0};
		int flag=0;
		for(int i=0;i<n;i++) {
			fre[a[i]]++;
			if(fre[a[i]]>2) {
				flag=1;
				break;
			}	
			else if(fre[max]>1) {
				flag=1;
				break;
			}
		}
		if(flag==1) {
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
			for(int i=0;i<max+1;i++) {
				if(fre[i]>=1) {
					fre[i]--;
					cout<<i<<" ";
				} 
			}
			for(int i=max;i>=0;i--) {
				if(fre[i]==1) {
					cout<<i<<" ";
				}
			}
			cout<<endl;
		}
	}
}
