#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	
	while(t>0){
	    int n;
	    cin >> n;
	    
	    // storing valuse in an array
	    vector<int> arr;
	    for(int i=0; i<n;i++){
	        int temp;
	        cin >> temp;
	        arr.push_back(temp);
	    }
        // checking if its in increasing order or not
	    int f=0;
	    for(int i=0;i<n-1;i++){
	        if(arr[i]>arr[i+1]){
	            f=1;
	            break;
	        }
	    }
	    if(f==0){
	        cout << "YES" << "\n";
	    }
	    else{
	        // Swapping array values as per condition 
	        for(int i=0;i<n-1;i++){
	            if(arr[i]>arr[i+1]){
	                int arrtemp = arr[i];
	                arr[i] = arr[i+1];
	                arr[i+1] = arrtemp;
	                break;
	            }
	        }
	        
	        // Once again checking if the array is in increasing order or not
	        int f=0;
	        for(int i=0;i<n-1;i++){
	            if(arr[i]>arr[i+1]){
	                f=1;
	                break;
                }
	        }
	        if(f==0){
	            cout << "YES" << "\n";
	        }
	        else{
	            cout << "NO" <<"\n";
	        }
	    }
    	        
	    t--;
	}

}
