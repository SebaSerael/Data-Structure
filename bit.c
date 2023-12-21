#include<stdio.h>
void main()
{
int i,a[8],b[8],uni,inter,compl;
printf("Enter the bit string representation of A:");
for(i=0;i<8;i++)
scanf("%d",&a[i]);
printf("Enter the bit string representation of B:");
for(i=0;i<8;i++)
scanf("%d",&b[i]);
printf("A Union B=");
for(i=0;i<8;i++)
{
if(a[i]==1 || b[i]==1)
uni=1;
else
uni=0;
printf("%d",uni);
}
printf("\nA intersection B=");
for(i=0;i<8;i++)
{
if(a[i]==1 && b[i]==1)
inter=1;
else
inter=0;
printf("%d",inter);
}
printf("\nThe complement of A=");
for(i=0;i<8;i++)
{
if(a[i]==1)
compl=0;
else
compl=1;
printf("%d",compl);
}
}



