#include <iostream>
using namespace std;

int main() {
	unsigned int n;
	int rmndr;
	cin>>n;
	int ar[n],rev[n];
	for(int i=0;i<n;i++){
	    cin>>ar[i];
	    rev[i]=0;
	    while(ar[i]!=0){
	        rmndr = ar[i]%10;
	        rev[i]=rev[i]*10+rmndr;
	        ar[i]=ar[i]/10;
	    }
	    cout<<rev[i]<<endl;
	}
	
	return 0;
}
