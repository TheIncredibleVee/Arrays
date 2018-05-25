#include<iostream>
using namespace std;
void upperhalf(int**, int);

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
	cout<<endl<<"Upper half of the matrix is \n";
	upperhalf(matrix,n);
	return 0;
}

void upperhalf(int **a, int n){
	for (int i=0;i<n;++i){
		for(int j=0;j<n-i;++j){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
