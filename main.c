//LIBRERIAS UTILIZADAS
#include <stdio.h>


//ESTRUCTURAS NECESARIAS

//STRUCT NODO (CORTESIA DE IRENE ZUCCAR)
struct NodoAVL {
int info;
int altura;
    struct NodoAVL *izq;
    struct NodoAVL *der;
};

typedef struct NodoAVL tNodoAVL;
typedef tNodoAVL *AVL;

AVL IniciaAVL(){
    AVL aux = NULL;
    return aux;
}

//FUNCIONES SOBRE LAS ESTRUCTURAS
AVL CreaNodo(int val){
    AVL aux;
    aux = (AB)malloc(sizeof(tNodo));
    aux->info = val;
    aux->izq = NULL;
    aux->der = NULL;
    aux->altura = 1;
    return aux;
}

AVL Insertar(AVL A, int x)
{
    if (Vacio?(A)){
        A = CreaNodo(x);
    }
    else
    {
        if (A->info > valor){
            A->izq = Insertar(A->izq, x);
        }
        else{
            A->der = Insertar(A->der, x);
        }
        A = ActualizarAltura(A);
        A = Balancear(A);
    }
    return A;
}

AVL Balancear(AVL A)
{
    int condicion, dif;
    if (Vacio?(A))
    {
        condicion = DiferenciaAlturaHijos(A);
        if (condicion == 2)
        {
            dif = DiferenciaAlturaHijos(A->izq);
            if (dif == 1 || dif == 0){
                return RotarSimpleDer(A);   //Caso 2
            }
            else{
                return RotarDobleIzquierdaDerecha(A);   //Caso 4
            }
        }
        if (condicion == -2)
        {
            dif = DiferenciaAlturaHijos(A->der);

            if (dif == -1 || dif == 0) {
                return RotarSimpleIzq(A);   //Caso 3
            }
            else{
                return RotarDobleDerechaIzquierda(A);   //Caso 5
            }
        }
    }
    return A;
}







//FUNCIONES
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
    AVL a = IniciaAVL();
    //printf(a.altura);
	//menu();
}
