#include <iostream>
#include <vector>
using namespace std;

void sum(vector<vector<int>>& vec, int x, int y, int n, int m)
{
     int boom = 0;
     int dx[8] = { -1, -1, -1,  0, 0, 1, 1, 1 };
     int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };

     for (int i = 0; i < 8; i++)
     {
          int nx = x + dx[i];
          int ny = y + dy[i];
          if (nx >= 0 && nx < n && ny >= 0 && ny < m && vec[nx][ny] == 9)
          {
               boom++;
          }
     }

     vec[x][y] = boom;
}
int main()
{
     int n, m;
     cin >> n >> m;

     vector<vector<int>> vec(n, vector<int>(m));

     for(int i = 0; i < n; i++)
     {
          for(int j = 0; j < m; j++)
          {
               int val;
               cin >> val;
               vec[i][j] = (val == 1 ? 9 : 0);
          }
     }

     for (int z = 0; z < n; z++)
     {
          for (int x = 0; x < m; x++)
          {
               if (vec[z][x] != 9)
               {
                    sum(vec, z, x, n, m);
               }
          }
     }

     // 输出结果
     for (int c = 0; c < n; c++)
     {
          for (int v = 0; v < m; v++)
          {
               cout << vec[c][v] << " ";
          }
          cout << endl;
     }


     return 0;
}
