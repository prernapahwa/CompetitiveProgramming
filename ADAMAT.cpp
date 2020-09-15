#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>arr[i][j];
		}
	}
	int fixed;
	int count=0;
	if(arr[0][1]==2) {
		fixed=1;
		count=0;
	}
	else {
		fixed=0;
		count=1;
	}
	for(int i=2;i<n;i++) {
		if(arr[0][i]!=i+1) {
			if(fixed==1) {
				count+=2;
			}
			fixed=0;	
		}
		else {
			fixed=1;
		}
	}
	cout<<count<<endl;
}
}
