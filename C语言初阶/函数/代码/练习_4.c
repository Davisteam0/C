//
// Created by 涂磊 on 2023/10/8.
//

// 写一个函数，每调用一次这个函数，就会将num的值增加1。

#include <stdio.h>
/*
void add(int *p)
{
    (*p)++;
}

int main()
{
    int num = 0;
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    return 0;
}
*/

int add(int n)
{
    return n + 1;
}

int main()
{
    int num = 0;
    num = add(num);
    printf("%d\n",num);
    num = add(num);
    printf("%d\n",num);
    num = add(num);
    printf("%d\n",num);
    return 0;
}
