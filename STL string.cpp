#include <iostream>
#include <string>
using namespace std;

int main()
{
     /*
     string s(100, '0');  //这里面说这个字符串长度是100，每个默认都是0
     s = "awa";
     s[0] = 'b';
     cout << s << endl;
      */

     /*
     string s1 = "123", s2 = "123";
     if(s1 == s2)
     {
          cout << "yes" << endl;
     }
     */
     /*
     string s1 = "123", s2 = "133";
     s1 += 'a';

     string s3 = "12345678";
     cout << s3.substr(3) << endl;
     cout << s3.substr(3, 3) << endl;
     //这里就是输出从字串0123第三位开始输出，且输出的字串长度为3
     cout << s1 + s2 << endl;

      */
     /*
     string s1 = "123123123";
     cout << s1.find("123") << endl;
     if(s1.find("123") != string::npos)
     {
          cout << "123" << endl;
     }  */

     
     string s = "123123123";
     int x = stoi(s);
     //long long x = stoll(s);
     //double x = stod(s);
     //float x = stof(s);
     int x1 = 6662;
     string s2 = to_string(x1);

     cout << x << endl;
     cout << s2 << endl;


     return 0;
}
