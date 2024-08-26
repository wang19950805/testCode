
#include <iostream>

class run{
    public:
        virtual void runable() = 0;
};
class person:public run
{
    public :
        void runable(){};
        void otherthing(){};
};


class dog:public run
{
    public :
     void runable(){};
     void otherthing(){};
};

class brid:public run
{
    public :
        void runable(){};
        void otherthing();
};

void doSomething(run *r){

    dog *d = dynamic_cast<dog *>(r);
    d->otherthing();

}

int main(){

    dog *d = new dog();
    doSomething(d);
    delete d;
    d= nullptr;
    return 0;

}