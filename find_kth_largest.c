//WAP to find kth largest and kth smallest number

#include<stdio.h>
void sort(int input[],int n) {
    for(int i = 0 ; i < n-1 ; i++) {
        int min = input[i];
        int minIndex = i;

        for(int j = i+1 ; j < n ; j++) {
            if(input[j] < min) {
                min = input[j];
                minIndex = j;
            }
        }

      int temp = input[i];
      input[i] = input[minIndex];
      input[minIndex] = temp;
    }
}

int main() {
  int n;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements : \n");
  for(int i = 0 ; i < n ; i++) {
    scanf("%d",&arr[i]);
  }
  sort(arr,n);

  int k1;
  printf("Enter the desired number to find largest element : ");
  scanf("%d",&k1);
  printf("The %d th largest element of the array is : %d\n", k1 , arr[n-2]);

  int k2;
  printf("Enter the desired number to find smallest element : ");
  scanf("%d",&k2);
  printf("The %d th largest element of the array is : %d", k2 , arr[k2-1]);

  return 0;

}