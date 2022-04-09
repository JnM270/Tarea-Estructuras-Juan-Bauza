//Estructura Corredor. Juan Bauza

#include <iostream>
#include <conio.h>

struct Corredor{

char Nombre[100];
int Edad;
char Sexo[9];
char Club[100];
char Categoria [8];
	
} Corredor;

int main()
{

printf(" Inserte nombre del corredor: ");
scanf("%s" , Corredor.Nombre);

printf("Inserte edad del corredor: ");
scanf("%d" , &Corredor.Edad);

printf("Inserte el sexo del corredor: ");
scanf("%s" , Corredor.Sexo);

printf("Datos de los corredores: "); 
printf("\n");

printf("\nNombre del corredor: %s" , Corredor.Nombre);
printf("\nEdad del corredor: %d" , Corredor.Edad);
printf("\nSexo del corredor: %s" , Corredor.Sexo);

if(Corredor.Edad<=18){

printf("\nCategoria a la que pertenece: Juvenil");
}
else
if(Corredor.Edad<=40){

printf("\nCategoria a la que pertenece: Senior");	
}
else 
if(Corredor.Edad>40){

printf("\nCategoria a la que pertenece: Veterano");	
}

getch();
return 0;
}
