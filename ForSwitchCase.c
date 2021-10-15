#include <stdio.h>

int main(){
int i;
int t;
for (i=100,t=0 ; i>0,t<100 ; i--,t++){

    printf("%d %d \n",i,t);
}
char mese;
int giorni;

printf("seleziona  1,2,3 \n");
scanf("%c",&mese);

switch ( mese ) {
    case '1': giorni=31;
    break;
    case '2': giorni=28;
    break;
    case '3': giorni=31;
    break; }

printf("%d",giorni);
return 0;
}
