#include<stdio.h>
void main()
{
int arr1[50],arr2[50],size1,size2,i,j;
printf("Enter Array 1 Size : ");
scanf("%d",&size1);

printf("Enter Array 1 Elements : ");
for(i=0; i<size1; i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter Array 2 Size : ");
scanf("%d",&size2);
printf("Enter Array 2 Elements : ");
for(i=0; i<size2; i++)
{
scanf("%d",&arr2[i]);
}
for(i=size1,j=0; j<size2;j++,i++)
{
arr1[i]=arr2[j];
}
printf("Now the new array after merging is :\n");
for(i=0; i<size1+size2; i++)
{
printf("%d\t",arr1[i]);
}
}
