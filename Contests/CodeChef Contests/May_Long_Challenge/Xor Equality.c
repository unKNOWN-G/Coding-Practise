// Xor Equality 
#include<stdio.h>

#define ull unsigned long long
#define MODULO 1000000007
ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO;
        a = a * a % MODULO;
        n >>= 1;
    }
    return ret;
}


int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",PowMod(x-1));
    }
}
