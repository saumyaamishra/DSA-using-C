//WAP to swap arrays

#include<stdio.h>

int t1 (int k[][4], int ar[], int index)
{
    for (int x=0; x<2; x++) {
        for (int y=0; y<4; y++) {
            k[x][y] = ar[index++];
        }
    }
    return index;
}

void swap (int a[][4], int b[][4])
{
    for (int x=0; x<2; x++) {
        for (int y=0; y<4; y++) {
            int t=a[x][y];
            a[x][y]=b[x][y];
            b[x][y]=t;
        }
    }
}

int t2 (int a[][4], int ar[], int index)
{
    for (int x=0; x<2; x++) {
        for (int y=0; y<4; y++) {
            ar[index++] = a[x][y];
        }
    }
    return index;
}

int main()
{
    int ar[40], count=1;
    
    for (int x=0; x<40; x++) {
        ar[x]= count;
        count++;
    }

    int i=0;
    int a[2][4],b[2][4],c[2][4],d[2][4],e[2][4];
    i=t1(a,ar,i);
    i=t1(b,ar,i);
    i=t1(c,ar,i);
    i=t1(d,ar,i);
    i=t1(e,ar,i);

    swap(b,d);

    i=0;
    i=t2(a,ar,i);
    i=t2(b,ar,i);
    i=t2(c,ar,i);
    i=t2(d,ar,i);
    i=t2(e,ar,i);

    printf("Array after swapping: \n");
    for (int x=0; x<40; x++) {
        printf("%d ", ar[x]);
    }

    return 0;
}