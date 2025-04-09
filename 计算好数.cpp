#include <iostream>
using namespace std;

// 判断一个整数是否为好数
bool isGoodNumber(int num) {
     int pos = 1; // 从右边开始，第1位为奇数位
     while (num > 0) {
          int digit = num % 10; // 得到最右边的数字
          if (pos % 2 == 1) {
               // 奇数位，判断数字是否为奇数
               if (digit % 2 == 0)
                    return false;
          } else {
               // 偶数位，判断数字是否为偶数
               if (digit % 2 != 0)
                    return false;
          }
          num /= 10; // 去掉最右边的数字
          pos++;     // 位置加1
     }
     return true;
}

int main(){
     int N;

     cin >> N;

     int count = 0;
     for (int i = 1; i <= N; i++){
          if(isGoodNumber(i)){
               count++;
          }
     }

     cout <<  count <<  endl;

     return 0;
}

