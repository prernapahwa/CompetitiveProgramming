#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	scanf("%d",&t);
	while(t--) {
		long long int n;
		scanf("%lld",&n);
		long long int x,y;
		map<long long int ,long long int > x_points;
		map<long long int ,long long int >y_points;
		long long int temp = (4*n)-1;
		while(temp--) {
			scanf("%lld",&x);
			scanf("%lld",&y);
			x_points[x]++;
			y_points[y]++;
		}
		map<long long int ,long long int >::iterator it;
		it = x_points.begin();
		long long int ans_x=0;
		long long int ans_y =0;
		while(it != x_points.end()) {
			if(it->second %2 !=0 ) {
				ans_x = it->first;
				break;
			}
			it++;
		}
		it = y_points.begin();
		while(it != y_points.end()) {
			if(it->second %2 !=0 ) {
				ans_y = it->first;
				break;
			}
			it++;
		}
		printf("%lld %lld \n",ans_x,ans_y);
	}
}
