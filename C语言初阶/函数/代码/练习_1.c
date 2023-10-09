//
// Created by 涂磊 on 2023/10/5.
//

#include <stdio.h>
#include <math.h>
// 写一个函数可以判断一个属是不是素数。

// 素数：只能被1或其本身整除的数。

// 是素数返回1，不是素数返回0。
int is_prime(int n)      //判断n是否为素数
{
    int j = 0;
    for(j = 2;j <= sqrt(n);j++)     //sqrt(n)求平方根
    {
        if(n % j == 0)        //如果n能被j整除，就不是素数
        {
            return 0;        //返回0
        }
    }

    return 1;
}

int main()
{
    int i = 0;
    int count = 0;
    for(i = 100;i <= 200;i++)     //遍历100-200
    {
        //判断i是否为素数
        //是素数就打印
        //
        if(is_prime(i))        //判断i是否为素数
        {
            printf("%d是素数\n", i);
            count++;
        }

    }
    printf("素数个数:%d\n", count);
    return 0;
}

