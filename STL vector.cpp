#include <iostream>
#include <vector>
using namespace std;

int main()
{
     /*
      * 一般情况是可以用vector替换掉普通数组的
     vector<int> vec; // 创建一个空的整数类型 vector
     vector<double> vec1; // 创建一个空的 double 类型 vector
     vector<int> vec2(5);// 创建一个包含5个元素的 vector，所有元素默认值为 0
     vector<int> vec3(5, 10);  // 创建一个包含5个元素的 vector，所有元素初始化为10
     vector<int> vec4= {1, 2, 3, 4, 5};  // 使用初始化列表构造 vector
                                         // 构造一个 3x4 的二维 vector，所有元素初始为 0
     vector<vector<int>> matrix(3, vector<int>(4, 0));
     matrix[0][1] = 5; // 将第一行第二列的元素赋值为 5


     //尾接， 尾删
     vec.push_back(10);  // 向 vec 添加元素 10
     vec.push_back(20);  // 向 vec 添加元素 20
      */
     vector<int> arr;
     arr.push_back(1); //尾接
     arr.push_back(2);
     arr.push_back(3);
     //arr.pop_back(); //尾删
     //arr.pop_back();

     //arr.clear();  //一键清空这个 数组
     //cout << arr.empty() << endl;  //这个是检查这个数组是不是空的，如果是就是true 否者是false
    // if(arr.empty())
     //{

     //}

     //cout << arr.size() << endl;   //获取长度
     //for(auto &ele : arr)
     //{
     //     cout << ele << endl;
     //}

     arr.resize(5); //这个可以重新定义大小。如果数组里面只有三位，剩下两位初值就是0
     //arr.resize(5, 3) 这样设置就是重新定义大小然后还把初值变成了3

     //注意事项
     //提前指定长度，如果长度已经确定，那么应该在构造函数指定长度，而不是一个一个pushback
     //以为vector的内存耗尽重新分配内存是有时间花销的，而指定长度后就不会这样了
     // vector获取长度的方法。size（） 返回类型是size_t  最好用long long a = array.size()；
     return 0;
}
