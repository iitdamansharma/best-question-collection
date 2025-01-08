#include<iostream>
using namespace std;

#define r1 2 // number of rows in Matrix-1
#define c1 2 // number of columns in Matrix-1
#define r2 2 // number of rows in Matrix-2
#define c2 2 // number of colums in Matrix-2
void mulMat(int mat1[][c1],int mat2[][c2]){
    int rslt[r1][c2];
    cout<<"Multiplication of given two matrix is:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            rslt[i][j]=0;
            for(int k=0;k<r2;k++){
                rslt[i][j]+=mat1[i][j]*mat2[k][j];
            }
            cout<<rslt[i][j];
        }
        cout<<endl;
    }
}
int main(){

    int mat1[r1][c1] = { { 1, 1, 2 },
						{ 2, 2 , 4} };

	int mat2[r2][c2] = { { 1, 1 },
						{ 2, 2 } };

	if (c1 != r2) {
		cout << "The number of columns in Matrix-1 must "
				"be equal to the number of rows in "
				"Matrix-2"
			<< endl;
		cout << "Please update MACROs according to your "
				"array dimension in #define section"
			<< endl;

		exit(EXIT_FAILURE);
	}

	// Function call
	mulMat(mat1, mat2);

	return 0;
}