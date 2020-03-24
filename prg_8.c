#include<stdio.h>
void main()
{
int i,j,m,n,c=0,k=0;
int a[20][20];
printf("Enter number of rows and column:");
scanf("%d%d",&m,&n);
printf("Enter Sparse matrix\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)

{
scanf("%d",&a[i][j]);
if(a[i][j]!=0)
c++;
else
k++;
}
if(c<k)
{
printf("ROW\tCOL\tVALUE\n");
printf("%d\t%d\t%d\n",m,n,c);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
printf("%d\t%d\t%d\n",i,j,a[i][j]);
}
}
}
else
printf("Not a sparse matrix\n");
}
