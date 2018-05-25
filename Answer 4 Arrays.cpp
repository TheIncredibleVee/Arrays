#include<iostream>
using namespace std;

void func(int*,int);

int main(int argc, char** argv){
	int *array,n=10;					//Test array
	cout<<"The test array is \n";
	for (int i=0;i<n;++i){
		array[i]=i;
		cout<<array[i]<<"\t";
	}
	cout<<endl<<"Changed array is \n";
	func(array, n);
	
	return 0;
}
void func(int * a, int n){
	for (int i=0;i<n;++i){
		if (*(a+i)%2){
			*(a+i)*=3;
		}
		else
			*(a+i)*=2;
		cout<<a[i]<<"\t";
	}
}
