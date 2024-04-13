# Introducir un dato
dato = input("Introduce un dato: ")

# Determinar el tipo de dato ingresado
if dato.lower() == "true" or dato.lower() == "false":
    tipo_dato = "bool"
elif len(dato) == 1:
    tipo_dato = "char"
elif "." in dato:
    try:
        float(dato)
        tipo_dato = "float"
    except ValueError:
        tipo_dato = "string"
else:
    try:
        int(dato)
        tipo_dato = "int"
    except ValueError:
        tipo_dato = "string"

# Mostrar el tipo de dato
print(f"El tipo de dato ingresado es: {tipo_dato}")
