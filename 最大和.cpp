#include <iostream>
#include <vector>
using namespace std;

int answer(const vector<int>&array)
{
     int maxsum = 0;
     for(int i = 2; i < array.size(); i++)
     {
          if((array[i] != array[i - 1]) && (array[i] != array[i - 2]))
          {
               maxsum = max(maxsum, (array[i] + array[i - 1] + array[i - 2]));
          }


     }
     return maxsum;
}
int main()
{
     vector<int> vec = {1, 5, 4, 2, 9, 9, 9};
     cout << answer(vec) << endl;
     return 0;
}
