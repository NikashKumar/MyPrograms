#include <iostream>
using namespace std;
int main()
{	

	int FR, FC, SR, SC ;
	cout << "Enter the row and column sizes of both the matrices\n";
	cout << "FR : " ;
	cin >> FR ;
	cout << endl << "FC : ";
	cin >> FC ;
	cout << endl << "SR : ";
	cin >> SR ;
	cout << endl << "SC : ";
	cin >> SC ;
	if(FC == SR)
	{
		int first[FR][FC], second[SR][SC], res[FR][SC];
		int i,j;
		cout << "Enter values for first matrix\n ";
		for( i=0;i<FR;i++){
				cout << "VALUE OF I AND J ARE : " << i << j << endl;
			cout<<"Enter value for row number: "<<i+1<<endl;
			for( j=0;j<FC;j++){
				cin>>first[i][j];
			}

		}


		cout<<"\n\n\nEnter Value For Second Matrix:"<<endl;
		for( int i=0;i<SR;i++){
			cout<<"Enter value for row number: "<<i+1<<endl;

			for(int  j=0;j<SC;j++){
				cin>>second[i][j];

			}

		}

		cout << "the matrices are  " << endl ; 
		for(int i=0;i<FR;i++){
			cout<< endl;
			for(int j=0;j<FC;j++){
				cout<<"\t\t"<<first[i][j]<<"    ";

			}

		}
		cout << "Seconf matrix is " << endl;
		for(int i=0;i<SR;i++){
			cout<< endl;
			for(int j=0;j<SC;j++){
				cout<<"\t\t"<<second[i][j]<<"    ";

			}

		}
		int var = 0;
		for(int i=0;i<FR;i++){
                cout<< endl;
                for(int j=0;j<SC;j++){
			for(int k = 0; k < FC; k++){
			
				var = var + (first[i][k] * second[k][j]);

                			}
			res[i][j] = var;
				var= 0;			
			}
;
        }
		cout << "Resultant matrix is\n ";
		for(int i=0;i<FR;i++){
        cout<< endl;
        for(int j=0;j<SC;j++){
            cout<<"\t\t"<<res[i][j]<<"    ";
        }
    }		
		

	}

	else {
		cout << "Cannot Multiply" << endl;

	}
}
