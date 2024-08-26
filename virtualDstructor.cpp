#include <iostream>
/*
    虚析构函数
*/
class Base
{
    public:
    Base(){std::cout<<"base constructor! \n";};
    virtual ~Base(){std::cout<<"base destructor! \n";};
    virtual void print()
    {std::cout<<"base ! \n";};
};

class Derived : public Base
{
    public:
    Derived(){std::cout<<"dervied constructor! \n";};
    ~Derived(){std::cout<<"dervied destructor! \n";};

    void print()
    {std::cout<<"dervied ! \n";};
};


int main()
{

    // Base* base = new Base();

    // delete base;

    // Derived* derived = new Derived();

    // delete derived;

    Base* b = new Derived();
    b->print();

    delete b;

    std::cin.get();

}