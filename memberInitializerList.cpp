//成员初始化列表
/*
    利用成员初始化列表进行对象的初始化可以 
    避免在初始化时重复调用成员属性的构造函数
    Entity()
        :x(1),y(2),example(8)
        {

        }
*/

#include <iostream>
class Example
{
    public:
    Example()
    {
        std::cout<<"Example create"<<std::endl;
    }
    Example(int x)
    {
        std::cout<<"Example create with:"<< x <<std::endl;
    }
};
class Entity
{
    private:
        int x;
        int y; 
        Example example;
    
    public:
        Entity()
        :x(1),y(2),example(8)
        {

        }
        Entity(int x,int y,Example example)
        {
            x= 0;
            y =1 ;
            example = NULL;
        }

};

int main()
{
    Entity e;
}


