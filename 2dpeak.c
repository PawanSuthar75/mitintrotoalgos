#include<stdio.h>
#include<stdlib.h>
void peak(int **,int ,int ,int );//for making a dynamic array
int globalmaxindex(int *,int );//for finding the gloabal maximum element in a 1-d array
int main()
{
    int rows,cols,i,j;
    printf("enter the no. of rows and cols");
    scanf("%d %d",&rows,&cols);

    int **a=(int **)malloc(sizeof(int*)*cols);
    for(i=0;i<rows;i++)
        a[i]=(int *)malloc(sizeof(int)*cols);

    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);



    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d ",a[i][j]);
        printf("\n");


    }

    peak(a,0,rows-1,cols-1);
    //printf("peak is %d\n",peaks);


    return 0;

}

void peak(int **a,int rowlow,int rowhigh,int cols)
{
    int midrow,max=-1;
    midrow=(rowlow+rowhigh)/2;

    max=globalmaxindex(a[midrow],cols);
    if(rowlow==rowhigh){
        printf("%d   peak",a[midrow][max]);
        return ;
    }
    if((midrow!=rowlow)&&(a[midrow][max]<a[midrow-1][max]))
        peak(a,rowlow,midrow-1,cols);
    else if((midrow!=rowhigh)&&(a[midrow][max]<a[midrow+1][max]))
        peak(a,midrow+1,rowhigh,cols);
    else
        printf("%d    peak",a[midrow][max]);
}



int globalmaxindex(int *a,int cols)
{
    int maxindex=0,i;
    for(i=0;i<=cols;i++)
        if(a[i]>a[maxindex])
            maxindex=i;
    return maxindex;
}