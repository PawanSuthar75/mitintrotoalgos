#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		scanf("%d",(a+i));

	for(int i=0;i<10;i++)
		printf("%d  ",a[i]);

	printf("\n%d",peak(a,0,9));

	
	return 0;
}





   

int peak(int a[],int low,int high)
{
	int mid=(low+high)/2;
	if(low==high)
		return a[low];

	if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
		return a[mid];
	else if(a[mid+1]>a[mid])
		peak(a,mid+1,high);
	else
		peak(a,low,mid-1);
}
