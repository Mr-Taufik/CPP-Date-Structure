#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
     int flag = 0;
     int cnt;
     for (int year = 2000; year <= 2000; year++)
     {
          for (int month = 1; month <= 12; month++)
          {
               for (int day = 1; day <= 31; day++)
               {
                    // 先处理 31 天的月份
                    if (month == 1 || month == 3 || month == 5 ||
                         month == 7 || month == 8 || month == 10 || month == 12)
                    {
                         // 超过 31 天就跳出
                         if (day > 31) break;
                    }
                    // 再处理 2 月
                    else if (month == 2)
                    {
                         // 闰年判断
                         if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                         {
                              // 闰年 2 月 29 天
                              if (day > 29) break;
                         }
                         else
                         {
                              // 平年 2 月 28 天
                              if (day > 28) break;
                         }
                    }
                    // 最后处理剩余的 30 天月份
                    else
                    {
                         if (day > 30) break;
                    }

                    if(year == 2000 && month == 1 && day == 1)
                    {
                         flag = 1;
                         continue;
                    }
                    flag++;
                    if(month == 5 && day == 4)
                    {
                         cout << flag << endl;
                         break;
                    }

               }
          }

     }


     return 0;
}
