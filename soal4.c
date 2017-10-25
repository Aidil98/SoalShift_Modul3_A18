#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
//#include<conio.h>
/*******************************************************
*compile dengan cara gcc -pthread -o [output] input.c *
*******************************************************/

pthread_t tid[100];//inisialisasi array untuk menampung thread dalam kasusu ini ada 2 thread

int length, t, i=0;//inisialisasi jumlah looping
int temp=0;
int n;
void *count(void *arg)
{
    unsigned long long factorial = 1;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    printf("%lld\n", factorial);
    return NULL;
}
int main(void)
{
	int err;
	while(1)
    	{
	scanf("%d", &n);
	//if(n=='\0')return 0;
        err=pthread_create(&(tid[i]),NULL,&count,NULL);//membuat thread
        //if(err!=0) printf("\n can't create thread : [%s]",strerror(err));
        //else printf("\n create thread success");
        i++;
 	}
	for(int j=0; j<=i; j++)pthread_join(tid[j],NULL);
    return 0;
}
