#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
int main()
{
    pthread_t thread_makan;    
    system("clear");
    int l = 100;
    int k = 100;    
    int i=1;
    int a;
    void *makan_bang() {
        printf ("beri makan :\n");
        scanf ("%d", &a);
        if (a == 2) {
            k=k+10;
            l=l+0;
        }
        if (a == 1) {
        l=l+10;
        k=k+0;
        }
        else printf ("Makan bang\n");
    }
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
        pthread_create(&(thread_makan), NULL, &makan_bang, NULL);
     }
}
