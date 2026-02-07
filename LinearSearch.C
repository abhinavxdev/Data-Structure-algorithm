#include <stdio.h>
#include <conio.h>
void main()
{
int a[20],n,i,key;
clrscr();
printf("Enter no of ELements:");
scanf("%d",&n);
printf("Enter Elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter Elements to Search");
scanf("%d",&key);
for(i=0;i<n && a[i]!=key;i++);
if(i<n)
printf("Element found at position %d",i+1);
else 
printf("Element not found ");
getch();
}
