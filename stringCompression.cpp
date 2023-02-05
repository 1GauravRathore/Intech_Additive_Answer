#include <bits/stdc++.h>
using namespace std;
// string compression in  a3b2c2d4e1f1g1
string compressor(string str) {
    string res;
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++){
        res.push_back(str[i]);
        count = 0;
        while (str[i] == str[i + 1]){
            count++;                i++;
        }
        count++;
        char c = '0' + count;
        res.push_back(c);
    }
    return res;
}
// string compression in  a3bc2d4ef1g1
string compressor2(string str){
    string res;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        res.push_back(str[i]);
        if (str[i + 1] == str[i + 3])
        {
            res.push_back(str[i + 2]);
            i = i + 2;
        }
    }
    return res;
}
// string decompression in aaabbccddddefg
string decompress(string str)
{
    vector<char> c;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
            c.push_back(str[i]);
    }
    int m = c.size(), j;
    vector<int> arr(m, -1);
    j = m - 1;
    int digit = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (isalpha(str[i]))
        {
            arr[j] = digit;
            j--;
        }
        else // if(isalpha(str[i]))
        {
            digit = str[i] - '0';
        }
    }

    // decompressing using freq array arr and str;
    string res;
    for (int i = 0; i < m; i++)
    {
        int t = arr[i];
        while (t--)
            res += c[i];
    }
    return res;
}

int main()
{
    string str = "aaabbccddddefg";
    string str1 = compressor(str);
    cout << compressor(str) << endl;
    cout << compressor2(str1) << endl;
    cout << decompress(str1) << endl;

    return 0;
}
