# Solicitar al usuario que ingrese un número
numero = float(input("Ingresa un número: "))

# Separar la parte entera de la decimal
parte_entera = int(numero)
parte_decimal =round(numero - parte_entera, 4)
# Imprimir los resultados
print("Parte entera:", parte_entera)
print("Parte decimal:", parte_decimal)
