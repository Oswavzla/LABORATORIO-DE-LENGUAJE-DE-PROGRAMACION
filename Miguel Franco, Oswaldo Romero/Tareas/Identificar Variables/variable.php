<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Determinar Tipo de Dato</title>
</head>
<body>
    <h1>Determinar Tipo de Dato</h1>
    <form action="" method="post">
        <label for="txtDato">Ingrese un dato:</label><br>
        <input type="text" id="txtDato" name="txtDato"><br><br>
        <input type="submit" value="Determinar Tipo">
    </form>

    <?php
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        $dato = $_POST['txtDato'];

        if ($dato === 'true' || $dato === 'false') {
            $tipo_dato = 'bool';
        } elseif (strlen($dato) === 1) {
            $tipo_dato = 'char';
        } elseif (is_numeric($dato)) {
            if (strpos($dato, '.') !== false) {
                $tipo_dato = 'float';
            } else {
                $tipo_dato = 'int';
            }
        } else {
            $tipo_dato = 'string';
        }

        echo "<p>El tipo de dato ingresado es: " . $tipo_dato . "</p>";
    }
    ?>
</body>
</html>
