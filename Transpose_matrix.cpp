/*#include<iostream>
using namespace std;

#define N 4

// This function store trospose of A[] in B[]

void tranpose(int A[][N], int B[][N]){
    int i,j;
    for (i=0;i<N;i++){
        for(j=0;j<N;j++){
            B[i][j]=A[j][i];
        }

    }
}

int main(){
        int A[N][N] = {
            {1,1,1,1},
            {2,2,2,2},
            {3,3,3,3},
            {4,4,4,4},
        };
        int B[N][N],i,j;

        tranpose(A,B);

        cout<<"Result Matrix is \n";

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
            cout <<" "<< B[i][j];
        cout <<"\n";
            }
        }
        return 0;

}

// Time complexicity : O(N*N)
//Auxiliary space : O(N*N)
*/
#include<iostream>
using namespace std;
 
#define N 4
//Convert A[][] to its transpose

 void transpose(int A[][N]){
    for(int i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            swap(A[i][j],A[j][i]);
        }
    }
 } 

int main(){
    int A[N][N]={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    transpose(A);
    
}


