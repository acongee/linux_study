#include <iostream>

using namespace std;

typedef long long LL;

LL qmi(int a, int b, int p)
{
    LL res = 1;

    while (b)
    {
        if (b & 1) res = res * a % p;
        a = a * (LL)a % p;// 这里相当于对 a 进行一个平方操作，指数并不是只 +1 ，满足“二进制”的要求
        b >>= 1;
    }

    return res;
}

int main()
{
    int n; 
    scanf("%d", &n);

    while (n--)
    {
        int a, b, p;
        scanf("%d%d%d", &a, &b, &p);
        printf("%lld\n", qmi(a, b, p));
    }

    return 0;




}
}

