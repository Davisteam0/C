//
// Created by 涂磊 on 2023/10/8.
//


// 写一个函数判断一年是不是闰年。

//打印1000~2000年之间的闰年
/*
  闰年判断的规则：
    能被4整除，并且不能被100整除
*/
#include <stdio.h>
/*
int main()
{
    int year = 0;
    for (year = 1000;year <= 2000;year++)
    {
        //判断year是不是润年
        if (year % 4 == 0)
        {
            if(year % 100 != 0)
            {
                printf("%d\n",year);
            }
        }
        if (year % 400 == 0)
        {
            printf("%d\n",year);
        }
    }
    return 0;
}
*/

/*
int main()
 {
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        //判断year是不是润年
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("%d\n",year);
        }
    }
    return 0;
}

*/


int is_leap_year(int y)
{
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        //判断year是不是润年
        if (is_leap_year(year))
        {
            printf("%d\n",year);
        }
    }
    return 0;
}

