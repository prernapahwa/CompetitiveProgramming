#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,b,m;
	    cin>>n>>b>>m;
	    int a[m];
	    for(int i=0;i<m;i++) {
	        cin>>a[i];
	    }
	    int ans=0;
	    int i,j=-1,k=0;
	    while(k<m) {
	    	i=a[k]/b;
			if(i!=j) {
	    		ans++;
	    	}
	    	j=i;
	    	k++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
