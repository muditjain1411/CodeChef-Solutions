#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t>0){
	     string s,d;
	     cin >> s >> d;
	     for(int i=0;i<5;i++){
	         if(s[i] == d[i]){
	             cout << "G";
	         }
	         else {
	             cout << "B";
	         }
	     }
	     cout << endl;
	     
	     t--;
	 }

}
