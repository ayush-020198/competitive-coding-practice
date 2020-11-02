#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long long strangeCounter(long long t) {
    if(t==1) return 3;
    if(t==2) return 2;
    if(t==3) return 1;
    if(t==4) return 6;
    if(t==5) return 5;
    

    long long int a = t/3;
    a = log(a)/log(2);
    long long int b = 3*pow(2, a);
    long long int c=b-2;
    long long int ans=b+c-t;
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
