#include <stdio.h>

int main()
{
int a[10],b[10],num1,num2,i=0,j=0,count=0;
printf("Enter the no of elements of the Set1:");
scanf("%d",&num1);
printf("Enter the elements of the Set1:");
for(i=0;i<num1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the no of elements of the Set2: ");
scanf("%d",&num2);
printf("Enter the elements of the Set2:");
for(i=0;i<num2;i++)
{
scanf("%d",&b[i]);
}
printf("Set difference Set1-set2:\n");
  for(i=0;i<num1;i++)
  {
  for(j=0;j<num2;j++)
  {if(a[i]==b[j])
    count++;
     }
     if(count==0)
     printf("%d ,",a[i]);
     count=0;
     }
   
    

    return 0;
}
