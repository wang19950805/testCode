#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

/*
    lambda表达式：看作是一个没有函数名的函数
    [capture list] (parameter list) specifiers exception -> type { function body }
*/
/*
    函数指针： 将函数作为参数进行传递  

        原始函数指针：int(*funcPtr)();  
        静态的函数指针：int (*const funcPtr)();

        另外，对于 const int(*funcPtr),意思是这个指针指向的函数的返回值是常量

*/
void Foreach(const std::vector<int>& values,void(*func)(int))
{
    for(int value: values)
    {
        func(value);
    }
}


void Foreach1(const std::vector<int>& values,std::function<void(int)>& func)
{
    for(int value: values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = {1,2,3,4,5};
    auto lambda = [](int value){std::cout<<"value:"<<value<<std::endl;};

    Foreach(values,lambda);

    // Foreach(values,[](int value){
    //     std::cout<<"value:"<<value<<std::endl;

    // });
    auto it = std::find_if(values.begin(),values.end(),[](int value){return value > 4});
    std::cout<< *it << std::endl;


}