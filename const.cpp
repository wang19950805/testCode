#include <iostream>

class Entity
{
private:
    int mX,mY;
public:
    int GetX() const
    {
        return mX;
    }
    int GetY()
    {
        mY = 0;
        return mY;
    }
};

//常量指针： 可修改指针指向，不可修改指向的内容
//常量引用： 二者不能修改，修改引用就是修改内容
// void Print1(const Entity &e)
void Print1(const Entity* e)
{
    e = nullptr;
    e = new Entity();
    // e.GetX();
    // e.GetY();
}

//指针常量: 可修改指针指向的内容，不可修改指针指向
void Print2(Entity* const e)
{
    // e = nullptr;
    // e = new Entity();
    // e->GetX();
    // e->GetY();
}
int main(){


}

//mutable


