#include <iostream>

/*
    宏定义：将定义的变量名所代表的符号（变量，函数，运算符等...），复制到使用宏定义处
*/

#define LOG(x) std::cout<< x <<std::endl;


/*
    名称空间

*/

namespace apple
{
    void print()
    {
        std::cout<< "apple" <<std::endl;
    }

}

namespace orange
{
    void print()
    {
        std::cout<< "orange" <<std::endl;
    }

}



int main()
{
    apple::print();
    print();
    // LOG("hello!");
}