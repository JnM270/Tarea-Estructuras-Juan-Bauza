//Estructura de Atletas. Juan Bauza

#include <iostream>
#include <conio.h>

int atleta,valor_mayor=0, valor_menor=0, vmax=0, vmin=50000;

struct Atletas{
char Nombre[100];
char Pais [100];
int Medallas;

} Atletas[50];

int main(){
	
printf("Numero de atletas: ");
scanf("%i" , &atleta);
	
for(int m=1; m<=atleta; m++){
printf("\n");
	
printf("Nombre del atleta: ");
scanf("%s" , Atletas[m].Nombre);
	
printf("Pais del atleta: ");
scanf("%s" , Atletas[m].Pais);
	
printf("Cantidad de medallas: ");
scanf("%i" , &Atletas[m].Medallas);

printf("\n");
	
if(Atletas[m].Medallas>vmax){
vmax= Atletas[m].Medallas;
valor_mayor= m;
}
	
if(Atletas[m].Medallas<vmin){
vmin= Atletas[m].Medallas;

valor_menor= m;

}
}

printf("El atleta con mayor cantidad de medallas es: /n");
printf("Nombre y Pais: %s, %s \n" , Atletas[valor_mayor].Nombre, Atletas[valor_mayor].Pais);
	
getch();
return 0;
}
