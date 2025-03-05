#include <iostream>

using namespace std;


int main()
{
     pair<int, int> p1 = {1, 2};
     pair<int, int> p2 = {1, 2};
     pair<char, int> p3 = {'a', 3};
     cout << p1.first << ' ' << p1.second << endl;
     if(p1 == p2)
     {
          cout << "yes" << endl;
     }
     return 0;
}
