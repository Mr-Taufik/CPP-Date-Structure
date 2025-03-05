#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
     if(a.second != b.second)
     {
          return a.second < b.second;
     }
     return a.first > b.first;
}


int main()
{
     /*
    string a = "awa", b = "bwb";
    cout << a << ' ' << b << endl;
    swap(a, b);
    cout << a << ' ' << b << endl; */
/*
    vector<int> arr{1, 9, 1, 9, 8, 1, 0};
    sort(arr.begin(), arr.end(), greater<int>());
    //默认从小到大排序，great是从大到小排序
    for(auto &ele : arr)
    {
         cout << ele << endl;
    }  */

     vector<pair<int, int>> arr{{1, 9}, {2, 9}, {8, 1}, {0, 0}};
     sort(arr.begin(), arr.end(), cmp);
     for(auto ele : arr)
     {
          cout << ele.first << ' ' << ele.second << endl;
     }

     return 0;
}
