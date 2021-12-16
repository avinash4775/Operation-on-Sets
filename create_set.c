#include <stdio.h>
 
int main()
{
   int arr[10],num=0,i=0,count=0,j=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);
      printf("Enter the elements in the array: ");
      for(i=0;i<num;i++)
       scanf("%d",&arr[i]);
 for(i=0;i<num;i++)
 {
     for(j=i+1;j<num;j++){
         if(arr[i]==arr[j])
          count++;
     }
     if(count==0)
     printf("%d,",arr[i]);
         count=0;
   }  
   
    return 0;
}
