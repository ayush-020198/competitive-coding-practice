#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
    public:
        int data;
        vector<char> opchar;
        Node(int d, vector<char> newchar) {
            data = d;
            opchar = newchar;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<char> s;
    int n,op,k;
    string str;
    vector<Node*> operation;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>op;
        if(op==1){
            vector<char> op1;
            cin>>str;
            for(int j=0; j<str.size(); j++){
                s.push_back(str[j]);
            }
            for(int j=0; j<str.size(); j++){
                op1.push_back(str[j]);
            }
            Node *t = new Node(op, op1);
            operation.push_back(t);
        }
        if(op==2){
            vector<char> op2;
            cin>>k;
            int w=1;
            int i=s.size()-1;
            while(w<=k){
                op2.push_back(s[i]);
                i--;
                w++;
            }
            reverse(op2.begin(), op2.end());
            w=1;
            while(w<=k){
                s.pop_back();
                w++;
            }
            Node *t = new Node(op, op2);
            operation.push_back(t);
        }
        if(op==3){
            cin>>k;
            cout<<s[k-1]<<endl;
        }
        
        if(op==4){
            Node *p;
            p=operation.back();
            if(p->data==1){
                for(int i=0; i<p->opchar.size(); i++){
                    s.pop_back();
                }
                operation.pop_back();
            }
            else if(p->data==2){
                for(int i=0; i<p->opchar.size(); i++){
                    s.push_back(p->opchar[i]);
                }
                operation.pop_back();
            }
        }
        
    }  
    return 0;
}
