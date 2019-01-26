/* Tabella di simboli che simula un dizionario
   la correlazione si basa su
   parola -> frase di risposta
   ho una priorita' in base a quale parola uso 

*/

#ifndef ST_H
#define ST_H 787

#include <stdio.h>



ST STinit(int maxN);
void STfree(ST st);
void STinsert(ST st, char *q,char *a);
char* STsearch(ST st, char *q);

#endif
