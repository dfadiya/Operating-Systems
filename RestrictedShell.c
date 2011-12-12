#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<signal.h>
#include<sys/wait.h>
#include<time.h>


int main(int argc,char *argv[])
{
int response;
FILE *fp;
char line[256];
response_pid pid1;
response_pid pid2;

	if(strcmp(argv[1],"list")==0)
	{
		fp=fopen("pidlist","r");
		char line[256];
		while(fgets(line,sizeof line,fp)!=NULL)
		{
			printf("%s\n",line);
		}
		}
	else if(strcmp(argv[1],"sleep1")==0)
	{	
		pid1=fork();
		if(pid1==0)
		{
      		printf("child process created and sleeping",getpid(pid1),n);
		printf(fp,"%d\n",getpid(pid1));
		fclose(fp);
		}
	}
	else if(strcmp(argv[1],"kill1")==0)
	{
		response_pid y=atoi(argv[2]);
		int response=kill(y,SIGINT);
		printf("%d",response);
		
	}
	else if(strcmp(argv[1],"time1")==0)
	{
	
		response_pid x=atoi(argv[2]);
		char command[256];
		FILE *fp;
		char *tp;
		printf(command,"ps |grep %d",x);
		fp=popen(command,"r");
		printf("%s",command);		
		char line[256];
		while(fgets(line,sizeof line,fp))
		{
			tp=strtok(line, "\t");
		}
		while(tp !=NULL)
		{
			tp=strtok(NULL, "\t");
			printf("Time %s\n",tp);
			
		}
	}
	return 0;
}



void update(FILE *fp,char *line,char *pid2,response_pid pid1)
{
	fp=fopen("pidlist","r");
	char pline[256];
	int count=0;
	
	while(fgets(line,sizeof line,fp))
	{
		scanf(line,"%s",pid2);
		if(pid1==0)
		{
			printf(pline,"%d",getpid(pid1));
		}
		else
		{
			printf(pline,"%d",pid1);
		}
		
	}


fclose(fp);
}
