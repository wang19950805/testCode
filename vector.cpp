#include <iostream>
#include <vector>

class Vertex
{
    public:
    float x,y,z;

    Vertex(float x,float y,float z)
    :x(x),y(y),z(z)
    {

    }

    Vertex(const Vertex& vertex)
    :x(vertex.x),y(vertex.y),z(vertex.z)
    {
        std::cout<<"copy run!"<<std::endl;
    }

};

// std::ostream& operator<<(std::ostream& stream,const Vertex& vertex)
// {
//     std::cout<<vertex.x<<vertex.y<<vertex.z;
//     return stream;
// }

int main()
{
    std::vector<Vertex> vertices;
    vertices.reserve(3);            //设置vertor的内存大小
    // vertices.push_back({1,2,3});
    // vertices.push_back({4,5,6});
    // vertices.push_back(Vertex(1,2,3)); //Vertex(1,2,3)是在main函数中构造，然后复制到实际的vertor中，因此会调用Vertex的拷贝构造方法！
    //emplace_back方法将直接在实际的vertor内存中，使用参数构造一个vertex对象
    vertices.emplace_back(Vertex(4,5,6));
    vertices.emplace_back(Vertex(7,8,9));


    // for(Vertex& v:vertices)
    //     std::cout<<v<<std::endl;
    // vertices.clear();  



    std::cin.get(); 
}