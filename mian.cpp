#include <iostream>
/*
    c++类和结构体中的静态变量和函数

*/
//int s_Variable = 10;
extern int s_Variable;



struct Entity
{
    /*
        当类或结构体中的成员变量用static修饰后，该变量在Entity类的所用实例中，
        将会只有一个实例，这意味着当第二个Entity实例e2修改x，y的值时,实际上
        同时修改了e1实例成员变量的值，二者的成员变量指向的是相同的地址

        在类或结构体中使用静态变量的意义在于，当数据需要在实例中共享，在实例中进行管理，
        不会在不同的实例中修改成不同的值，常用于单例模式

    */
    static int x,y;
    int speed;

    void Print(){
        std::cout<<x<<","<<y<<std::endl;
    }
};



int main()
{

    Entity e1;
    e1.x = 2;
    e1.y = 3;
    e1.speed = 5;
   
    Entity e2;
    e2.x = 5;
    e2.y = 8;

    e1.Print();     //5，8
    e2.Print();     //5，8
}