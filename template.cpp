#include <iostream>
#include <string>

/*
    模板并没有真正的存在
    只有在函数被调用时，编译器才会生成函数
*/

template<typename T>
void Print(T value)
{
    std::cout<<value<<std::endl;
}

int main()  
{
    Print<int>(5);
    Print("hello!");
    Print(5.2f);
}