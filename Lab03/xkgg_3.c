/*
 * @Descripttion:
 * @version:
 * @Author: xkgg
 * @Date: 2022-10-19 21:42:49
 * @LastEditors: xkgg
 * @LastEditTime: 2022-10-19 21:47:37
 */
#include <stdio.h>
#include <string.h>
#define re register
#define maxn 1005
int k, cnt;
int a[maxn];
int qpow(int x, int y)
{
    int ans = 1;
    while (y)
    {
        if (y & 1)
            ans *= x;
        x = x * x;
        y >>= 1;
    }
    return ans;
}
int solve(int k)
{
    for (re int i = qpow(10, k - 1); i <= qpow(10, k) - 1; i++)
    {
        int tmp = i, sum = 0;
        while (tmp)
        {
            int x = tmp % 10;
            sum += qpow(x, k);
            tmp /= 10;
        }
        if (sum == i)
            a[++cnt] = i;
    }
    if (k == 3)
        printf("3位的水仙花数共有%d个", cnt);
    if (k == 4)
        printf("4位的四叶玫瑰数共有%d个", cnt);
    if (k == 5)
        printf("5位的五角星数共有%d个", cnt);
    if (k == 6)
        printf("6位的六合数共有%d个", cnt);
    if (k == 7)
        printf("7位的北斗星数共有%d个", cnt);
    if (k == 8)
        printf("8位的八仙数共有%d个", cnt);
    for (re int i = 1; i < cnt; i++)
        printf("%d,", a[i]);
    printf("%d\n", a[cnt]);
    cnt = 0;
    memset(a, 0, sizeof(a));
}
int main()
{
    while (1)
    {
        scanf("%d", &k);
        if (k == 0)
            break;
        solve(k);
    }
    return 0;
}