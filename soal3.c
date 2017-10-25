#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

pthread_t thread_display, thread_makan, thread_selesai;
int l = 100;
int k = 100;    
int i=1;
int a;
void *display () {
    printf("Lohan                   Kepiting\n");
    printf(" %d                     %d\n",l, k);
    printf("menu :\n1 kasih makan Lohan\n2 Kasih makan Kepiting\n");
}
void *makan_bang() {
    printf ("beri makan :\n");
    scanf ("%d", &a);
    if (a == 1) l=l+10;    
    else if (a == 2)k=k+10;    
    else printf ("Makan bang\n");
}

int main()
{
    
    system("clear");
    while(1)
    {
        
        printf("%d\n",i); //supaya tahu waktunya
        fflush(stdout);
        sleep(1);
        system("clear");
    	i++;
    	if(i%10==0) l=l-15;
    	if(i%20==0) k = k-10;
        pthread_create(&(thread_display), NULL, &display, NULL);
        pthread_create(&(thread_makan), NULL, &makan_bang, NULL);
        if (l <= 0 || l > 100 || k <= 0 || k > 100) {
            printf ("Game Over\n");
            break;
        }
     }
}
