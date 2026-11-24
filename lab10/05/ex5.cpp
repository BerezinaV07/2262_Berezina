#include <iostream>
int main(){
	int x = 1, y = 2;
	int *p = &x, *q = &y;
	if (p < q)
    		std::cout << "Yes" << std::endl;
	else
    		std::cout << "No" << std::endl;
	return 0;

}