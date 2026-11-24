#include<iostream>
int main(){
	int a=5,b=3;
	int x[10]={};
	int mul=a*b;
	int*p=&a;
	int val=*p;
	int band=a&b;
	int*addr=&a;
	int&ref=a;
	std::cout<<"mul   = "<<mul<<'\n'<<"val   = "<<val<<'\n'<<"band  = "<<band<<'\n'	<<"&a    = "<<addr<<'\n'<<"ref   = "<<ref<<'\n'	<<"&x[0] = "<<&x[0]<<'\n';
	return 0;
}