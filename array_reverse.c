#include<stdio.h>

int main() {
  int n;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements : \n");
  for(int i = 0 ; i < n ; i++) {
    scanf("%d",&arr[i]);
  }
  
  int i = 0 , j = n-1;

  for(int i = 0 , j = n-1 ; i < j ; i++ , j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
   }

   printf("After reversing the array : ");
   for(int i = 0 ; i < n ; i++) {
    printf("%d",arr[i]);
  }
}