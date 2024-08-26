#include <iostream>
#include <memory>

class Entity
{
    public:
        Entity(){std::cout<<"Entity create! \n";};
        ~Entity(){std::cout<<"Entity delete! \n";};
};

class smartPointer
{
    private:
        Entity* m_entity;

    public:
        smartPointer(Entity* entity):m_entity(entity)
        {
            std::cout<<"smartPointer create! \n";
        };
        ~smartPointer()
        {
            delete m_entity;
            std::cout<<"smartPointer delete! \n";
        };
};


int main()
{
    std::cout<<"++++++++++++++++++ start! \n";
    {
        smartPointer smp = new Entity();

         std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    }
    
    std::cin.get();



}