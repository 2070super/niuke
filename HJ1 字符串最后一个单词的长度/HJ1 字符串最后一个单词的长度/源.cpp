#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    //cin >> s;//�пո�cinĬ�Ϸָ���һ��Ԫ�ء�
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