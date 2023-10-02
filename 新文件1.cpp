#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    double q[40] = { 2.0 };
    double p[40] = { 1.0 };
    double sum = 0.0;
    for (i = 1; i <= n; i++)
    {
        q[i + 1] = q[i] + p[i];
        p[i + 1] = q[i];
        sum += q[i] / p[i] * 1.0;
    }
    printf("%lf", sum);
    return 0;
}