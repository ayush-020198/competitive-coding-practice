#include <bits/stdc++.h>
#include <queue>
using namespace std;

int bfs(int num, int x){
    queue<int> q;
    q.push(num);
    while(!q.empty()){
        num=q.front();
        q.pop();
        if(num<=x){
            cout<<num<<" ";
            int last_digit=num%10;
            if(last_digit==0){
                q.push( num*10 + last_digit+1 );
            }
            else if(last_digit==9){
                q.push( num*10 + last_digit-1 );
            }
            else{
                q.push( num*10 + last_digit-1 );
                q.push( num*10 + last_digit+1 );
            }
        }
    }
}

int jumping(int n){
    int i;
    cout<<0<<" ";
    for(i=1; i<=9; i++)
    {
        if(i<=n)
        bfs(i,n);
    }
}


int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{   
	    cin>>n;
        jumping(n);
        cout<<endl;
	}
	return 0;
}
