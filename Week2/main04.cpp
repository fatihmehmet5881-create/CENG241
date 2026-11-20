#include <iostream>
using namespace std;

int x = 77 ; 
					
int main() {	
	int x = 99;     					
     
	cout << "x local=" << x << endl << "x global=" << ::x << endl;
	return 0;
}
