#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;

    for(int i=0;i<t;i++){
        string S;
        int n;
        cin >> n; 
        cin >> S;
        int l=0,f=0;
        for(int j=0;j<n;j++){
            if(S[j]=='a'||S[j]=='e'||S[j]=='i'||S[j]=='o'||S[j]=='u'){
                l=0;
            }
            else{
                l++;
            }
            if(l==4){
                f=1;
                break;
            }
        }
        if(f==0){
        cout << "Yes" << endl;
        }
        else{
        cout << "No" << endl;
        }
    }
}
