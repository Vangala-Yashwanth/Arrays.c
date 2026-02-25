#include<stdio.h>
int main()
{ 
int size;
printf ("enter the size of array \n");
scanf("%d",&size);
int a[size];
for(int i=0;i<=(size-1);i++)
{
printf ("enter the %d value :\n",i++);
scanf("%d",&a[i]);
int area=0;
int amount =0;
int h1,h2;
for (int i=0;i<size-1;i++)
{
for (int j=i+1;j<=size-1;j++)
{
if (a[i]<a[j])
{
amount =a[i]*(i-1);
}
else 
{
amount =a[j]*(j-1);
}
if(amount>area)
{
h1=a[i];
h2=a[j];
area =amount;
}
}
}
printf("h1=%d \t h2=%d\t area=%d\n",h1,h2,area);
return 0;
}
}

    