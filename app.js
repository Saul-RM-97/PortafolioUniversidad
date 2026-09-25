var Alert = new CustomAlert(); //Se crea una nueva variable, mandando a llamar a la funcion

function CustomAlert() { //Funcion que se encarga de mostrar el cuadro de texto al dar clic en el boton
    this.render = function() {
        let popUpBox = document.getElementById('popUpBox');
        popUpBox.style.display = 'block';
        document.getElementById('closeModal').innerHTML = '<a href="index.php"><button type="button" a href> ¡Si quiero!</button></a>';  //Se muestra el boton en la ventana emergente
    }

    this.ok = function() { //Manda a llamar la funcion en el archivo resultados
        document.getElementById('popUpBox').style.display = "none";
        document.getElementById('popUpOverlay').style.display = 'none';
    }
}