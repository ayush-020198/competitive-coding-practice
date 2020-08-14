// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
    int x, i=n; 
    while(i>0){
            int j = n*i;
            x=n;
            while(j>0){
                if(i>1){
                cout<<x<<" ";
                j--;
                if(j==0) break;
                if(j%i==0){
                    x = x-1;
                    cout<<x<<" ";
                    j--;
                    }
                }
                if(i==1){
                    cout<<x<<" ";
                    x--;
                    j--;
                }
            }
            cout<<"$";
            i--;
        }
}

