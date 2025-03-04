#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
     //queue先进先出
    queue<int> que;
    vector<int> vec;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << que.front() << endl;
    cout << que.back() << endl;
    que.pop();
    vec.push_back(1);
    vec.push_back(3);
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << que.size() << endl;
    cout << que.empty() << endl;
     return 0;
}
