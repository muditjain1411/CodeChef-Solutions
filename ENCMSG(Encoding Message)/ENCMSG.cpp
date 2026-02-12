#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    for(int i=0;i<n-1;i=i+2){
	        char temp = s[i];
	        s[i]=s[i+1];
	        s[i+1]=temp;
	    }
	    for (int i=0;i<n;i++){
	        int ascii = static_cast<int>(s[i]);
	        s[i] = static_cast<char>(219-ascii);
	    }
	    cout << s << endl;
	}

}
