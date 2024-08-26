/*
    运算符的重载：
        本质上是给运算符赋予新的含义，或者添加函数，或者创建。
        允许在程序中定义或修改运算符的行为

*/


#include <iostream>
#include <memory>

class Entity
{ 
    
    public:
       Entity()
       {
         std::cout<<"Entity create!"<<std::endl;
       }
        ~Entity()
       {
         std::cout<<"Entity distroyed!"<<std::endl;
       }


};

int main()
{
    {
        std::unique_ptr<Entity> entityPir = std::make_unique<Entity>();
        // std::auto_ptr<Entity> entityPir1 = std::auto_ptr<Entity>();
    }
    
    std::cin.get();

}