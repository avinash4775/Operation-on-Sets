#include <stdio.h>

int main()
{int a[20],b[20],num1,num2,i,j,count=0;
printf("Enter the no elements in the array1: ");
scanf("%d",&num1);
printf("Enter the elements of the array1: ");
for(i=0;i<num1;i++){
scanf("%d",&a[i]);    
}
printf("Enter the no elements in the array2: ");
scanf("%d",&num2);
printf("Enter the elements in the array2: ");
for(i=0;i<num2;i++)
scanf("%d",&b[i]);
for(i=0;i<num1;i++)
{
    for(j=0;j<num2;j++)
    {
        if(a[i]==b[j])
        count++;
    }
    if(count==0)
    printf("%d, ",a[i]);
    count=0;
}
for(i=0;i<num2;i++)
{
    for(j=0;j<num1;j++)
    {
        if(b[i]==a[j])
        count++;
    }
    if(count==0)
    printf("%d, ",b[i]);
    count=0;
}

    return 0;
}
