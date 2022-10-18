#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count1=0,count2=0;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        if(A[i]%2==0){
	            count1++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(A[i]%2!=0){
	            count2++;
	        }
	    }
	    if(count1==n){
	        cout<<"0"<<endl;
	    }
	    else if(count2==n){
	        cout<<"0"<<endl;
	    }
	    else if(count1!=n){
	        cout<<count1<<endl;
	    }
	    
	    
	}
	return 0;
}
