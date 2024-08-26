#include <iostream>


int m_testint = 10;

class Singleton
{
    public:
        Singleton(const Singleton&) = delete; 
        static Singleton& Get()
        {
            return s_instance;
        }
        void Function  (){}
        
    private:
        Singleton(){}
        static Singleton s_instance;
        static int m_testnum;
};

Singleton::Singleton s_instance;

int main()
{
    Singleton& singleton = Singleton::Get().Function();
    

}