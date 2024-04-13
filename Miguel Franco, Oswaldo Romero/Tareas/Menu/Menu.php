<!DOCTYPE html>
<html>
<head>
    <title>Menu</title>
</head>
<body>

<h2>Bienvenido, seleccione una opción...</h2>
<form method="post">
    <input type="submit" name="opc_ppl" value="Opción 1">
    <input type="submit" name="opc_ppl" value="Opción 2">
    <input type="submit" name="opc_ppl" value="Opción 3">
    <input type="submit" name="opc_ppl" value="Salir">
</form>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $opc_ppl = $_POST["opc_ppl"];
    switch ($opc_ppl) {
        case "Opción 1":
            echo "<h2>Ha elegido la Opción 1. Seleccione una Opción...</h2>";
            echo "<form method='post'>
                    <input type='submit' name='opc1' value='Opción 1.1'>
                    <input type='submit' name='opc1' value='Opción 1.2'>
                    <input type='submit' name='opc1' value='Opción 1.3'>
                    <input type='submit' name='opc1' value='Salir de Opción 1'>
                </form>";
            break;
        case "Opción 2":
            echo "<h2>Ha elegido la Opción 2. Seleccione una Opción...</h2>";
            echo "<form method='post'>
                    <input type='submit' name='opc2' value='Opción 2.1'>
                    <input type='submit' name='opc2' value='Opción 2.2'>
                    <input type='submit' name='opc2' value='Opción 2.3'>
                    <input type='submit' name='opc2' value='Salir de Opción 2'>
                </form>";
            break;
        case "Opción 3":
            echo "<h2>Ha elegido la Opción 3. Seleccione una Opción...</h2>";
            echo "<form method='post'>
                    <input type='submit' name='opc3' value='Opción 3.1'>
                    <input type='submit' name='opc3' value='Opción 3.2'>
                    <input type='submit' name='opc3' value='Opción 3.3'>
                    <input type='submit' name='opc3' value='Salir de Opción 3'>
                </form>";
            break;
        case "Salir":
            echo "<h2>Adiós...</h2>";
            break;
        default:
            echo "<h2>Error. Opción Inválida...</h2>";
            break;
    }
}
?>

</body>
</html>
