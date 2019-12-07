#include <iostream>
using namespace std;
#include <string> //在写c++风格字符串时需要包含这个头文件

/*
转义字符：\a 警报、\b 退格、\f 换页、\n 换行、\r 回车、\t 水平制表（一共8个字符）、\v 垂直制表、\\ 代表一个反斜线字符、\'代表一个单引号（'）字符
\“ 代表一个双引号字符、\？代表一个问号
字符串：  string  变量名 = ”字符串值“（c++）
c风格字符串定义：char str[] = "***";
创建bool数据类型
bool flag = true； 输出时是1，false输出为0；
数据的输入：
cin用于从键盘获取数据

运算符：+、-、×、/、%、++（前后置）、--（前后置）、
前置与后置++运算的区别：
前置递增 先让变量+1 然后进行表达式运算
后置递增 先进行表达式运算 然后在变量上+1

赋值运算符：=、+=、-=、×=、/=、%=
比较运算符：==、！=、<、>、<=、>=
逻辑运算符：！非、&&与、||或、
1、非：真变假，假变真
2、或：如果两边有一个为真，则为真，否则为假
3、与：如果两边都为真，则为真，否则为假

程序流程结构：
1、顺序结构：程序按顺序执行，不发生跳转
2、选择结构：依据条件是否满足，有选择的执行相应功能
3、循环结构：依据条件是否满足，循环多次执行某段代码


选择结构：if：
1、单行格式if语句：if(条件){条件满足执行的语句}
2、多行格式if语句：if(条件){条件满足执行的语句}else{条件不满足执行的语句}
3、多条件的if语句：if(条件1){条件1满足执行的语句}else if（条件2）{条件2满足执行的语句}...else{都不满足执行的语句}

嵌套if语句：在if语句里再嵌套if

多条件分支语句
switch(表达式)
{
    case 结果1：执行语句；break；
    case 结果1：执行语句；break；
    ...
    default:执行语句；break；
}
优点：结构清晰，执行效率高
缺点：只能判断是整型或者字符型，不可以是一个区间

while（循环条件）{循环语句}

do{循环语句}while（循环条件）
定义一个num，int num=0，循环语句内num++，循环条件中用num<多少进行终止。

for(起始表达式；条件表达式；末尾循环体){循环语句；}

嵌套循环
//打印一张星图
for(int i = 0;i<10;i++){
    for (int j =0;j<10;j++){
        cout<<'*';
    }
    cout<<endl;
}

跳转语句：
1、break
作用：跳出选择结构和循环结构
break使用的时机：
- 出现在switch条件语句中，作用是终止case并跳出switch；
- 出现在循环语句中，作用是跳出当前的循环语句；
- 出现在嵌套循环中，跳出最近的内层循环语句
2、continue
作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
3、goto
如果标记存在，执行到goto语句时，会跳转到标记的位置
xxx
xxx
goto FLAG
xxxx
xxx
FLAG：
xxxx
（直接从goto跳到FLAG后面的语句继续执行）

五、数组
5.1 概述
特点1：数组中的每个数据元素都是相同的类型
特点2：数组是由连续的内存位置组成的

5.2.1一维数组定义方式：
1、数据类型 数组名[数组长度]；
2、数据类型 数组名[数组长度]={值1，值2，...}；
3、数据类型 数组名[]={值1，值2，...}；
访问数组的数据：通过   数组名[0]、数组名[1]...等等顺序访问（[0]对应第一个元素，数组下标从0开始）
可以挨个对数组中的元素进行赋值。

5.2.2一维数组数组名
一维数组名称的用途：
1、可以统计整个数组在内存中的长度
2、可以获取数组在内存中的首地址

5.2.3 数组元素逆置案例
 
 // 实现数组元素逆置
 //1、创建数组
  int arr[5] = {1,3,2,5,4}
  cout<<"数组逆置前"<<end1;
  for(int i = 0;i<5;i++){
      cout <<arr[i]<<end1;
  }
  //2、实现逆置
  //2.1 记录起始下标位置
  //2.2 记录结束下标位置
  //2.3起始下标与结束下标的元素互换
  //2.4起始位置++ 结束位置--
  //2.5循环执行2.1操作，直到起始位置>=结束位置
  int start =0;
  int end =sizeof(arr)/sizeof(ar[0])-1;

  while(start<end)
  {
      //实现元素互换
      int temp=arr[start];
      arr[start] =arr[end];
      arr[end] =temp;
    
  }
  //3、打印逆置后的数组
  cout<<"数组元素逆置后："<<endl;
  for(int i = 0;i<5;i++){
      cout <<arr[i]<<end1;
  }

5.2.3 冒泡排序算法
作用：最常用的排序算法，对数组内元素进行排序
1、比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2、对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
3、重复以上的步骤，每次比较次数-1，直到不需要比较。
排序的总轮数 = 元素个数-1；每轮对比次数 = 元素个数 - 排序轮数-1

//利用冒泡做升序
int arr[9]= {4,2,8,0,5,7,1,3,9};
for(int i=0;i<9;i++){
    cout<<arr[9];
}
cout <<endl;
for(int i =0;i<9-1;i++){
    //内层循环
    for(int j =0; j<9-1;j++){
        //如果第一个数字，比第二个数字大，交换两个数字
        if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

5.3二维数组
5.3.1 二维数组定义方式
数据类型 数组名[行数][列数]；
数据类型 数组名[行数][列数] = {{数据1，数据2}，{数据3，数据4}}；
数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}；
数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4}
以上4种定义方式，利用第二种更加直观，提高代码的可读性
例子：
1、赋值第一种
int arr[2][3];
arr[0][0]=1;
arr[0][1]=2;
arr[0][2]=3;
arr[1][0]=4;
arr[1][1]=5;
arr[1][2]=6;

//打印输出的时候，外层循环打印行数，内层循环打印列数
for(int i =0;i<2;i++){
    for(int j = 0;j<3;j++){
        cout <<arr[i][j]<<endl;
    }
}
2、数据类型 数组名[行数][列数] = {{数据1，数据2}，{数据3，数据4}}；   优点：直观，可读性强
int arr2[2][3] = 
{
    {1,2,3},
    {4,5,6},
};
3、数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4}；
int arr3[2][3] ={1,2,3,4,5,6};
4、数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4}；
int arr4[][3] = {1,2,3,4,5,6};

5.3.2 二维数组数组名
1、查看二维数组所占内存空间
int arr[2][3] =
{
    {1,2,3},
    {4,5,6}
};
cout<<"二维数组占用内存空间为："<<sizeof(arr)<<endl;
cout<<"二维数组第一行占用内存为："<<sizeof(arr[0])<<endl;
cout<<"二维数组第一个元素占用内存为："<<sizeof(arr[0][0])<<endl;
cout<<"二维数组行数为："<<sizeof(arr)/sizeof(arr[0])<<endl;
cout<<"二维数组列数为："<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;

2、获取二维数组首地址
cout<<"二维数组首地址为：<<(int)arr<<endl;
cout<<"二维数组第一行数据首地址为："<<(int)arr[0]<<endl;
cout<<"二维数组第二行数据首地址为:"<<（int）arr[1]<<endl;
//去对应某个元素的话，就要用到取地址符
cout<<"二维数组第一个元素的地址为："<<（int）&arr[0][0]<<endl
二维数组首地址=二维数组第一行首地址=二维数组第一个元素首地址

6 函数
6.1 概述
作用：将一段经常使用的代码封装起来，减少重复代码
一个较大的程序，一般分为若干个程序块。每个模块实现特定的功能
6.2 函数的定义
函数的定义一般主要有5个步骤：
1、返回值类型:一个函数可以返回一个值。在函数定义中
2、函数名：给函数起个名称
3、参数表列：使用该函数时，传入的数据
4、函数体语句：花括号内的代码，函数内需要执行的语句
5、return表达式：和返回值类型挂钩，函数执行完后，返回相应的数据
语法：
返回值类型 函数名（参数列表）
{
    函数体语句
    return表达式（和返回值类型有关）
}
加法函数定义：
int add(int num1 ,int num2)
{
    int sum = num1 + num2;
    return sum;
}

6.3 函数的调用
功能：使用定义好的函数
语法：函数名（参数）

调用时，定义
int a =10;
int b = 20;
//函数调用语法：函数名称（参数）
//a和b称为 实际参数，简称实参
int c = add(a,b);
cout << "c = "<< c <<endl;
//函数定义时的参数，num1和num2并没有真实的数据，他只是一个形式上的参数，简称形参
// 当调用函数时候，实参的值会传递给形参

6.4值传递
所谓值传递，就是函数调用时实参将数值传入给形参
值传递时，如果形参发生，并不会影响实参
//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，声明的时候可以写void
void swap(int num1,int num2)
{
    temp =num1;
    num1 = num2;
    num2 =temp;
    return;//或者什么都不写，返回值不需要的时候可以不写return
}
//当我们做值传递的时候，函数的形参发生改变，并不会影响实参
//总结形参是无法影响实参的

6.5 函数的常见样式
常见的函数样式有4种：
1、无参无返
void test01()
{
    cout<<"this is test01"<<endl;
}
2、有参无返
void test02(int a)
{
    cout<<"this is test02 a ="<<a<<endl;
}
3、无参有返
int test03()
{
    cout<<"this is test03"<<endl;
    return 1000;
}
4、有参有返
int test04(int a)
{
    cout<<"this is test04 a ="<<a<<endl;
    return a;
}

6.6 函数的声明
作用：告诉编译器函数名称及如何调用函数，函数的实际主体可以单独定义
函数的声明可以有多次，但是函数的定义只能有一次
例子：
int max(int a,int b)
{
    return a>b?a:b;
}
int main(){
    int a =10;
    int b = 20;
    cout<<max(a,b)<<endl;
}
定义函数写在主函数前，不需要声明即可以运行；
如果新定义函数在主函数后面，需要在主函数前加声明才可以调用
声明：int max(int a,int b);(就算定义在函数之前，其实用不用声明都可以)

6.7 函数的分文件编写
作用：让代码结构更加清晰 
//实现两个数字进行交换的函数
//函数的声明
void swap(int a,int b)；
//函数的定义
void swap(int a,int b)
{
    int temp=a;
    a =b;
    b=temp;
    cout <<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}
函数分文件编写一般有4个步骤
1、创建后缀名为.h的头文件
写函数声明
2、创建后缀名为.cpp的源文件
放置定义函数
同时包括.h的头文件
3、在头文件中写函数的声明
放入#include<iostream>
using namespace
void swap(int a,int b)
4、在源文件中写函数的定义
在源文件中
#include”swap.h“（用""表示是自定义的一个头文件）


七、指针
7.1 指针的基本概念
指针的作用：可以通过指针间接访问内存（可以通过指针来保存一个地址）
1、内存编号是从0开始记录的，一般用十六进制数字表示
2、可以利用指针变量保存地址

7.2 指针变量的定义和使用
指针变量定义语法：数据类型 *变量名
//1、定义指针
int a =10;
//指针定义的语法：  数据类型 *指针变量名；
int *p;
//让指针记录变量a的地址
p = &a;（&取地址符号）
cout<<"a的地址为："<<&a<<endl;
cout<<"指针p为："<<p<<endl;
（两个输出都是地址，可以说指针就是地址）
//2、使用指针
//可以通过解引用的方式来找到指针指向的内存
（指针变量前加*表示解引用）
// 指针前加*代表解引用，找到指针指向的内存中的数据
*p = 1000;
通过*p可以修改指针指向的内存所存储的数据内容
即a=1000;*p=1000;

7.3 指针所占内存空间
指针在32位系统下：占用4个字节空间，64位下占8个字节。
int a =10; 

int *p;p = &a;  =   int *p = &a;(创建指针并另其指向a)
cout<<"sizeof(int *) = "<<sizeof(int *)<<endl;(输出显示根据系统的不同则不同)

7.4 空指针和野指针
1、空指针：指针变量指向内存中编号为0的空间
用途：初始化指针变量
例：
int* p=NULL;
2、注意：空指针指向的内存是不可以访问的
*p = 100;(如果运行这条，会报错，间接证明空指针指向的内存是不可以访问的)
//0~255之间的内存编号是系统占用的，因此不可以访问

野指针
野指针：指针变量指向非法的内存空间
//野指针
int* p = （int *）0x1100;（将16进制数强转成地址）
cout <<*p<<endl;（语法是正确）
但运行时是失败的，没有访问权限，在程序中尽量避免野指针

7.5 const修饰指针
const修饰指针有三种情况：
1、const修饰指针  ---常量指针
const int *p =&a;
特点：指针的指向可以修改，但是指针指向的值不可以修改；（意味着不可以通过*p = ？来修改，但应该可以通过修改a的值进行修改）
2、const修饰常量  ---指针常量
int* const p = &a;
特点：指针的指向不可以改，指针指向的值可以改；
*p =20；正确，指向的值可以改
p = &b; 错误，指针指向不可以改
3、const既修饰指针，又修饰常量
const int* const p = &a;
特点：指针的指向和指针指向的值都不可以改
*p =20；错误，指向的值不可以改
p = &b; 错误，指针指向不可以改

7.6 指针和数组
作用：利用指针访问数组中元素
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout << "第一个元素为："<<arr[0]<<endl;
int *p =arr;//arr就是数组首地址
cout<<"利用指针访问第一个元素："<<*p<<endl;
p++;//让指针向后偏移4个字节
cout<<"利用指针访问第二个元素："<<*p<<endl;
指针利用循环结构可以遍历数组中的所有元素；

7.7指针和函数
作用：利用指针作函数参数，可以修改实参的值
//指针和函数
//1、值传递
形参不改变实参
//2、地址传递
void swap（int *p1 ,int *p2）
{
    int temp =*p1;
    *p1 = *p2;
    *p2 = temp;
}
主函数体内：
swap(&a,&b)
//如果地址传递，可以修饰实参

八、结构体
8.1 结构体基本概念
结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
8.2 结构体定义和使用
语法：struct 结构体名 {结构体成员}；
通过结构创建变量的方式有三种：
1、struct结构体名  变量名
2、struct结构体名 变量名={成员1值，成员2值...}
3、定义结构体时顺便创建变量

例子：
//1、创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称 {成员列表}
struct Student
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}
//2、通过学生类型创建具体学生
//2.1 struct Student s1（创建完结构体，然后依次给其内变量赋值）
    struct Strudent s1;
    //给s1属性赋值，通过.访问结构体变量的属性
    s1.name = “张三”；
    s1.age = 18;
    s1.score = 100;

    cout << "姓名："<<s1.name<<"年龄：“<<s1.age<<"分数："<<s1.score<<endl;
    //注意：如果是string变量，需要添加头文件#include<string>

//2.2 struct Student s2={...}
    struct Student S2 ={"李四"，19，80}；
    cout << "姓名："<<s1.name<<"年龄：“<<s1.age<<"分数："<<s1.score<<endl;
//2.3 在定义结构体时顺便创建结构体变量
struct Student
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}s3;//定义结构体之后紧跟一个s3，直接创建变量，然后再赋值

//注意，创建结构体变量的时候struct关键字可以省略，即可以直接用Student s1直接创建


8.3 结构体数组
作用：将自定义的结构体放入到数组中方便维护
语法：struct 结构体名 数组名{元素个数} = {{}，{}，...{}}
//1、定义结构体
struct Student
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}；
接下来的基本都在main函数里去做
//2、创建结构体数组（初始化这些值，在后面可以修改）
    struct Student stuArray[3] = 
    {
        {"张三"，18,100}，
        {"李四"，28,99}，
        {"王五"，38,66}
    }；
//3、给结构体数组内元素进行赋值
    stuArray[2].name = "赵六"；
    stuArray[2].age = 80;
    stuArray[2].score =60;
//4、遍历结构体数据
    for(int i =0;i<3;i++)
    {
        cout <<"姓名："<<stuArray[i].name<<"年龄："
        <<stuArray[i].age<<"分数："
        <<stuArray[i].score<<endl;//cout 函数是可以换行，让代码看起来更加的工整
    }

8.4 结构体指针
作用：通过指针访问结构体中的成员
利用操作符”->“可以通过结构体指针访问结构体属性
//1、定义结构体
struct Student
{
    string name;
    int age;
    int score;
}；
main（）函数中
// 1、创建学生结构体变量
    struct Student s = {"张三"，18,100}；

// 2、通过指针指向结构体变量
    struct student *p = &s; //其中c++中，struct关键字可以省略
// 3、通过指针访问结构体变量中的数据
//通过结构体指针 访问结构体中的成员属性，需要利用‘->’
    cout << "姓名："<<p->name<<“年龄："<<p->age<<"分数："<<p->score<<endl;
8.5 结构体嵌套结构体
作用：结构体中的成员可以是另一个结构体
//学生结构体定义
struct Student
{
    string name;
    int age;
    int score;
}；
//教师结构体定义
struct teacher
{
    //成员列表
    int id;//职工编号
    string name;//教师姓名
    int age; //教师年龄
    struct Student stu;//子结构体 学生
}
//被嵌套的结构体，即基础结构体在上面
int main(){
    teacher t;
    t.id = 10000;
    t.name = "老王"；
    t.age = 50;
    t.stu.name = "小王"；
    t.stu.name = 20;
    t.stu.name = 60;

}

8.6 结构体做函数参数
作用：将结构体作为参数向函数中传递
传递方式有两种：
1、值传递
2、地址传递
struct Student
{
    string name;
    int age;
    int score;
}；
1、值传递
void printStudent1(stuct student s)
{
    cout <<"子函数中 姓名："<<s.name<<"年龄:"<<s.age<<"分数："<<s.score<<endl;

}
2、地址传递
void printStudent1(stuct student *p)
{
    cout <<"子函数中 姓名："<<p->name<<"年龄:"<<p->age<<"分数："<<p->score<<endl;
}
//值传递，还是形参发生任何改变，都不会改变实参
main()函数下
//结构体做函数参数
//将学生传入到一个参数中，打印学生身上的所有信息
//创建结构体变量
struct Student s;
s.name = "张三"；
s.age = 20;
s.score = 85;

printStudent1(s);
printStudent2(&s);

8.7 结构体中const使用场景
作用：用const来防止误操作
//const 的使用场景
struct Student
{
    string name;
    int age;
    int score;
}；
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//以防函数中传递地址的时候，误操作数据，则用const关键字
//加了const之后，一旦有修改的操作就会报错，可以防止我们的误操作
void printStudents(const student s)
{
    cout <<"姓名："<<s.name<<"年龄:"<<s.age<<"分数："<<s.score<<endl;
}
int main(){
    //创建结构体变量
    struct student s = {"张三"，15,70}；
    //通过函数打印结构体变量信息
    printStudents(s);
    //值传递一般占用大量的复制空间，而地址传递，只占用4个字节（一个指针）
    所以一般用地址传递
    即printStudents(&s);

}

C++核心编程
本阶段主要针对C++面向对象编程技术做详细讲解，探讨C++中的核心和精髓
1 内存分区模型
c++程序在执行时，将内存大方向划分为4个区域
- 代码区：存在函数体的二进制代码，有操作系统进行管理的
- 全局区：存放全局变量和静态变量以及常量
- 栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
- 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收

内存四区意义：
不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程

1.1 程序运行前
在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
代码区：
存放cpu执行的机器指令
代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
代码区是只读的，使其只读的原因是防止程序意外地修改它的指令
全局区：
全局变量和静态变量存放在此
全局区还包括了常量区，字符串常量和其他常量也存放在此
该区域的数据在程序结束后由操作系统释放

//全局变量
 int g_a = 10;
 int g_b = 10;
 //const修饰的全局变量，全局
 const int c_g_a = 10；
int main(){
    //全局区

    //全局变量、静态变量、常量
    //创建普通局部变量
    int a =10;
    int b =10;
    cout <<"局部变量a的地址为："<<(int)&a<<endl;
    cout <<"局部变量b的地址为："<<(int)&b<<endl;
    cout <<"全局变量g_a的地址为："<<(int)&g_a<<endl;
    cout <<"全局变量g_b的地址为："<<(int)&g_b<<endl;
    会发现，全局变量与局部变量相差的距离非常远，说明不在一个区
    //  静态变量 在普通变量前面加static，属于全局变量。
    static int s_a = 10;
    static int s_b = 10;
    cout <<"静态变量s_a的地址为："<<(int)&s_a<<endl;
    cout <<"静态变量s_b的地址为："<<(int)&s_b<<endl;
    相比与全局变量可以发现，静态变量的内存位置与全局变量相差距离不远，属于一个区
    //常量
    //字符串常量
    "hello world！"
    cout <<"字符串常量的地址为："<<(int)&"hello world"<<endl;
    //const修饰的变量
    //const修饰的全局变量
    cout <<"全局常量c_g_a的地址为："<<(int)&c_g_a<<endl;
    发现全局常量与常量的地址很接近，说明在一个区，且分配在常量的部分
    //const修饰的局部变量
    const int c_l_a =10;          //c-const    g-global   l-local
    const int c_l_b =10;
    cout <<"局部常量c_l_a的地址为："<<(int)&c_l_a<<endl;
    cout <<"局部常量c_l_b的地址为："<<(int)&c_l_b<<endl;
    发现局部常量的地址与局部常量的地址很接近，说明在另一个区（不在全局区）

} 
局部变量和全局变量存放的位置之间相差一定的距离，即存放在全局区的不同位置
总结：全局区：全局变量、静态变量、常量（非const修饰的）、const修饰的全局变量

1.2 程序运行后
栈区：
    有编译器自动分配释放，存放函数的参数值，局部变量等
    注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
int* func(int b)//形参数据也会放在栈区
{
    b= 100;
    int a =10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;//返回局部变量的地址
}
int main()
{
    // 接收func函数的返回值
    int* p =func(1);
    cout<<*p<<endl; //第一次可以打印正确的数字，是因为编译器做了保留
    cout<<*p<<endl; //第二次这个数据就不再保留。这块内存已经被释放了，已经是非法操作
    system("pause");
    函数执行后，这个就数据就自动被销毁了
}
堆区：
由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
在C++中主要利用new在堆区开辟内存
int* func()
{
    // 利用new关键字 可以将数据开辟到堆区
    int *p = new int(10);//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;//返回局部变量的地址
}
int main(){
    //在堆区开辟数据
    //指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆区
    只是堆区的数值的地址被栈区所保存，解引用时还会显示原来的数值
    int *p =func();
}

1.3 new操作符
C++中利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete；
语法：new 数据类型
利用new创建的数据，会返回该数据对应的类型的指针
//1、new的基本语法
int* func(){
    //在堆区创建整型数据
    //new返回的是 该数据类型的指针；
    int*p = new int(10);//double *p = new doubel(1.355);//小括号表示创建一个变量
    return p;
}
void test01()
{
    int *p = func();
    cout <<*p<<endl;
    cout <<*p<<endl;
    cout <<*p<<endl;
    //堆区的数据 有程序员管理开辟，程序员管理释放
    //如果想释放堆区的数据，利用关键字delete
    delete p;
    cout <<*p<<endl;//这里会出现异常，内存已经被释放
}
//2、在堆区利用new开辟数组
void test02(){
    //创建10整型数据的数组，在堆区
    int *arr = new int[10];//10代表数组有10个元素
    for(i=0;i<10;i++)
    {
        arr[i] = i+100;//给10个元素赋值100~109
    }
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    //释放堆区数组
    //释放数组的时候，要加[]才可以，如果不加，相当于释放一个数据,会出现错误
    delete[] arr;

}
int main(){
    test01();
    
    system("pause");
    return 0;
}

2 引用
2.1 引用的基本使用
作用：给变量起别名
语法：数据类型 &别名 = 原名
int &b = a; b是a的别名，意味着b和a操作同一块内存空间存放的数值

int main(){
    int a =10;
    int &b = a;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    //最后打印输出的a和b都是10
    b = 100;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    system("pause");
    return 0;
}
2.2 引用注意事项
- 引用必须初始化
例：int &b;//这个是错误的
- 引用在初始化后，不可以改变
例：int &b =a;
int &b = c;//这个是错误的，一旦初始化后，不能再改成其他变量的别名
b=c;//这个是可以的，这个是赋值操作

2.3 引用做函数参数
作用：函数传参时，可以利用引用的技术让形参修饰实参
优点：可以简化指针修改实参

//交换函数
//1、值传递
void mySwap01(int a,int b)
{
    int temp = a;
    a = b;
    b =temp;
}
//2、地址传递
void mySwap02(int*a ,int*b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}
//3、引用传递
void mySwap03(int &a,int &b)
{
    int temp =a;
    a =b;
    b=temp;
}
int main(){
    int a = 10;
    int b = 20;
    mySwap01(a.b);
    cout <<"a = "<<a<<endl;
    cout <<"b = "<<b<<endl;
    //值传递不改变实参
    mySwap02(&a,&b);//地址传递，形参会修饰实参的
    mySwap03(a,b);//引用传递，形参也会修饰实参
}

2.4 引用做函数返回值
作用：引用是可以作为函数的返回值存在的

注意：不要返回局部变量引用
用法：函数调用作为左值
//作用：引用是可以作为函数的返回值存在的
//1、注意：不要返回局部变量引用
int& test01(){
    int a =10;//局部变量存放在栈区
    return a;//返回的是a的一个引用
}
//2、用法：函数调用作为左值
int& test02(){
    static int a =10;//静态变量，存放在全局区，该数据在程序结束后由系统释放
    return a;
}
int main(){
    int &ref = test01();//test01()函数返回的引用别名，传递给ref，这里注意，函数返回值的类型要与其传递赋值的变量一致
    cout <<"ref = "<<ref<<endl; //第一次结果正确，是因为编译器做了保留
    cout << "ref = "<<ref <<endl; //第二次结果错误，因为a的内存已经被释放，输出为乱码
    int &ref2=test02();//左值的意思是赋值=的左边
    cout << "ref2 = "<<ref2 <<endl;
    cout << "ref2 = "<<ref2 <<endl;
    test02() =1000;//因为这里返回的是a的引用，所以，相当于对a的引用进行赋值，则可以修改a
    cout << "ref2 = "<<ref2 <<endl;//这里输出为1000
    cout << "ref2 = "<<ref2 <<endl;
    //如果函数的返回值是引用，这个函数调用可以作为左值
}

2.5 引用的本质
本质： 引用的本质在c++内部实现是一个指针常量
int main(){
    int a =10;
    //自动转换为 int*const ref =&a；指针常量是指针指向不改变，也说明为什么引用不可改变
    int &ref = a;
    ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20;
    cout<<"a="<<a<<endl;
    cout <<"ref="<<ref<<endl;   
}
结论：C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器帮我们做了

2.6 常量引用
作用：常量引用主要用来修饰形参，防止误操作
在函数形参列表中，可以加const修饰形参，防止形参改变实参
//打印数据函数
void showValue(int &val)
{
    //val = 1000; 如果只是引用的话，是可以修改的。但如果函数定义时变成void showValue(const int &val)进行常量引用
    cout<<"val = "<<val<<endl;
}
int main(){
    //常量引用
    //使用场景：用来修饰形参，防止误操作
    int a =10;
    int &ref = 10;//这行代码是错误的，因为引用必须引一块合法的内存空间
    //加上const之后  编译器将代码修改 int temp =10;const int &ref = temp;
    const int &ref = 10;//引用必须引一块合法的内存空间
    ref = 20;//这里加入const之后变为只读，是不能修改了
    
    int a =100;
    showValue(a);
    system("pause");
    return 0;

}
*/



int main(){
    //1、整型
    int a =0;
    cout<<"请给整型变量a赋值："<<endl;
    cin>>a;
    cout<<"整型变量a = "<<a<<endl;

    //2、浮点型
    float f =3.14f;
    cout <<"请给浮点型变量f赋值："<<endl;
    cin >> f;
    cout<<"浮点型变量f="<<f<<endl;
    //3、字符型
    //...
    //4、字符串型
    //...
    //5、布尔类型
    //...
    int b = 20;
    int c =30;
    int &d = b;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;

}