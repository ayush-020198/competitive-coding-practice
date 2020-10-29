#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<long long int>> container) {
    vector<long long int> row, column;
    for(long long int i=0; i<container.size(); i++){
        long long int sum=0;
        for(long long int j=0; j<container[i].size(); j++){
            sum+=container[i][j];
        }
        row.push_back(sum);
    }
    sort(row.begin(), row.end());
    for(long long int i=0; i<container[0].size(); i++){
        long long int sum=0;
        for(long long int j=0; j<container.size(); j++){
            sum+=container[j][i];
        }
        column.push_back(sum);
    }
    sort(column.begin(), column.end());
    for(long long int i=0; i<row.size(); i++){
        if(row[i]!=column[i]) return "Impossible";
    }
    return "Possible";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long long int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (long long int q_itr = 0; q_itr < q; q_itr++) {
        long long int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<long long int>> container(n);
        for (long long int i = 0; i < n; i++) {
            container[i].resize(n);

            for (long long int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
