#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {
    string tempold=s;
    
    char x, y;
    int max=0, count=0;

    sort(tempold.begin(), tempold.end());

    vector<char> temp,temp2;

    auto ip=unique(tempold.begin(), tempold.end());
    tempold.resize(distance(tempold.begin(),ip));
    for (ip = tempold.begin(); ip != tempold.end(); ++ip) { 
        temp.push_back(*ip); 
    } 

    for(int i=0; i<temp.size(); i++){
        x=temp[i];
        for(int k=0; k<temp.size(); k++){
            temp2.clear();
            if(k!=i)
                {
                    y=temp[k];
                    for(int j=0; j<s.size(); j++){
                        if(s[j]==x || s[j]==y){
                            temp2.push_back(s[j]);
                        }
                    }
                    for(int j=0; j<temp2.size()-1; j++){
                        if(temp2[j]==temp2[j+1]) 
                        {
                            count=0;
                            break;
                        }
                        else 
                            {
                                 for(int i=0; i<temp2.size(); i++){
                                    cout<<temp2[i]<<" ";
                                }
                                cout<<endl;
                                count=temp2.size();
                            }
                    }
                    if(max<count) max=count;
                }
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

