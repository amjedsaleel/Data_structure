#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,count;
  char str[25][25],temp[25];
  printf("How many strings you are going to enter?: ");
  scanf("%d",&count);
  printf("Enter Strings one by one: ");
  for(i=0;i<count;i++)
  scanf("%s",str[i]);
  for(i=0;i<count;i++)
  for(j=i+1;j<=count;j++)
    {
      if(strcmp(str[i],str[j])>0)
        {
          strcpy(temp,str[i]);
          strcpy(str[i],str[j]);
          strcpy(str[j],temp);
        }
    }
printf("Order of Sorted Strings:\n");
for(i=0;i<=count;i++)
printf("%s\n",str[i]);
//printf("\n");

}
