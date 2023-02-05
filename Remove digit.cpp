// In this we will choose smallest digit so the resultant number is smaller
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 251256;
    string str = to_string(a);
    string res;
    char minimum = 60;
    for (auto i : str){
        minimum = min(i, minimum);
    }

    for (auto i : str){
        if (i == minimum)
            continue;
        res += i;
    }
    cout << res;
    return 0;
}
