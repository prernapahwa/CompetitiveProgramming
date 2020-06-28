#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long int s,v;
		cin>>s>>v;
		long long int ans=0;
		if(s%2==1) {
			ans+=1;
			s-=1;
		}
		if(s>0){
			ans+=s/v;
	 		s=s%v;
			
			if(s>0)
			ans+=1;
		}
		cout<<ans<<endl; 
	}
}
