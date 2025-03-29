#include <iostream>
#include <vector>
using namespace std;

int answer(vector<vector<int>>& grid1);
void dfs(vector<vector<int>>& grid1, int x, int y, int m, int n);

int main()
{
     vector<vector<int>> grid1 = {
         {1, 1, 1, 1, 0},
         {1, 1, 0, 1, 0},
         {1, 1, 0, 0, 0},
         {0, 0, 0, 0, 0}
     };

     cout << "岛屿数量: " << answer(grid1) << endl;
     return 0;
}

int answer(vector<vector<int>>& grid1)
{
     int count = 0;
     int m = grid1.size();
     int n = grid1[0].size();
     for(int i = 0; i < m; i++)
     {
          for(int j = 0; j < n; j++)
          {
               if(grid1[i][j] == 1)
               {
                    count++;
                    dfs(grid1, i, j, m, n);
               }
          }
     }
     return count;
}

void dfs(vector<vector<int>>& grid1, int x, int y, int m, int n)
{
     // 越界或已经是水了就直接返回
     if(x < 0 || x >= m || y < 0 || y >= n || grid1[x][y] == 0)
     {
          return;
     }

     // 将当前陆地标记为已访问（设为0）
     grid1[x][y] = 0;

     // 向上下左右四个方向递归
     dfs(grid1, x + 1, y, m, n);
     dfs(grid1, x - 1, y, m, n);
     dfs(grid1, x, y + 1, m, n);
     dfs(grid1, x, y - 1, m, n);
}
