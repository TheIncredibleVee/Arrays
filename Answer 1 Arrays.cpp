#include<iostream>
using namespace std;
int main(){
	int matrix[5][5],a=0, n=5;		//Test matrix 5X5, n for number of rows
	cout<<"The test matrix is \n";
	for (int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			matrix[i][j]=a++;
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	/*Printing out the sum of the corners of the matrix*/
	cout<<"Sum of the corners is \t"<<matrix[0][0]+matrix[0][n-1]+matrix[n-1][0]+matrix[n-1][n-1];
	return 0;
}
