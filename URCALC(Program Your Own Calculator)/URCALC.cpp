#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b;
	char opr;
	
	cin >> a;
    cin >> b;
	cin >> opr;
	
	cout << fixed << setprecision(7);
	
	switch(opr){
	    case '-':
	        cout << a-b;
	        break;
	    case '*':
	        cout << a*b;
	        break;
	    case '/':
	        cout << a/b;
	        break;
	    case '+':
	        cout << a+b;
	        break;
	}

}
