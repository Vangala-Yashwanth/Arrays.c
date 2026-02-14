#include<stdio.h>
int main()
{
int size;
printf(" enter the size of the array \n");
scanf("%d",&size);
int a[size];
for (int i=0;i<=(size-1);i++)
{
printf("enter the %d value :\n",i);
scanf("%d",&a[i]);
}
int max=a[0];
int index=0;
for(int i=0;i<=size-1;i++)
{
if(a[i]>max)
{
index=i;
}
}
for(int i=0;i<index;i++)
{
printf("%d\n",a[i]);
}
return 0;
}