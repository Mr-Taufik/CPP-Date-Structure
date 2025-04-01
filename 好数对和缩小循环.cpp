#include <iostream>
#include <vector>
using namespace std;

int answer(const vector<int>& array)
{
     int time = 0;

     for(int i = 0; i < array.size(); i++)
     {
          for(int j = i + 1; j < array.size(); j++)
          {
               if(array[i] == array[j] && (i < j))
               {
                    time++;
               }
          }
     }

     return time;
}

int main()
{
     vector<int> vec;
     int x;
     while(cin >> x)
     {
          vec.push_back(x);
     }

     cout << answer(vec) << endl;
     return 0;
}
