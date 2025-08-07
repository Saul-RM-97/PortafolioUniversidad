/*Programa para calcular el RFC de una persona
Realizado por: Saúl Rivera
Fecha: 04/08/25
Lenguaje de Programación C++ */

#include <iostream>
#include <vector> //Se utiliza para las palabras prohibidas
#include <string>
#include <cctype> //Se utilzia para que todo sea en mayusculas

// Diccionario de palabras antisonantes
const std::vector<std::string> palabrasProhibidas = {
    "PENE", "POPO", "CACA", "PUTO", "VERGA", "COLA", "CULO", "TETA", "VAGINA", "PITO", "ANO", "VULVA", "SENO"};

// Verificar y modificar las palabras prohibidas en el Diccionario
std::string corregirRFC(const std::string &rfc)
{ // std::string se usa para creas un a función con cadenas y se agrega a una constante para incorparala a la cadena rfc el cual va a corregir el RFC
    for (const std::string &palabra : palabrasProhibidas)
    { // Se usa un ciclo for para analizarlo y almacenarlo en la variable palabra
        if (rfc == palabra)
        {
            return rfc.substr(0, 3) + "X"; // Reemplaza la ultima letra por X
        }
    }
    return rfc; // Regresa el valor del RFC ya modificado
}

// Función para obtener la primera vocal interna de una cadena
char obtenerPrimeraVocalInterna(const std::string &mayusculas)
{
    for (size_t i = 1; i < mayusculas.length(); ++i)
    {                                    // Ocupamos size_t para el indice en C++ y length para el indice
        char c = toupper(mayusculas[i]); // variable c es igual a toupper(convierte todo en mayusculas [i] el indice)
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return c; // Devuelve el valor de la primera vocal interna encontrada
        }
    }
    return 'X'; // Si no encuentra ninguna vocal interna se usa una X
}

// Función principal para calcular el RFC, se asigna en la variable calcularRFC y se utiliza std::string para cadenas de texto
std::string calcularRFC(const std::string &nombre, const std::string &apellidoPaterno, const std::string &apellidoMaterno, const std::string &anio, const std::string &mes, const std::string &dia)
{

    // Se declara la variable en donde guardaremos el RFC
    std::string rfc;

    // Se obtiene la letra inicial y la primera vocal interna del apellidoPaterno
    char letraInicial = apellidoPaterno[0];
    char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);

    // Se obtiene la inicial del apellidoMaterno o se usa una 'x' si no existe
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';

    // Se obtiene la inicial del primer nombre o se usa una 'X' si no existe
    char inicialNombre = nombre[0];

    // Se obtiene los dos ultimos digitos del año de nacimiento
    std::string anioRFC = anio.substr(2, 2);

    // Se obtiene el mes y dia de nacimiento
    std::string mesRFC = mes.substr(0, 2); // Asegurarse que el mes tenga dos digitos
    std::string diaRFC = dia.substr(0, 2); // Asegurarse que el dia tenga dos digitos

    // Se contruye el RFC sumando el texto de la información que se proporciona
    rfc = letraInicial; // Se agrega la letra inicial del apellido paterno
    rfc += primeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;

    // Se compara con la BD de palalbras mal formadas y se sustituye con la letra 'X'
    rfc = corregirRFC(rfc);

    // Si hay corrección se continua generando el rfc
    rfc += anioRFC;
    rfc += mesRFC;
    rfc += diaRFC;
    return rfc;
}

int main()
{
    // Enviar a consola los datos que se requieren para solicitar nombre, apellido y fechaNacimiento
    std::string nombre, apellidoPaterno, apellidoMaterno, dia, mes, anio;
    std::cout << "Introduce tu nombre: ";
    std::getline(std::cin, nombre); // Se usa getline para permitir nombres compuestos y cin para leer la entrada del usuario
    std::cout << "Introduce tu apellido paterno: ";
    std::getline(std::cin, apellidoPaterno);
    std::cout << "Introduce tu apellido materno: (Si no cuenta con apellido presiona enter): ";
    std::getline(std::cin, apellidoMaterno);
    std::cout << "\nIntroduce tu fecha de nacimiento solo numeros!";
    std::cout << "\nDia: (DD): ";
    std::getline(std::cin, dia);
    std::cout << " Mes: (MM): ";
    std::getline(std::cin, mes);
    std::cout << "Anio: (YYYY): ";
    std::getline(std::cin, anio);
    std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, anio, mes, dia);
    std::cout << "RFC: " << rfc << std::endl;

    return 0;
}