#include <iostream>

using namespace std;

int main(){
	char name[]="John Raymond M. Arriesgado";
	char* pointer= name;
	
	cout<<"The string array with a starting address "<<&pointer
	<<" is "<<pointer;
}
