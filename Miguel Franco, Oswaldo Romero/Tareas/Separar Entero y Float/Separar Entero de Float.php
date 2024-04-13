<?php
if(isset($_POST['numero'])){
    $numero = $_POST['numero'];
    $parte_entera = (int)$numero;
    $parte_decimal = round($numero - $parte_entera, 4);
    echo "Parte entera: " . $parte_entera . "<br>";
    echo "Parte decimal (limitado a 4 decimales): " . $parte_decimal;
}
?>

**Formulario HTML:**
```html
<!DOCTYPE html>
<html>
<head>
    <title>Separar Parte Entera y Decimal</title>
</head>
<body>
    <h2>Separar Parte Entera y Decimal de un Número</h2>
    <form method="post" action="">
        <label for="numero">Ingresa un número:</label>
        <input type="text" name="numero" id="numero" required>
        <input type="submit" value="Calcular">
    </form>
</body>
</html>
