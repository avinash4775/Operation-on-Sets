#include <stdio.h>
int main()
{
int num1,num2,i=0,j=0,k=0;
printf("Enter the no. of elements of array: ");
scanf("%d",&num1);
int arr1[20];
printf("Enter the elements of the array:");
for(i=0;i<num1;i++){
    scanf("%d",&arr1[i]);
}
printf("Enter the number of elements in 2nd array :");
scanf("%d",&num2);
int arr2[20];
printf("Enter the elements of the 2nd array:");
for(i=0;i<num2;i++){
    scanf("%d",&arr2[i]);
}
int arr3[40],n=0;
n=num1+num2;
for(i=0;i<num1;i++){
    arr3[i]=arr1[i];
}
for(i=0;i<num2;i++){
    arr3[num1+i]=arr2[i];
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;){
        if(arr3[i]==arr3[j]){
            for(k=j;k<n;k++){
                arr3[k]=arr3[k+1];
                n--;
            }
        }
        else
        j++;
    }
}
for(i=0;i<n;i++){
    printf("%d,",arr3[i]);
}
    
    return 0;
}
