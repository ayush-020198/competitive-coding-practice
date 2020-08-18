#include<bits/stdc++.h>
using namespace std;
unsigned long a[301];
long long int fibbtwo(long long int n){
    
    if(a[n]!=-1)
    return a[n];
    
    a[n]=(fibbtwo(n-1)+fibbtwo(n-2))%100;
    return a[n];
}


int main()
 {
	//code
	long long int t,n;
	cin>>t;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=300;i++){
	    a[i]=-1;
	}
	int m=300;
	fibbtwo(m);
	while(t--){
	    cin>>n;
	    if(a[n%300]<10)
	    cout<<0<<a[n%300]<<endl;
	    else 
	    cout<<a[n%300]<<endl;
	}
	return 0;
}
