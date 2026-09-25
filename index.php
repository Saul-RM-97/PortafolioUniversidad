<html>
    <head>
        <meta charset="UTF-8">
        <title>Captura de datos</title>
        <script src="https://kit.fotawesome.com/a71707a89a.js" crossorigin="anonymous"></script>
        <link rel="stylesheet" href="./style.css"/>
    </head>

    <body>
        <div class="dive" >
        <h1>Captura de datos personales</h1>
        <br>
        <h2>Ingresa los datos que se te solicitan</h2>
        <br>
        <p>"Mi primera encuesta"</p>
        <hr>
         <form action="resultados.php" method="POST">
        <label for="Name">Nombre: </label>
        <input type="text" id="nombre" name="nombre" placeholder="Ingresa tu nombre"><br>
        <label for="Age">Edad: </label>
        <input type="number" id="Age" name="Age" placeholder="Ingresa tu edad"><br>
        <label for="Date">Fecha: </label>
        <input type="date" id="Date" name="Date" placeholder="Ingresa tu fecha"><br>
        <label for="City">Ciudad donde vives: </label>
        <input type="text" id="City" name="City" placeholder="Ingresa el lugar donde vives"><br>
        <label for="Hobby">Cual es tu pasatiempo favorito: </label>
        <input type="text" id="Hobby" name="Hobby" placeholder="Ingresa tu pasatiempo favorito"><br>
        <a href="resultados.php"> 
            <button type="submit" a href>¡Ingresamos Datos!</button>    
        </a>
        </form>
        </div>
    </body>
</html>