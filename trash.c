#include <stdio.h>
#include <string.h>
//#include <math.h>
#include <stdlib.h>
#define MAX 10000

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t=0,i=0,j=0,z=0,x=0;
    char arr[10][MAX]={0},even[10][MAX]={0},odd[10][MAX]={0};
    scanf(" %d",&t);
    while(i<t)
    {
        scanf("%s",arr[i]);
        i++;
    }
    for(i=0;i<t;i++)
    {   z=0;
        x=0;
        for(j=0;arr[i][j]!='\0';j++)
            if(j%2==0)
            {   even[i][z]=arr[i][j];
                z++;
            }
            else
            {    odd[i][x]=arr[i][j];
                x++;
            }
    }
    for(i=0;i<t;i++)
    {
        printf("\n");
        puts(even[i]);
        printf(" ");
        puts(odd[i]);
    }

    return 0;
}
