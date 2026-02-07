#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	
	while(t>0){
	    
	    int a,b,c;
	    cin >> a >> b >> c;
	    
	    int amt = (a<b)?((a<c)?b+c:a+b):((b<c)?a+c:a+b);
	    
	    cout << amt << "\n";
	    t--;
	}

}
