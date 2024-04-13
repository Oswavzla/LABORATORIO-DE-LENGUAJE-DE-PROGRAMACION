from os import system

while True:
    print("Bienvenido, seleccione una opción...")
    print("1-Opción 1")
    print("2-Opción 2")
    print("3-Opción 3")
    print("4-Salir")
    
    opc_ppl = int(input())
    system("cls")
    if opc_ppl == 1:
        while True:
            print("Ha elegido la Opcion 1. Seleccione una opción...")
            print("1-Opción 1.1")
            print("2-Opción 1.2")
            print("3-Opción 1.3")
            print("4-Salir de Opción 1")
            
            opc1 = int(input())
            
            system ("cls")

            if opc1 == 1 or opc1 == 2 or opc1 == 3:
                print("Hola...")
                input("Presione enter para continuar")
                system("cls")

            elif opc1 == 4:
                print("Adiós...")
                input("Presione enter para continuar")
                system("cls")
                break
            else:
                print("Opción inválida...")
                input("Presione enter para continuar")
                system("cls")
            
    elif opc_ppl == 2:
        while True:
            print("Ha elegido la Opcion 2. Seleccione una opción...")
            print("1-Opción 2.1")
            print("2-Opción 2.2")
            print("3-Opción 2.3")
            print("4-Salir de Opción 2")
            
            opc2 = int(input())
            system("cls")

            if opc2 == 1 or opc2 == 2 or opc2 == 3:
                print("Hola...")
                input("Presione enter para continuar")
                system("cls")
            elif opc2 == 4:
                print("Adiós...")
                input("Presione enter para continuar")
                system("cls")
                break
            else:
                print("Opción inválida...")
                input("Presione enter para continuar")
                system("cls")
            

    elif opc_ppl == 3:
        while True:
            print("Ha elegido la Opcion 3. Seleccione una opción...")
            print("1-Opción 3.1")
            print("2-Opción 3.2")
            print("3-Opción 3.3")
            print("4-Salir de Opción 3")
            
            opc3 = int(input())
            system("cls")

            if opc3 == 1 or opc3 == 2 or opc3 == 3:
                print("Hola...")
                input("Presione enter para continuar")
                system("cls")
            elif opc3 == 4:
                print("Adiós...")
                input("Presione enter para continuar")
                system("cls")
                break
            else:
                print("Opción inválida...")
                input("Presione enter para continuar")
                system("cls")
            
    elif opc_ppl == 4:
        print("Adiós...")
        input("Presione enter para continuar")
        system("cls")
        break
    
    else:
        print("Error. Opción inválida...")
        input("Presione enter para continuar")
