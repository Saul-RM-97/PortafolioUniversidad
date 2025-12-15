#include <iostream> //Libreria estandar se utiliza para entrada y salida
#include <string.h> //Contiene constantes y funciones
#include <conio.h> //Permite el uso de entrada y salida por consola
using namespace std; //Espacio de trabajo para el inicio del bloque
void leerPasw (char frase []); // Se define la funcion para evaluar los caracteres
char pass [10]; //Definimos pass para validar la contraseña
int correcto;//Se definen las variables de tipo entero
int intento;
const char contraseña [] = "0123456789"; //Definimos la constante de tipo char para el acceso para que se valide 
int main() //Funcion principal
{
  system("color 0c"); //Se ingresa un codigo de color
  intento = 1; //Se asigna la variable intento
  correcto = 0;
  printf("\n\t\t Introduzca la contrasena: "); //Se da un salto de linea en pantalla
  leerPasw(pass); //Se asigna para evaluar la entrada de caracter por teclado
  printf ("\n");
  if (strcmp(pass,contraseña)== 0) correcto =1;
  while ((correcto == 0) && (intento < 3))
  {
    intento++;
    system ("cls");
    printf ("\n\n\t Contrasena incorrecta. %i intento: ", intento); //Se condiciona la variable de intentos
    leerPasw(pass);
    printf("\n");
    if (strcmp(pass, contraseña) == 0) correcto = 1; //strmcp sirve para comparar cadenas, la cual tiene la funcion pass y contraseña
  } //si las cadenas son iguales regresara 0 se asigna 1 ala variable correcto
  if (correcto == 0) printf ("Se han exedido el numero de intentos."); 
  else 
  {
    printf("Bienvenido al menu de opciones.");
    system("CLS");
    system("c:\\users\\hp\\Desktop\\Program1\\bin\\debug\\program1.exe");
  }
  return 0;
}
void leerPasw (char frase [])
{
    int i = 0;
    cout.flush();
    do
    {
        frase [i] = (unsigned char) getch(); //Se asigna la validacion
        if (frase [i] !=8) //No es retroceso
        {
            cout << '*'; //Muestra en pantalla al momento de teclear el retroceso
            i++;
        }
        else if (i > 0)  //El retorceso y hay caracteres
        {
            cout << (char) 8 << (char) 32 << (char) 8;
            i--; //El caracter a borrar  o el backspace
        }
        cout.flush(); //Funcion para eliminar la entrada por teclado
    } while (frase [i - 1] != 13); // Si presiona Enter se va a estar iterando
    frase [i - 1]; 
    cout << endl;
    
}