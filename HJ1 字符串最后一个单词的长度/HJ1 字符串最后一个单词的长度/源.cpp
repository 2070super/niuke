#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    //cin >> s;//有空格，cin默认分给下一个元素。
    getline(cin, s);
    size_t pos = s.rfind(' ');
    size_t last = string::npos;
    if (pos == last)
    {
        cout << s.size() << endl;

    }
    else {
        cout << s.size() - pos - 1 << endl;
    }
}