#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>


/* Struct to store tokenized data*/
struct insertNodes
{
	char *storecmd;
	char *storepid;
	char *storeppid;
	struct insertNodes *processtree;
};

struct insertNodes * insert(struct insertNodes **root, char *cmd, char *ppid,
char *pid)
{
	while(*processroot)
	{
		printf("storepid %s, ppid %s, pid %s ,compare %d , storecmd %s, cmd %s \n",(*processroot)->storepid,ppid,pid,strcmp((*processroot)->storepid,ppid),(*root)->storecmd,cmd);
		if(strcmp((*processroot)->storepid,ppid)==0)
		{
			printf("equals\n");
			*processroot=malloc(1000);
			(*processroot)->processtree=0;
			(*processroot)->storecmd=strdup(cmd);
			return(*processroot);
		}
		if(strcmp((*processroot)->storepid,pid)!=0)
		{
			processroot=&((*processroot)->processtree);
		}
	}
		printf("new\n");
		*processroot=malloc(1000);
		(*processroot)->processstree=0;
		(*processroot)->storecmd=strdup(cmd);
		return(*processroot);
}
int i=0;
void print(struct insertNodes *processroot)
{
if(processroot->processtree)
{
	printf("\t %d. %s, %s, %s\n",i,root->storecmd,root->storepid,processroot->storeppid);
	i=i+1;
	print(processroot->processtree);
}
i=i+1;
}
void print1(struct insertNodes *processroot)
{
	if(strcmp(root->storepid,processroot->processtree->storeppid)==0)
	{
	printf("Equals : %s, %s, %s\n",processroot->storecmd,processroot->storepid,processroot->storeppid);
	print1(processroot->processtree);
	}
	if(strcmp(processroot->storepid,processroot->processtree->storeppid)<0)
        {
        printf("Not Equals : %s, %s, %s\n",processroot->storecmd,processroot->storepid,processroot->storeppid);
        
        }
	return;
	print1(root->stree);
}
int main()
{
	FILE *fp;
	char line[256];
	fp=popen("ps -axl","r");/* Print process and output to file*/
	char cmd[256];
	char pid[256];
	char ppid[256];

	struct insertNodes *processtree;
	while(fgets(line,sizeof line,fp))
	{
	sscanf(line,"%*s %*s %*s %*s %*s %*s %s %s %*s %*s %s",pid,ppid,cmd);
	if(strcmp(pid,"PID")!=0)
	{
		insert(&processtree,cmd,ppid,pid);
	}
	}
	/*Print tree to screen*/
	printf("processtree: %s\n", (tree)->stree->ncmd);
	print(processtree);
return(0);
}

