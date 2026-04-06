#include <stdio.h>
#include <stdlib.h>
int count;
void bubblesort(int a[10],int n)
{

     int i,j,temp;
     for(i=0;i<=n-2;i++)
     {
         for(j=0;j<=n-2-i;j++)
         {
             count=count+1;
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }

     }
}
 int main()
 {
     int a[10],n,i;
     printf("\n read array size:");
     scanf("%d",&n);
     printf("\n read array elements \n");
     for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        bubblesort(a,n);
        printf("\n sorted elements are \n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
        printf("\n total no of comparsion=%d",count);
        return 0;

 }
