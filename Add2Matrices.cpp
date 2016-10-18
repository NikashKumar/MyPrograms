#include<iostream>
using namespace std;

int main(){

	//Using const int for array size
	const int row=2,col=2;
	// if not use const error found

	cout<<"Size of Matrices : "<<row<<" X "<<col<<endl;
	cout<<"Enter Value For First Matrix:"<<endl;

	int first[row][col], second[row][col];

	int i,j;
	for( i=0;i<row;i++){

		cout<<"Enter value for row number: "<<i+1<<endl;
		for( j=0;j<col;j++){
			cin>>first[i][j];
		}

	}


	cout<<"\n\n\nEnter Value For Second Matrix:"<<endl;
	for( i=0;i<row;i++){

		cout<<"Enter value for row number: "<<i+1<<endl;

		for( j=0;j<col;j++){
			cin>>second[i][j];

		}

	}

	// Resultant Matrix
	for( i=0;i<row;i++){

		for( j=0;j<col;j++){
			first[i][j]=first[i][j]+second[i][j];

		}

	}

	cout<<"\n\n\t\tResultant Matrix:"<<endl;
	for( i=0;i<row;i++){
		cout<< endl;
		for( j=0;j<col;j++){
			cout<<"\t\t"<<first[i][j]<<"    ";

		}

	}
	return 0;
}
