#include <iostream>

class A{
    public:
        static int aa;
        void method1(){std::cout << "A method1" << std::endl;};
        virtual  void method2() {std::cout << "A method2" << std::endl;};
        static void method3(){};
};

class B : public A{
    public:
        void method1() {std::cout << "B method1" << std::endl;} ;
        // void method2() {std::cout << "B method2" << std::endl;};
};

//   int A::aa = 0;
int main(){

    A *a= new B;
    a->method2();

}