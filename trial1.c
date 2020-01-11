#include <stdio.h>
#include<stdlib.h>

int main()
{
  int *p;
  int n,i;
  printf("enter total number of childrens\n");
  scanf("%d",&n);
  p=(int*)calloc(n,sizeof(int));

  if(p==NULL)
    {
       printf("exiting the program\n");
       exit(1);
    }

for(i=0;i<n;i++)
   {
        printf("enter the %d element\n",i+1);
        scanf("%d",p+i);
   }
printf("first %d elements are",n);

for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }

printf("total elemnts are %d and are as follows\n",n+4);

for(i=0;i<n;i++)
    {
        printf("%d element is %d \n",i+1,*(p+i));
    }
    free(p);
    return 0;
}
