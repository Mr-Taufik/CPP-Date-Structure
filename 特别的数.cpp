#include <iostream>
#include <vector>
using namespace std;

bool tn(int nums);
int answer(int x);

int main()
{
    int x;
    cin >> x;

     cout << answer(x) << endl;
     return 0;
}

int answer(int x)
{
     int aw = 0;
     vector<int> vec;
     for(int i = 0; i <= x; i++)
     {
          if(tn(i))
          {
               vec.push_back(i);
          }
     }

     for(int j: vec)
     {
          aw += j;
     }

     return aw;
}
bool tn(int nums)
{
     int fp = 0;
     int text = nums;
     while(text != 0)
     {
          fp++;
          text /= 10;
     }

     for(int i = 0; i < fp; i++)
     {
          int x = nums % 10;
          if(x == 2 || x == 0 || x == 1 || x == 9)
          {
               return true;
          }
          nums /= 10;

     }

     return false;
}
