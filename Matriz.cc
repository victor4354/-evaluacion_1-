//Programa de suma de matrices de 2x2.
//Permite calcular matrices de 2x2 por medio del ingreso de numeros
//Necesita de un orden al momento de ingresar los valores
#include<iostream>

using namespace std;

int main(){

int m,n;

  cin>>m>>n;

  int  A[m][n],B[m][n],C[m][n];

  for( int i=0;i<m;i++){

     for(int j=0;j<n;j++){

            cout<<"A["<<i<<"]["<<j<<"]:";

            cin>>A[i][j];

      }

  }

   for( int i=0;i<m;i++){

      for(int j=0;j<n;j++){

            cout<<"B["<<i<<"]["<<j<<"]:";

            cin>>B[i][j];

      }

   }

 for( int i=0;i<m;i++){

     for(int j=0;j<n;j++){

            C[i][j]=A[i][j]+B[i][j];

      }

 }

 for( int i=0;i<m;i++){

     for(int j=0;j<n;j++){

 

            cout<<C[i][j]<<endl;

      }

  }

}
