
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

main()

{

FILE *f1;
FILE *f2;
FILE *f3;
FILE *fpipe;
char line[512];
int count;
int i=1;
int a;
int col=0;
int y;

for (y=0;y<=2;y++)

printf("\n" "Writing and reading multiple files\n\n");

f1=fopen("file1", "w");
f2=fopen("file2", "w");
f3=fopen("file3", "w");

fprintf(f1,"\nThis is a Scheduler Benchmarking Sample 1)"); /*Write Program Header*/
fprintf(f1, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n"); 

fprintf(f2,"\nThis is a Scheduler Benchmarking Sample 2)"); /*Write Program Header*/
fprintf(f2, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n"); 

fprintf(f3,"\nThis is a Scheduler Benchmarking Sample 3)"); /*Write Program Header*/
fprintf(f3, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n");

for (i = 1; i <= 100001 ; i++)
{
count=0;
a=1;
while (a<=i)
{
If (i%a==0)
count++;
a++;
}
If (count==2)

{
	fprintf(f1, " %d\t", i);
fprintf(f2, " %d\t", i);
fprintf(f3, " %d\t", i);
col++;
if (col%10==0)
fprintf(f1,”\n”);
if(col%10==0)
{
fprintf(f2,”\n”);
}
else if(col%10==0)
{
fprintf(f3,”\n”);
}
]
}


fclose(f1);
fclose(f2);
fclose(f3);

f1=fopen("file1", "r");
f2=fopen("file2", "r");
f3=fopen("file3", "r");

while(fgets(line, sizeof(line),f1))
{
       printf("%s\n", line);
while(fgets(line, sizeof(line),f2))
{
  printf("%s\n", line);
}
while(fgets(line, sizeof(line),f3))
{
  printf("%s\n", line);
}
}
}
return 0;
}

