#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

pthread_t tred[512];

int main(int argv, char *argc[]) 
{
	FILE *fp;

	fp=fopen("/home/parijal/Novel/Novel.txt","r"); 

	int line_num = 1;
	int find_result = 0;
	int find_result2 = 0;
	char tred[512];
	char s2[1111];
	char s3[2222]; 

	scanf("%s",s2);
	scanf("%s",s3);

	if(fp==NULL) 
	{
		printf("Gaada Filenya");
	}

	while(fgets(tred, line_num, fp)!=NULL) 
	{
		if((strstr(tred, s2))!=NULL) 
		{
			find_result++;
		}
		if((strstr(tred, s3))!=NULL)
		{
			find_result2++;
		}
		line_num++;
	}

	if(find_result>0 || find_result2>0) 
	{
		printf("%s = %d \n", s2, find_result);
		printf("%s = %d \n", s3, find_result2);
	}
	
	else
	{
		printf("duaduanya gaada \n");
	}
	
	if(fp) 
	{
		fclose(fp);
	}
	return 0;
}

