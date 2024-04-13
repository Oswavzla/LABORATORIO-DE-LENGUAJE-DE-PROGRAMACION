#include <stdio.h>
#include <stdlib.h>

main(){
    int opc_ppl;//Opcion para menu principal
    int opc1, opc2, opc3; //Opciones para menus secundarios
    do{
        printf("Bienvenido, seleccione una opcion...\n");
        printf("1-Opcion 1\n");
        printf("2-Opcion 2\n");
        printf("3-Opcion 3\n");
        printf("4-Salir\n");

        scanf("%d",&opc_ppl);

        switch (opc_ppl)
        {
            case 1:
                do{

                printf("Ha elegido la Opcion 1. Seleccione una Opcion...\n");
                printf("1-Opcion 1.1\n");
                printf("2-Opcion 1.2\n");
                printf("3-Opcion 1.3\n");
                printf("4-Salir de Opcion 1\n");

                scanf("%d",&opc1);
                switch (opc1)
                {
                case 1:

                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 2:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 3:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break; 

                case 4:
                
                    printf("Adios...\n");
                    system("pause");
                    system("cls");

                    break;     

                default:
                    printf("Opcion Invalida...\n");
                    system("pause");
                    system("cls");

                    break;
                }

                }
                while(opc1!=4);


                break;
            
            case 2:
                do{

                printf("Ha elegido la Opcion 2. Seleccione una Opcion...\n");
                printf("1-Opcion 2.1\n");
                printf("2-Opcion 2.2\n");
                printf("3-Opcion 2.3\n");
                printf("4-Salir de Opcion 2\n");

                scanf("%d",&opc2);
                switch (opc2)
                {
                case 1:

                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 2:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 3:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break; 

                case 4:
                
                    printf("Adios...\n");
                    system("pause");
                    system("cls");

                    break;     

                default:
                    printf("Opcion Invalida...\n"); 
                    system("pause");
                    system("cls");
                    
                    break;
                }

                }
                while(opc2!=4);
                break;

            case 3:
                
                do{

                printf("Ha elegido la Opcion 3. Seleccione una Opcion...\n");
                printf("1-Opcion 3.1\n");
                printf("2-Opcion 3.2\n");
                printf("3-Opcion 3.3\n");
                printf("4-Salir de Opcion 3\n");

                scanf("%d",&opc3);
                switch (opc3)
                {
                case 1:

                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 2:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break;

                case 3:
                
                    printf("Hola...\n");
                    system("pause");
                    system("cls");

                    break; 

                case 4:
                
                    printf("Adios...\n");
                    system("pause");
                    system("cls");

                    break;     

                default:
                    printf("Opcion Invalida...\n");
                    system("pause");
                    system("cls");
                    
                    break;
                }

                }
                while(opc3!=4);
                break;

            case 4:

                printf("Adios...\n");
                system("pause");
                system("cls");

                break;

            default:
            
                printf("Error. Opcion Invalida...");
                system("pause");
                system("cls");

                break;
        }


    }while(opc_ppl!=4);

}