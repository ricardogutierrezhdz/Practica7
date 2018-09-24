#include <stdio.h>
#include <stdlib.h>


int main ()

{

int segundos, horas, minutos;
char op;

system("clear");

printf("Recibe una cantidad en segundos y muestra su equivalente en el formato: hrs: min: seg\n");

printf("Dame los segundos\n");
scanf("%i", &segundos);

//Obtener horas, si 3600 segundos=hora

horas=(segundos/3600);
segundos=segundos%3600;
printf("\nlas horas son: %i",horas);
printf("\nlos segundos restantes son: %i",segundos); 

//Obtener minutos, si 60 segundos=minuto

minutos=(segundos/60);
printf("\nlos minutos son: %i", minutos);
segundos=segundos%60;
printf("\nlos segundos restantes son: %i\n\n", segundos);

printf ("Son las: (%i)hrs: (%i)min: (%i)seg\n", horas, minutos, segundos);
return 0;
}
