#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the absolutePermutation function below.
vector<int> absolutePermutation(int n, int d) {
    vector<int> pos, postest;
    vector<int> notpossible;
    notpossible.push_back(-1);
    
    for(int i=0; i<n+d; i++){
        pos.push_back(i+1);
    }
    
    for(int i=0; i<n; i++){
        postest.push_back(i+1);
    }
    
    vector<int> chk(n+d, 0);
    
    if(d==0) return pos;
    
    if(d>n/2) return notpossible;
    
    for(int i=0; i<n; i++){
        if(chk[i]==0 && chk[i+d]==0){ 
            swap(pos[i],pos[i+d]);
            chk[i]=1;
            chk[i+d]=1;
        }        
    }
    
    for(int i=0; i<n+d; i++){
        cout<<postest[i]<<" ";        
    }
    
    vector<int> res;
    for(int i=0; i<n; i++){
        res.push_back(pos[i]);
    }
    vector<int> ans=res;
    sort(res.begin(), res.end());
    if(postest==res) return ans;
    
    return notpossible;
    
    return res;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        vector<int> result = absolutePermutation(n, k);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
