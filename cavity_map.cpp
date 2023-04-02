#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'cavityMap' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY grid as parameter.
 */

vector<string> cavityMap(vector<string> grid) {

int veclen=grid.size();
int strlen=grid[0].length();
for(int i=1;i<veclen-1;i++){
    for(int j=1;j<strlen-1;j++){
        char a=grid[i][j];
        char b=grid[i][j-1];
        char c=grid[i][j+1];
        char d=grid[i-1][j];
        char e=grid[i+1][j];
        int anum=(int)(a-'0');
        int bnum=(int)(b-'0');
        int cnum=(int)(c-'0');
        int dnum=(int)(d-'0');
        int ecnum=(int)(e-'0');
        
        if(anum>bnum && anum > cnum && anum>dnum && anum > ecnum){
            grid[i][j]='X';
        }
    }
}
return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
