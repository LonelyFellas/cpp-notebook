# 复习题
## 1. C++程序的模块叫什么？
```angular2html
main函数
```
## 2. 下面的预处理器编译指令是做什么用的
```c++
#include <iostream>
```
```angular2html
该编译指令是将iostream文件的添加到程序中。
```
## 3. 下面的语句是做什么用的
```c++
using namespace std;
```
```angular2html
这是useing的编译指令，命名空间是c++的特性，这个主要是为不用每个每次都使用std::前缀
```
## 4. 什么语句可以用来打印语句"HELLO, WORLD"， 然后开始新的一行
```c++
printf("HELLO, WORLD!");
std::cout<< "HELLO, WORLD" << std::endl;
```
## 5. 什么语句可以用来创建名为cheeses整数变量？
```c++
int cheeses = 0;
```
## 6. 什么语句可以用来将值32赋给变量cheeses?
```c++
int cheeses = 32;
```
## 7. 什么语句可以用来将从键盘输入的值读入变量cheeses中？
```c++
int cheeses = 0;
cin >> cheeses;
cout << cheeses << endl;
```
## 8. 什么语句可以用来打印“We have X varieties of cheese", 其中X为变量cheeses的当前的值
```c++
int cheeses = 0;
cin >> cheeses;
int X = cheeses;
cout << "We have " << X << " varieties of cheese" << endl; 
```
## 9. 下面的函数原型指出了关于函数的哪些信息？
```c++
int froop(double t);
void rattle(int n);
int prune(void);
```
```angular2html
指出了froop rattle, prune 三个函数
```
## 10. 定义函数时，在什么情况下不必使用关键字return？
```angular2html
在函数的返回类型是void
```
## 11. 假设您编写的main()函数包含如下代码：
```c++
cout << "Please enter your PIN: ";
```
而编译器指出cout是一个位置标识符。导致这种问题的原因很可能是什么？指出3中修复的这个问题的方法。
```c++
// one
printf("Please enter your PIN: ");

// two
std::cout << "Please enter your PIN: ";

// three
using namespace std;
cout << "Please enter your PIN: ";
```
# 编程练习
## 1. 编程一个C++程序，他显示您的姓名和地址
```c++
int main() {
    string age = "19";
    string address = "金地艺境";
    cout << "My age is " << age << ", and my address is " << address << ". " << endl;
}
```
## 2. 编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码(一long等于220码).
```c++
int main() {
    long long distance = 0;
    cin << distance;   
    long long ma = distance * 220;
    cout << ma << endl;
}
```
## 3. 编写一个C++程序，它使用3个用户定义的函数(包括main())，并生成下面的输出:
```c++
void see() {
   cout << "See how they run" << endl; 
}
void three() {
   cout << "Three blind mice" << endl; 
}
int main() {
    three();
    three();
    see();
    see();
}
```
## 4. 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示:
```c++
int main() {
    int age = 0, hours = 0, minutes = 0;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: " << age << ":" << minutes << endl;
}
```
## 5. 编写一个程序，其中的main()调用一个用户定义的函数(以摄氏温度值为参数，并返回相应的华氏温度值)。该程序按下面的格式要求用户输入摄氏温度值，并显示结果:
```c++
int CToF (double celsius) {
    return celsius * 1.8 + 32.0; 
}
int main() {
    double celsius = 0;
    cout << "Please enter a celsius value";
    cin >> celsius;
    int fahrenheit = CTof(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit."; 
}
```
## 