#include<iostream>
using namespace std;

int** func(int*,const int);
void display_matrix(int**,int);

int main(int argc, char** argv){
	int *array;
	const int n=10;					//Test array
	//int** output_matrix;
	cout<<"The test array is \n";
	for (int i=0;i<n;++i){
		array[i]=i;
		cout<<array[i]<<"\t";
	}
	cout<<endl<<"Changed array is \n";
	int** output_matrix=func(array, n);
	display_matrix(output_matrix,n);
	
	delete [] output_matrix[0];
	delete [] output_matrix[1];
	delete [] output_matrix;
	return 0;
}
int** func(int * a,const int n){
	int aa=0,b=0;
	int** mat= new int*[2];
	mat[0]=new int[n];
	mat[1]=new int[n];
	for (int i=0;i<n;++i){
		//mat[i]=new int[2];
		
		if (*(a+i)%2){
			mat[0][aa++]=a[i];
		}
		else
			mat[1][n-(++b)]=a[i];
		
	}
	while(aa<n){
		mat[0][++aa]=0;
	}
	while(b<n){
		mat[1][n-(++b)]=0;
	}
	return mat;
}
void display_matrix(int** mat,int n){
	for(int i=0;i<2;++i){
		for(int j=0;j<n;++j){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
