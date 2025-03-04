#include <iostream>
#include <queue>
using namespace std;

int main()
{
     /*
      * //注意事项这个只能访问堆顶
     //优先队列，原理是二叉堆，提供常数时间的的最大元素查找，对数时间的插入与提取。
     priority_queue<int> pque;
      //默认比较器：如果不指定比较器，priority_queue 会使用 less<T>，这会使队列成为大顶堆（最大元素在最前）。
     //这里默认就是pop最大值
     pque.push(1);
     //这里默认就是queue里面的最大值
     cout << pque.top() << endl;
     pque.push(3);
     cout << pque.top() << endl;
     pque.push(2);
     cout << pque.top() << endl;
     pque.push(4);
     cout << pque.top() << endl;
     */

     priority_queue<int, vector<int>, greater<int>> pque;
     pque.push(1);

     cout << pque.top() << endl;
     pque.push(3);
     cout << pque.top() << endl;
     pque.push(2);
     cout << pque.top() << endl;
     pque.push(4);
     cout << pque.top() << endl;
     cout << pque.empty() << endl;
     cout << pque.size() << endl;
     return 0;
}
