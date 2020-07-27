#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n , m , x , y ;
	    cin >> n >> m >> x >> y;
	    int a , b , ans=0;
	    // assigning values to a & b. 
	    if ( x < y) {
	        a = x;
    	    if ( 2*x <= y) {
    	        b = x;
    	    } 
    	    else {
    	        b = y-x;
    	    }
	    }
	    else if ( x >= y) {
	        a = y;
	        b = 0;
	    }
	    
	    if ( n == 1 && m == 1) {
	        ans = x;
	    }
	    int r1 , r2 ;
	    r1 = a*(n/2) + b*(n/2);
	    r2 = r1;
	
	
	    if (n % 2 == 1) {
	        r1 = r1 + a;
	        r2 += b;
	    }
	    
	    if(m %2 ==0) {
	        ans = r1*(m/2) + r2 *(m/2);
	    }
	    else {
	        ans = r1*(m/2+1) + r2 *(m/2);
	    }
	     
	    if ( n == 1 && m == 1) {
	        ans = x;
	    }
	    cout<<ans<<endl;
	}
}
