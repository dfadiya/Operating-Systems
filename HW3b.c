#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{

int count, i=1;
int a;
int col=0;

for(i=1;i<300000;i++)
{
count=0;
a=1;
while(a<=i)
{
if(i%a==0)
count++;
a++;
}
if (count==2)
{

col++;

}
}
return(0);
}


