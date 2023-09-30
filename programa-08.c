#include <stdio.h>
int main () {
	//Seccion de variables----------------------------------------------->
	int deporte;
	//Seccion de ingreso de datos---------------------------------------->
	printf("\n\tDeportes");
	printf("\n\n\t1 = Futbol");
	printf("\n\t2 = Futbol americano");
	printf("\n\t3 = Basquetbol");
	printf("\n\t4 = Beisbol");
	printf("\n\t5 = Voleibol");
	printf("\n\n\tDe los siguientes deportes selecciona tu favorito: ");
	scanf("%i", &deporte);

	printf("\n\t");

	//Seccion de switch--------------------------------------------------->	
	switch(deporte){
		case 1:
			printf("El equipamiento necesario para el futbol es:");
			printf("\n\t-Camiseta");
			printf("\n\t-Shorts");
			printf("\n\t-Calcetines");
			printf("\n\t-Espinilleras");
			printf("\n\t-Botines o tacos");
			break;
		case 2:
			printf("El equipamiento necesario para el futbol americano es:");
			printf("\n\t-Casco");
			printf("\n\t-Pantalones de perneras acolchadas");
			printf("\n\t-Hombreras");
			printf("\n\t-Botines o tacos");
			printf("\n\t-Protector bucal");
			printf("\n\t-Suspensorio atletico con coquilla");
			break;
		case 3:
			printf("El equipamiento necesario para el basquetbol es:");
			printf("\n\t-Camiseta sin mangas");
			printf("\n\t-Pantalon corto o bermuda");
			printf("\n\t-Calcetines cortos");
			printf("\n\t-Zapatillas con suela dura y que cubran el tobillo");
			break;
		case 4:
			printf("El equipamiento necesario para el beisbol es:");
			printf("\n\t-Chaqueta (Remera)");
			printf("\n\t-Pantalones");
			printf("\n\t-Zapatillas");
			printf("\n\t-Medias");
			printf("\n\t-Gorra");
			printf("\n\t-Dependiendo la pisicion se usa casco");
			printf("\n\t-Guante");
			break;
		case 5:
			printf("El equipamiento necesario para el voleibol es:");
			printf("\n\t-Pantalones cortos de voleibol");
			printf("\n\t-Camisteta de voleibol");
			printf("\n\t-Zapatillas para voleibol");
			printf("\n\t-Rodilleras");
			printf("\n\t-Tobilleras");
			printf("\n\t-Coderas");
			break;
		default:
			printf("Lo sentimos pero el numero elegido no corresponde a una opcion");
			break;
	}
}
