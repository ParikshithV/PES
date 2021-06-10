#include <stdio.h>
int determinant(int a[2][2]){
  int det = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  printf("Determinant = %d",det);
}
int main(){
  int a[2][2], i, j;
  printf("Enter elements of 2x2 matrix: \n");
  for(int i=0; i < 2; i++){
    for(int j=0; j < 2; j++){
        scanf("%d",&a[i][j]);
    }
  }
  determinant(a);
}
