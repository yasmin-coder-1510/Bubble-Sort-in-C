#include<stdio.h>
int main()
{
 int array[5];
 int temp;
 printf("Enter the members of array :");

 for(int i = 0;i<5;i++)
 {
   scanf("%d",&array[i]);  //This loop will take members of array from user
 }

printf(" Intial array[5] : ");

for(int i = 0;i<5;i++)
 {
   printf("%d ",array[i]);  //This loop will print the members of array
 }
printf("\n");

for(int i=0;i<5-1;i++)
{
    for(int j=0; j<5-1-i;j++)
        {
         if(array[j]>array[j+1])
          {
             temp = array[j];
             array[j] =array[j+1];
             array[j+1] = temp;
          }

        }

}

printf("Sorted array[5] : ");

for(int i = 0; i<5;i++)
{
   printf("%d ",array[i]);
}

 return 0;
}
