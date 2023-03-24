#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */
 



void extraLongFactorials(int n) {

int i,j,carry=0,mul,digit,len=1;
int arr[1000]={0};
arr[0]=1;

for(int i=1;i<=n;i++){
    for(int j=0;j<len;j++){
        mul=arr[j]*i+carry;
        digit=mul%10;
        arr[j]=digit;
        carry=mul/10;
    }
    while(carry){
        digit=carry%10;
        arr[len]=digit;
        len++;
        carry=carry/10;
    }
}
for(i=len-1;i>=0;i--){
    cout<<arr[i];
}
 
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
