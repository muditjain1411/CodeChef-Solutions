#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t>0){
	    int n,k;
	    cin >> n >> k;
	    int temp;
	    for(int i=0; i<n ; i++){
	        cin >> temp;
	        if(temp <= k){
	            cout << 1;
	            k = k-temp;
	        }
	        else{
	            cout << 0;
	        }
	    }
	    cout << "\n";
	    t--;
	}

}
