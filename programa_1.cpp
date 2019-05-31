//*** Indroducción ***
// Comentarios de una linea
/* Comentarios
multilinea
en
C++ */

//Libreria de entrada y salida de datos
#include <iostream>
//Para escribir en cada linea y ahorrar el std::
using namespace std;

//La funcion principal main donde se inicia el programa
int main(){
    //Impresion en pantalla con salto de linea
    cout << "Hola mundo!" << endl;

    //*** Variable entero y su impresion uso ***
    // Se declara un entero que solo puede contener números
    int entero_a;
    cout << "Dame un entero" << endl;
    // Se toman datos de entrada del teclado con la funcion cin y se guardan en la variable
    cin >> entero_a;
    // Se puede saltar linea y continuar el código
    cout << "entero_a = " << entero_a << " eso es " <<
        entero_a << endl;

    //*** Cadena y la función getchar() ***
    // variable tipo cadena
    string deseo;
    // Se asigna un valor y se imprime
    deseo = "Que te diviertas";
    cout << deseo << endl;
    // Función getchar espera una tecla
    cin.get();//se ponen 2 si se introduce algo de entrada así se lo traga ignorando
    cout << "presione entrar para continuar..." << endl;
    cin.get();
    // Otra pero esta se le pone lo que el usurio quiere
    string cadenaSinEspacios;
    // Podemos poner un salto de linea con \n
    cout << "Escribe una cadena \n";
    cin >> cadenaSinEspacios;
    cout << "La cadena leida es *" << cadenaSinEspacios << "*" << endl;

    //*** Si no se usa el using namespace std debe ponerse el codigo como el siguiente ***
    std::cout << "Hola" << std::endl;
    std::cout << "Presione entrar para continuar..." << std::endl;
    std::cin.get();

    //*** Registro Struct
    // Declaracion de una estructura en la cual se pueden poner varios tipos de variables
    struct Persona{
        int edad;
        string nombre;
    };

    // Se crean 2 un objetos de la estrucctura
    Persona ingeniero, alumno;
    // Se pone referencia para llenar el valor de los tipos
    ingeniero.nombre = "Diego Alejandro Gonzalez Arellano";
    ingeniero.edad = 24;
    // Las estructuras son asignables
    alumno = ingeniero;
    // Editamos
    alumno.edad = 23;
    // Mostramos cada objeto
    cout << "Alumno\n Nombre=" << alumno.nombre << " Edad=" << alumno.edad << endl;
    cout << "Ingeniero\n Nombre=" << ingeniero.nombre << " Edad=" << ingeniero.edad << endl;

    // Valor entero que regresa el main
    return 0;
}
