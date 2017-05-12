#include <stdio.h>


int despliegue_menu(int opcion)
{
	printf("MENU \n\n");
	printf("1. Instertar un elemento.\n");
	printf("2. Eliminar un elemento.\n");
	printf("3. Imprimir arbol.\n");
	printf("4. Calcular altura.\n");
	printf("5. Salir.\n");
	scanf("%d", &opcion);
	return opcion;
}




void menu()
{
	int opcion;
	while (opcion!=5)
	{
		opcion=despliegue_menu(opcion);
		if(opcion==1)
		{
			printf("insertar \n");
		}
		else if(opcion==2){
			printf("eliminar elemento\n");
		}
		else if (opcion==3)
		{
			printf("imprimir arbol\n");
		}
		else if (opcion==4)
		{
			printf("calcular altura \n");
		}
		else if (opcion==5)
		{
			break;
		}
		else{
			printf("Opcion Incorrecta\n");
		}

	}
	printf("Hasta Luego !!\n");

}






void main()
{
	menu();
}