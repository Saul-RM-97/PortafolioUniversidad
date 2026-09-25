<html>
    <head>
        <meta charset="UTF-8">
            <title>Resultado de Datos</title>
                <script src="https://kit.fotawesome.com/a71707a89a.js" crossorigin="anonymous"></script>
            <link rel="stylesheet" href="./style.css"/>
    </head>
    <body>
        <div class="dive2" >
            <h1>Resultados</h1><hr>
            <img src="Succesfully.jpg"><hr>
            <?php
            $nombre = $_POST['nombre'];
            echo '<p><b>Nombre: </b>' .$nombre. '</p>';
            $Age = $_POST['Age'];
            echo '<p><b>Edad: </b>' .$Age. '</p>';
            $Date = $_POST['Date'];
            echo '<p><b>Fecha: </b>' .$Date. '</p>';
            $City = $_POST['City'];
            echo '<p><b>Ciudad: </b>' .$City. '</p>';
            $Hobby = $_POST['Hobby'];
            echo '<p><b>Pasatiempo Favorito: </b>' .$Hobby. '</p>';
            ?>
            <h2>¡Bien Hecho!</h2>
                <div id="popUpOverlay"></div> 
                    <div id="popUpBox">
                    <div id="box">
                        <i class="fas fa-question-circle fa-5x"></i>
                        <h1>¿Volver a ingresar los datos?</h1>
                        <div id="closeModal"></div>
                    </div>
                </div>
            <button onclick="Alert.render('You look very pretty today.')" class="btn">¡Volver a Ingresar</button>
        </div>
        <script src="./app.js"></script>
    </body>
</html>