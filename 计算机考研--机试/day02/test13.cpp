#include <iostream>
#include <cstdio>
#include <string>

//字符串的创建方式
using namespace std;

int main()
{
    string s0 = "Initial String";
    string s1;
    string s2(s0);
    string s3(s0, 8, 3);
    string s4("A character sequence");
    string s5("Another character sequence", 12); //Another char
    string s6(10, 'x');                          //xxxxxxxxxx

    cout << "s0:" << s0 << endl;
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;
    cout << "s4:" << s4 << endl;
    cout << "s5:" << s5 << endl;
    cout << "s6:" << s6 << endl;

    //string长度和元素访问
    string str = "hello world";
    for (int i = 0; i < str.size(); ++i)
    {
        cout << str[i];
    }
    cout << endl
         << "the 7th element of str is: " << str[6] << endl;

    //元素插入
    string str1 = "to be question";
    string str2 = "that is a ";
    string str3 = "or not world";
    string str4;

    str4.insert(0, str1);       //to be question
    str4.insert(6, str3, 0, 7); //to be (or not )question
    str4.insert(13, "to be ");  //to be or not (to be )question
    str4.insert(19, str2);      //to be or not be (that is a )quesion
    cout << "str4：" << str4 << endl;

    //元素移除
    str4.erase(19);   //to be or not to be
    str4.erase(0, 9); //not to be
    cout << "str4: " << str4 << endl;

    //元素清空
    str4.clear();
    cout << "str4: " << str4 << endl;

    //字符串拼接
    string str = str1 + str2;
    cout << str << endl;

    // 元素查找--找不到返回-1
    string str = "hello world, end world";
    int found1 = str.find("world");//6
    int found2 = str.find("world",10);//17
    cout << found1 << endl << found2 << endl;

    //元素截取
    string str1 = str.substr(13);//end world
    string str2 = str.substr(13,3);//end
    cout << str1 << endl << str2 << endl;

    return 0;
}