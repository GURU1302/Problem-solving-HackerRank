#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */
 string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
 
// strings at index 0 and 1 are not used, they are to
// make array indexing simple
string ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
 
// n is 1- or 2-digit number
string numToWords(int n)
{
    string s="";
    string str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
 
    // if n is non-zero
    if (n)
        str += s;
 
    return str;
}

string timeInWords(int h, int m) {

if(m<30){
    if(m==15){
        return "quarter past " + numToWords(h);
    }
    else if(m==0) {
        return numToWords(h) + "o' clock";
    }
    else if(m==1){
        return numToWords(m) + "minute past " + numToWords(h);
    }
    else{
        return numToWords(m) + "minutes past " + numToWords(h);
    }
}
else if(m==30){
    return "half past " + numToWords(h);
}
else{
    int j=h+1;
    if(m==45){
        return "quarter to " + numToWords(j);
    }
    else if(m==59){
        return "one minute to " + numToWords(j);
    }
    else{
        int f=60-m;
        return numToWords(f) + "minutes to " + numToWords(j);
    }
}

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

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
