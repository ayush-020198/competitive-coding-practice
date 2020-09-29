#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    stack<char> superstr;
    string res;
    for(int i=0; i<s.size(); i++){
        if(superstr.empty())
            superstr.push(s[i]);
        else if(superstr.top()==s[i]){
            superstr.pop();
        }
        else if(superstr.top()!=s[i]) superstr.push(s[i]);
    }
    if(superstr.empty()) res="Empty String";
    else {
        int x=superstr.size();
        for(int i=0; i<x; i++){
            res.insert(res.begin(), superstr.top());
            superstr.pop();
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

