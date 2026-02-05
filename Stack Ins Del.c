
#include <stdio.h>
#include <conio.h>
void main(){
int a[20],n,i,ch,pos,ele;
clrscr();
printf("Enter Number of Elements:");
scanf("%d",&n);
printf("Enter Elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("Choose \n1.Insert \n2.Delete \n Choose");
scanf("%d",&ch);

if(ch==1)
{
printf("Enter Position and elements:");
scanf("%d%d",&pos,&ele);
for(i=n;i>=pos;i--)
  a[i+1]=a[i];
  a[pos-1]=ele;
n++;
}
else if(ch==2)
{
printf("Enter position:");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
  a[i]=a[i+1];
n--;
}
printf("\nArray Element:\n");
for(i=0;i<n;i++)
  printf("%d",&a[i]);
getch();
}
