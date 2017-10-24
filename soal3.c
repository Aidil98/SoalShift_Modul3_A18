#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
int main()
{
    system("clear");
    int l = 100;
    int k = 100;    
    int i=1;
    int a;
    while(1)
    {
        printf("%d\n",i); //supaya tahu waktunya
        fflush(stdout);
        printf("Lohan                   Kepiting\n");
        printf(" %d                     %d\n",l, k);
        printf("menu :\n1 kasih makan Lohan\n2 Kasih makan Kepiting\n");
        sleep(1);
        system("clear");
    	i++;
    	if(i%10==0) l=l-15;
    	if(i%20==0) k = k-10;
     }
}
