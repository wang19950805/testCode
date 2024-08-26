#include <iostream>

class Singleton {
public:
		
	static Singleton& Get() {
		static Singleton instance;
		return instance;
	}
		


	void hello() {
		
		std::cout << "Singleton!" << std::endl;
	}

};

int main() 
{
	Singleton::Get().hello();
}