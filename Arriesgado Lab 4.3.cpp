#include <iostream>

using namespace std;

int main(){
	int array[5];
	int* pointer=array;
	
	cout<<"Enter Five Numbers"<<endl;
	
	for(int i=0; i<5; i++){
		cin>>array[i];
	}
	
	for(int i=0; i<5; i++){
		cout<<"The Memory Address "<<pointer+i<<" has a value: "<<*pointer++<<endl;	
	}
}
