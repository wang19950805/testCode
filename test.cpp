#include <iostream>
#include <tuple>

// 定义一个add函数返回两个整数的和
int add(int x, int y) { return x + y; }

int plus(int x, int y) { return x * y; }

// 定义一个print_sum1函数，传入两个整数和一个函数指针
void print_sum1(int a, int b, int (*funcptr) (int, int))
{
    std::cout << "The sum of two integers is : " << funcptr(a, b) << '\n';
}

// 定义一个print_sum2函数，传入两个整数和一个函数
void print_sum2(int a, int b, int add_func(int, int))
{
    std::cout << "The sum of two integers is : " << add_func(a, b) << '\n';
}

std::tuple<std::string,int> CreatePerson(std::string name,int age)
{   
    return {name,age};

}


int main()
{
    // const int a { 5 };
    // const int b { 7 };

    // print_sum1(a, b, add);
    // print_sum1(a, b, plus);
    // print_sum2(a, b, add);

    // return 0;
    std::cout << ew;
    // auto[name,age] = CreatePerson("chreno",23);
}