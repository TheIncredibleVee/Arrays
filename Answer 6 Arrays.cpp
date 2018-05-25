#include<iostream>
using namespace std;

int** new_matrix(int*,const int);
void display_matrix(int**,int);

int main(int argc, char** argv){
	int *array,n=10;					//Test array
	int** output_matrix;
	cout<<"The test array is \n";
	for (int i=0;i<n;++i){
		array[i]=i+1;
		cout<<array[i]<<"\t";
	}
	cout<<endl<<endl<<"New output Matrix is \n";
	output_matrix=new_matrix(array, n);
	display_matrix(output_matrix,n);
	
	return 0;
}
int** new_matrix(int * a, const int n){
	int ** matrix=new int*[n];
	for (int i=0;i<n;++i){
		matrix[i]=new int[n];
		for(int j=0;j<n;++j){
			matrix[i][j]=a[i];
		}
		matrix[i][i]=0;
		matrix[i][n-i-1]=0;
	}
	return matrix;
}
void display_matrix(int** mat,int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
