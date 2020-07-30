#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n,i,j,v[200000], max, count;
    cin>>t;
    for(j=1;j<=t;j++){
                cin>>n;
                for(i=0; i<n; i++)
                {
                    cin>>v[i];
                }
                count=0;
                max=-1;
                
                for(i=0; i<n; i++)
                {
                    if(v[i]>max)
                   {
                        max=v[i];
                        if(i+1==n||v[i]>v[i+1])
                            count++;
                    }   
                }
                cout<<"Case #"<<j<<": "<<count<<endl;
                }
          }

