#include <iostream>
#include <thread>
#include <mutex>

static bool status = false;

std::mutex myMutex;
void print()
{
    using namespace std::literals::chrono_literals;
    
    while (!status)
    {
        std::cout<<"working..."<<std::endl;
        std::this_thread::sleep_for(1s);
    }
    
}

void fun1(int x,char y){
    // myMutex.lock();
    std::cout<<"fun1...:"<<x<<y<<std::endl;
    // myMutex.unlock();
}


void fun2(int x,char y){
    // myMutex.lock();
    std::cout<<"fun2...:"<<x<<y<<std::endl;
    // myMutex.unlock();
}

int main()
{
    std::thread th1(fun1,1,'$');
    std::thread th2(fun2,2,'&');

    th1.join();
    th2.join();
}