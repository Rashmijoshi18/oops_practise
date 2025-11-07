#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Rashmi";
    string s2 = "Joshi";
    string s3 = s1 + " " + s2;
    cout << s3.append(" hello") << endl;
    cout << s3.length() << endl;
    cout << s3.size() << endl;
    string s4 = s3.substr(0, 6);
    cout << s4;
    cout << s3.find("hello");
    return 0;
}