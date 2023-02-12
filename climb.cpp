#include <iostream>
#include <vector>
using namespace std;
class jump
{public:
    int jumping(int number)
    {
        if (number < 0)
            return 0;
        if (number <= 1)
            return 1;
        return jumping(number - 1) + jumping(number - 2);
    }
};
int main()
{
    int n;
    cin >> n;
    jump s;
    cout << s.jumping(n) << endl;
    return 0;
}
