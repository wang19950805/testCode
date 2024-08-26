/*
    静态变量或静态函数意味着，当需要这些变量或函数与实际定义的符号链接时，
链接器不会在这个编译单元的作用域外，寻找该符号的定义
    例如定义一个s_Variable的静态变量
*/
    static int s_Variable = 10; 
/*
    在另一个编译单元main.cpp中创建同样的全局变量
    #include <iostream>

    //int s_Variable = 10;

    int main()
    {
        std::cin.get();
    }
    此时编译不会报错，但如果去掉static修饰之后
*/
    int s_Variable = 10;
/*
    同样再次编译，控制台将会给出一个链接错误
    Static.obj : error LNK2005: "int s_Variable" (?s_Variable@@3HA) 已经在 Main.obj 中定义

    static修饰的变量或函数，在其他的编译单元是不可访问的，换言之，相当于在c++的类中将其声明为private
    如果没有设定static，那么链接器将会跨编译单元进行链接，这就意味着该变量或函数是完全全局的，可以在任何编译单元进行访问和使用
*/
