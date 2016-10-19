#include <iostream>
#include <unistd.h>



int main(void) {
	int number;
	std::cout << "l'ID DEL PROCESSO E': " << getpid() << std::endl;
	std::cin >> number;
	
	return 0;
}
