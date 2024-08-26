#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
    std::vector<int> vector = {3,2,5,1,4};
    //升序排序
    std::sort(vector.begin(),vector.end(),std::greater());
    //降序排列
    std::sort(vector.begin(),vector.end(),std::less());
    //自定义规则排序
    std::sort(vector.begin(),vector.end(),[](int a,int b){

        if(a == 1)
        {
            return false;
        }
        if (b == 1)
        {
            return true;
        }
        return a < b;
    });

}