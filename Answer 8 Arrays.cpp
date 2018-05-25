#include<iostream>
using namespace std;

int* func(int**,const int);

int main(){
	int** matrix,a=0;		//Test matrix 5X5, n for number of rows
	const int n=5;
	matrix=new int *[n];
	cout<<"The test matrix is \n";
	for (int i=0;i<n;++i){
		matrix[i]=new int [n];
		for(int j=0;j<n;++j){
			matrix[i][j]=a++;
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	int * output_array= func(matrix,n);
	cout<<endl<<"The required numbers are \n";
	int size_of_array=output_array[0];
	for(int i=1;i<size_of_array;++i){
		cout<<output_array[i]<<"\t";
	}
	delete [] output_array;
	return 0;
}

int* func(int **a, const int n){
	int *arr =new int[n];
	int size =1;		//For storing size of the array
	arr[0]=size;;
	for (int i=0;i<n;++i){
		for(int j=0;j<n-2;++j){
			if (a[j][i]%2==0 && a[j+2][i]%2==0 ){
				arr[size++]=a[j+1][i];
			}
		}
	}
	arr[0]=size;
	return arr;
}
