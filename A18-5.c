#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int main() 
{
	FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
	
	if((fp = fopen("D:\Projects\Programming Projects\Novel.txt", "r")) == NULL) 
	{
	return(-1);
	}

	char s2[100] = "ifah";
	char s3[100] = "fina";
	
	while(fgets(temp, 512, fp) != NULL) 
	{
		if((strstr(temp, "fina")) != NULL) {
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result>0) 
	{
		printf("%s = %d \n", s2, find_result);
	}
	
	else 
	{
		printf("'%s' does not appear in the sentence.\n", s2);
	}
	
	
	if(fp) 
	{
		fclose(fp);
	}
	
	return 0;
}

