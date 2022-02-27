class sit{
public:
sit()
{
    ret=ret+i;
    ++i;
}
static int getret()
{
    return ret;
}
static void init()
{
    ret=0;
    i=1;
}
private:
    static int i;
    static int ret;
};
int sit::i=1;
int sit::ret=0;
class Solution {
public:
    int Sum_Solution(int n) {
        sit::init();
         sit arr[n];
        return sit::getret();
    }
};