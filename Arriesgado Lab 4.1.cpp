#include <iostream>

using namespace std;

int main(){
	int value=25;
	int* pointer= &value;
	
	cout<<"The integer with a memory address "<<pointer
	<<" has a value "<<*pointer<<".";
	
	
}
