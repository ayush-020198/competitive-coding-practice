#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int main()
{
    int n,count=0;
    cin >> n;
    string ele;
    vector<int> hash(26, 0);
    for (int i = 0; i<n; i++) {
        cin>>ele;
        for(int j=0; j<ele.size(); j++){
            char alpha = ele[j];
            if(hash[alpha-'a']==i){ 
                hash[alpha-'a']++;
                if(hash[alpha-'a']==n) 
                    count++;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}

