#include<iostream>

using namespace std;
void col_product(int**, int);

int main(){
	int** matrix,a=1;		//Test matrix 5X5, n for number of rows
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
	cout<<endl<<"Products of the elements of each column of the matrix are \n";
	col_product(matrix,n);
	return 0;
}

void col_product(int **a, int n){
	long product=1;
	for (int i=0;i<n;++i){
		product=1;
		for(int j=0;j<n;++j){
			product*=a[j][i];
		}
		printf("Product of Column %d  is %d \n", i ,product);
	}
}
