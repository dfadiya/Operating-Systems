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
int i,x,j,y;

for (y =1; y <= 4; y++)

printf("\n" "I/O Bound Test Program\n\n");

f1=fopen("file1", "w");
f2=fopen("file2", "w");
f3=fopen("file3", "w");

fprintf(f1,"\nThis is a Scheduler Benchmarking Sample 1)"); /*Write Program Header*/
fprintf(f1, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n"); 

fprintf(f2,"\nThis is a Scheduler Benchmarking Sample 2)"); /*Write Program Header*/
fprintf(f2, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n"); 

fprintf(f3,"\nThis is a Scheduler Benchmarking Sample 3)"); /*Write Program Header*/
fprintf(f3, "\nThis code will generate Prime Numbers btw 1 and 1000000\n\n");

for (i = 1; i <= 20000 ; i++)
{
	fprintf(f1, "i = %d\n", i);
}
for (x = 1; x <= 10000 ; x++)
{
	fprintf(f2, "x = %d\n", x);
}
for (j = 1; j <= 5000 ; j++)
{
	fprintf(f3, "j = %d\n", j);
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

