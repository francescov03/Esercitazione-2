#include "prodcons.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void * Produttore(void *);
void * Consumatore(void *);

int main() {

    /* TBD: Avviare i thread produttore e consumatore */

}

void * Produttore(void * p) {

    int tempo_attesa = 1000000;

    for(int i=0; i<12; i++) {

        Frame f;
        f[0][0] = rand() % 11;
        f[0][1] = rand() % 11;
        f[1][0] = rand() % 11;
        f[1][1] = rand() % 11;

        /* TBD: Chiamare il metodo "produci()" del monitor,
         *      incrementare "tempo_attesa" se il valore di ritorno è "1"
         */

        usleep(tempo_attesa);
    }

    pthread_exit(NULL);
}

void * Consumatore(void * p) {

    for(int i=0; i<12; i++) {

        Frame f;

        /* TBD: Chiamare il metodo "consuma()" del monitor */

        sleep(3);
    }

    pthread_exit(NULL);
}