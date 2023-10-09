#include<stdio.h>

// 写一个函数可以交换两个整型变量的内容。

/*
int main()
{
    printf("hehe\n");
    return 0;
}
*/
void Swap(int *px, int *py)
{
    int z = 0;
    z = *px;    // z = a
    *px = *py;  // a = b
    *py = z;    // b = z
}
//当实参传递给形参的时候,形参是实参的一份临时拷贝
//形参无法改变实参

int add(int x, int y)
{
   int z = 0;
   z = x + y;
   return z; 
}

int main()
{

    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int c = add(a, b);

    printf("交换前a=%d,b=%d\n", a, b);
    //交换
    // a 和 b是实参
    // x 和 y是形参
    Swap(&a,&b);
    printf("交换后a=%d,b=%d\n", a, b);
    return 0;
}


