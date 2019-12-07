#include <iostream>
using namespace std;
//#define 定义常量
#define day 7

/*
常量定义：
1、宏定义 #define 常量名 数值（无；）
2、const 数据类型 变量；
注：一旦修改就会报错.
整型：short int long  long long
关键字：sizeof
实型：float、double
float f1= 3.14f 加f默认这个数字是单精度（若不打，默认小数为双精度），float 4字节，double 8字节
默认情况下 输出一个小数，会显示出6位有效数字
字符型变量   char ch = ‘a’;
c和c++中字符型变量只占用1个字符
字符型变量并不是把字符放入内存中，而是将其对应的ASCII码放入内存中
单引号内只能放入一个字符，并且必须是单引号，可以通过（int）ch强制将字符转换成ASCII A-97  a-65
*/

int main(){
    
    //cout << " hello world!" <<endl;
    cout<<"一周总共有：" << day << "天。" <<endl;
    //system("pause");


    const int month =12;

    cout << "一年总共有："<<month <<"月"<<endl;


    return 0 ;
}