#include <iostream>
#include <thread>
#include <chrono>



struct Timer
{

   std::chrono::time_point<std::chrono::steady_clock> start,end;
   std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout<<"timer took "<< ms<<"s"<<std::endl;
    }
    

};

void function()
{
    Timer timer;
    for (int i = 0; i < 100; i++)
    {   
        std::cout<<"hello!"<<std::endl;

    }
    
}


int main()
{
  function();
  std::cin.get();

}