#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t>0){
	    int a,b;
	    cin >> a >> b;
	    
	    int p=1;
	    while(true){
	        if(p%2==0){
	            b=b-p;
	            if(b<0){
	                cout << "Limak" << endl;
	                break;
	            }
	        }
	        else{
	            a=a-p;
	            if(a<0){
	                cout << "Bob" << endl;
	                break;
	            }
	          
	        }
	        p++;
	    }
	    t--;
	}

}
