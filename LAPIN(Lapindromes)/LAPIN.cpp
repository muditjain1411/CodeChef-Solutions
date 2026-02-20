#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s,left,right;
	    cin >> s;
	    left = s.substr(0,s.length()/2);
	    right = s.substr((s.length()+1)/2);
	    
	    sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        
        if (left == right) {
            cout << "YES" << endl;
        }   
        else {
            cout << "NO" << endl;
        }
	}

}
