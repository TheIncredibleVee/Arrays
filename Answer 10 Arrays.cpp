#include<iostream>
using namespace std;

void insert(int*,int&,int,int);
int lsearch(int*, int, int);
int delete_element(int*, int&, int);
void diplay_array(int*, int);

int main(int argc, char** argv){
	int *array,n,choice, temp,x;					//Test array
	cout<<"Enter the number of elements \n";
	cin>>n;
	for (int i=0;i<n;++i){
		//array[i]=i;
		cin>>array[i];
	}
	do{
		cout<<"\n\n Menu\n\n";
		cout<<"\n1. Insert and element\n 2.Delete an element\n 3. Display array\n4. Exit\n";
		cout<<"\nChoose one of the options from the menu\n";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\n What position do you want to enter the element?\t";
				cin>>temp;
				if(temp<n){
					cout<<"\n Enter the value to be entered\n";
					cin>>x;
					insert(array, n,temp-1,x);
				}
				else cout<<"Postion out of reach\n";
				break;
			case 2:
				cout<<"Enter the element to delete\t";
				cin>>temp;
				if(delete_element(array, n, lsearch(array, n, temp)))
					cout<<"\n Element not found\n";
				else cout<<"\n Element deleted succesfully!\n";
				break;
			case 3:
				diplay_array(array, n);
				break;
			case 4:
				cout<<"\nExitting";
				break;
			default:
				cout<<"\nWrong choice\n Try Agian\n";
				break;
		}
	}while(choice!=4);
	
	return 0;
}
void insert(int * a, int& n, int pos, int value){
	for(int i=n;i>pos-1;i--){
		a[i+1]=a[i];
	}
	n++;
	a[pos]=value;
}
int lsearch(int * a, int n, int key){
	for (int i=0;i<n;++i){
		if (a[i]==key){
			return i;
		}
	}
	return -1;
}
int delete_element(int* a, int& n, int pos){
	if (pos==-1)
		return 1;
	for(int i=pos;i<n-1;++i){
			a[i]=a[i+1];
	}
	n--;
	
	return 0;
}
void diplay_array(int* a, int n){
	cout<<endl;
	for (int i=0;i<n;++i)
		cout<<a[i]<<"\t";
}
