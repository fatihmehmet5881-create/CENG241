#include <iostream>

bool value = true;

namespace First {
	bool value = true;
}

namespace Second {
	bool value = false;
}

int main() {
	int value = 5;

	if(::value) std::cout << "Variable: " << value++ << '\n';
	if(First::value) std::cout << "Variable: " << value++ << '\n';
	if(Second::value) std::cout << "Variable: " << value++ << '\n';

	return 0;
}
