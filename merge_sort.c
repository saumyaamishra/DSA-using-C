//WAP to implement merge sort

#include<stdio.h>
#include<stdlib.h>

void merge(int input[],int mid,int ei){
    int k=0;
    int p=mid;
    int merged[ei];
    int i = 0;
    while(k<ei){
        if(i>=p){
            merged[k] = input[mid];
            mid++;
        }
        else if(mid>=ei){
			merged[k] = input[i];
            i++;
        }
        else if(input[i]>=input[mid]){
            merged[k]=input[mid];
            mid++;
        }
        else{
            merged[k]=input[i];  
            i++;
        }
        k++;
    }
    for(int i=0;i<ei;i++){
        input[i]=merged[i];
    }
}
void mergeSort(int input[],int size){
    if(size<=1){
        return;
    }
    int mid = size/2;
    int *p = input+mid;
    mergeSort(input,mid);
    mergeSort(p,size-mid);
    merge(input,mid,size);
}


int main() {
    int m,n;

    printf("Enter The Dimension Of Array : ");
    scanf("%d%d",&m,&n);    

    printf("Enter The Elements Of Array : \n");
    int arr[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d",arr[i]+ j);

    int *a = &arr[0][0];

    mergeSort(a, m*n);

    int val = a[0];
    int count = 1;
    for(int i = 1; i < m*n; i++){
        if(a[i] != val) break;
        count++;
    }

    int row = (m*n) / count;

    int (*p)[row][count] = &arr;

    printf("\nRearranged Array : \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < count; j++)
            printf("%d ", p[0][i][j]);
        printf("\n");
    }
    return 0;
}