//Estructura de 3 Alumnos. Juan Bauza

#include <iostream>
#include <conio.h>

struct Alumno{
char Nombre[50];
int Edad;
int Promedio;

} Alumno[3];

int main()
{

int m;
for(m=1; m<4; m++){
		
printf("Inserte nombre del alumno: ");
scanf("%s",&Alumno[m].Nombre);
	
printf("Inserte edad del alumno: ");
scanf("%i",&Alumno[m].Edad);
	
printf("Inserte promedio del alumno: ");
scanf("%i",&Alumno[m].Promedio);
	
}	
if(Alumno[1].Promedio>Alumno[2].Promedio && Alumno[1].Promedio>Alumno[3].Promedio){
printf("/nLos datos del alumno con mayor promedio son los siguientes: /n%s /n%i /n%i " , Alumno[1].Nombre, Alumno[1].Edad, Alumno[1].Promedio);
	
}
else 
	
if(Alumno[2].Promedio>Alumno[1].Promedio && Alumno[2].Promedio>Alumno[3].Promedio){
printf("/nLos datos del alumno con mayor promedio son los siguientes: /n%s /n%i /n%i " , Alumno[2].Nombre, Alumno[2].Edad, Alumno[2].Promedio);
	
}
else 
	
if(Alumno[3].Promedio>Alumno[1].Promedio && Alumno[3].Promedio>Alumno[2].Promedio){
printf("\nLos datos del alumno con mayor promedio son los siguientes: /n%s /n%i /n%i " , Alumno[3].Nombre, Alumno[3].Edad, Alumno[3].Promedio);
}	
getch();
return 0;
}
