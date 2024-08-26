#include <iostream>

void Log(int var)
{
	std::cout << var << std::endl;
}

void increment(int& var)
{
	var++;
}

int main(){
    //c++引用 : 变量的别名，不会分配内存，初始化必须指定引用对象

	int var = 5;
	int& ref = var;
	increment(ref);   //此处进行引用传值的方法可以直接修改var的值
	Log(ref);          // 6
	Log(var);             //6

	ref = 10;       //此处实际上是直接修改var的值
	Log(ref);       //10  通过打印可以看到var的值发生了变化
	Log(var);         //10

	
}