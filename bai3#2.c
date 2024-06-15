#include <stdio.h>

int circular_shift(int *A, int *B, int *C, int *D){
  int temp = *A;
  *A = *B;
  *B = *C;
  *C = *D;
  *D = temp;
  return 0;
}

int main(){
  int A, B, C, D;

  printf("Nhap vao 4 so nguyen: ");
  scanf("%d %d %d %d", &A, &B, &C, &D);

  printf("Truoc khi dich chuyen: A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);
  circular_shift(&A, &B, &C, &D);
  printf("Sau khi dich chuyen: A = %d, B = %d, C = %d, D = %d\n", A, B, C, D);

  return 0;
}
