//Estructura Empleado con el menor y mayor salario. Juan Bauza

#include <iostream>
#include <conio.h>

struct Direccion{
	
char Direccion[100];
char Ciudad [100];
char Provincia [100];
};

int Empleado, s_mayor=0, s_menor=0;
float vmax=0, vmin=50000;

struct Empleado{
	
char Nombre[100];
double Salario;
struct Direccion Ubicacion;
} Empleados[2300];

int main()
{
	
printf("Inserte la cantidad de empleados: ");
scanf("%i",&Empleado);
	
for(int m=1; m<=Empleado; m++){
	
printf("Inserte nombre del empleado %i: " , m);
scanf("%s" , Empleados[m].Nombre);
		
printf("Inserte salario del empleado %i: " , m);
scanf("%lf" , &Empleados[m].Salario);
	
printf("Inserte provincia del empleado %i: " , m);
scanf("%s" , &Empleados[m].Ubicacion.Provincia);

printf("Inserte ciudad del empleado %i: " , m);
scanf("%s" , &Empleados[m].Ubicacion.Ciudad);
		
printf("Inserte direccion del empleado %i: " , m);
scanf("%s" , &Empleados[m].Ubicacion.Direccion);

if(Empleados[m].Salario>vmax){
vmax= Empleados[m].Salario;
s_mayor= m;

}
		
if(Empleados[m].Salario<vmin){
vmin= Empleados[m].Salario;
s_menor= m;
	
}
}
printf("\n");

printf("Empleado con el mayor salario:\n");
	
printf("Nombre: %s " , Empleados[s_mayor].Nombre);
	
printf("Salario: %2.lf " , Empleados[s_mayor].Salario);
	
printf("Provincia: %s " , Empleados[s_mayor].Ubicacion.Provincia);
	
printf("Ciudad: %s " , Empleados[s_mayor].Ubicacion.Ciudad);

printf("Direccion: %s " , Empleados[s_mayor].Ubicacion.Direccion);
	
printf("Salario: %2.lf " , vmax);

printf("\n");
		
printf("Empleado con el menor salario:\n");
	
printf("Nombre: %s " , Empleados[s_menor].Nombre);
	
printf("Salario: %2.lf " , Empleados[s_menor].Salario);
	
printf("Provincia: %s " , Empleados[s_menor].Ubicacion.Provincia);
	
printf("Ciudad: %s " , Empleados[s_menor].Ubicacion.Ciudad);
	
printf("Direccion: %s " , Empleados[s_menor].Ubicacion.Direccion);
	
printf("%2.lf " , vmin);
	
getch();
return 0;
}
