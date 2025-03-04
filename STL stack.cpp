#include <iostream>
#include <stack>
using namespace std;

int main()
{
     //stack 先进后出
     stack<double> stk;
     stk.push(1.0);
     stk.push(1.4);
     cout << stk.size() << endl;
     cout << stk.empty() << endl;
     //这个是没有一键清除的
     cout << stk.top() << endl;
     //栈顶
     stk.pop();
     //出栈，这里弹出来的是1.4， stack是先进后出
     cout << stk.top() << endl;

     return 0;
}
