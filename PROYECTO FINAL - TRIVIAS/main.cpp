#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using namespace std;
main ()
{
int Opc, idioma;//sera la opcion de elegir
int Salir;//indica el momento para salir del programa
char respuesta;
char nombre[20];
cout<<"introduce tu nombre\n\n\n";
cin>>nombre;
cout<<"\n\n Bienvenido\n\n\n";
for (int i=0; i<6; i++)
{
cout<<"Bienvenido\t\t\t"<<nombre;
{
cout <<"\n\n Seleccione un idioma\n\n\n";
cout<<"1-Español\n";
cout<<"2-Ingles\n";
cin>>idioma;
 
if (idioma==1)
{
 
 for(int i=0;i<10;i++)
{
cout<< "Modulos"<<endl;
cout<< "1)Manejo de tecnicas de programacion"<<endl;
cout<< "2)Comunicacion en los ambitos escolar y profesional"<<endl;
cout<< "3)Interaccion inicial en ingles"<<endl;
cout<< "4)Aplicacion de matematicas discretas"<<endl;
cout<< "5)Mantenimiento de equipo de computo basico"<<endl;
cout<< "6)Representacion simbolica y angular del entorno"<<endl;
cout<< "7)Identificacion de la biodiversidad"<<endl;
cout<< "8)Analisis de la materia y la energia"<<endl;
cout<< "9)Manejo de aplicaciones por medios digitales"<<endl;
cout<< "10)Salir"<<endl;
cout<<"Dame otra opcion(rango 1-10)"<<endl;
cin>>Opc;
 
switch (Opc) {
 
case 1: // Modulo a
cout<<"Manejo de tecnicas de programacion"<<endl;
 
cout<<"1-¿Que es programacion?"<<endl;
cout<<"a)diseñar, depurar, codificar y mantener un codigo"<<endl;
cout<<"b)Un conjunto de programas"<<endl;
cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
cout<<"d)Se usa para resolver un problema"<<endl;
cin>>respuesta;
 
      if(respuesta=='a')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"2-¿Que es un algoritmo?"<<endl;
cout<<"a)Es la forma para resolver un problema"<<endl;
cout<<"b)Un conjunto de criterios para evaluar"<<endl;
cout<<"c)Enlista opciones"<<endl;
cout<<"d)Indica el orden de realizacion"<<endl;
cin>>respuesta;
       if(respuesta=='a')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"¿3-¿Cuales son las fases del ciclo de vida del Software?"<<endl;
cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
cout<<"b)Validación, analisis y diseño"<<endl;
cout<<"c)Pruebas y codificacion"<<endl;
cout<<"d)Todas las anteriores"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"4-¿Identificacion de Necesidades:¿Cuales son las fases para plantear un problema?"<<endl;
cout<<"a)Establecer y Listar"<<endl;
cout<<"b)Validar, Analizar y Diseñar"<<endl;
cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
cout<<"d)Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"5-¿Que es establecer?"<<endl;
cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"6-¿Que es Listar?"<<endl;
cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
cin>>respuesta;
       if(respuesta=='b')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"7-¿Que es recabar?"<<endl;
cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
cout<<"d)Conjunto de criterios para evaluar las oportunidades,si se adecua con requerimiento del cliente"<<endl;
cin>>respuesta;
       if(respuesta=='b')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"8-¿Que es evaluar?"<<endl;
cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
cout<<"b)Listar opciones que serán la base de cada oportunidad"<<endl;
cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"9-¿Cual es el ciclo de vida del Software?"<<endl;
cout<<"a)Definicion de necesidades, analisis, diseño, codificacion"<<endl;
cout<<"b)Pruebas, validacion, mantenimiento y evolucion"<<endl;
cout<<"c)Las anteriores"<<endl;
cout<<"d)Ninguna"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"10-¿Para que se usa un algoritmo?"<<endl;
cout<<"a)Para la programacion del software"<<endl;
cout<<"b)Para indicar el orden"<<endl;
cout<<"c)Para obtener un resultado"<<endl;
cout<<"d)Ninguna de las anteriores"<<endl;
cin>>respuesta;
       if(respuesta=='a')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"11-¿Como se usa un algoritmo?"<<endl;
cout<<"a)Se obtiene el mismo resultado"<<endl;
cout<<"b)Para poder crear un software"<<endl;
cout<<"c)Resuelve un problema planteado"<<endl;
cout<<"d)Todas"<<endl;
cin>>respuesta;
       if(respuesta=='b')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"12-¿Que es el pseudocodigo?"<<endl;
cout<<"a)Conjunto de instrucciones o reglas"<<endl;
cout<<"b)Indica el orden"<<endl;
cout<<"c)Para obtener el mismo resultado"<<endl;
cout<<"d)Descripcion de un algoritmo"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"13-¿Cuantos tipos de condicion hay?"<<endl;
cout<<"a)5"<<endl;
cout<<"b)3"<<endl;
cout<<"c)1"<<endl;
cout<<"d)2"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"14-¿Cuales son?"<<endl;
cout<<"a)Condicional simple, compuesta y operador"<<endl;
cout<<"b)Ninguna"<<endl;
cout<<"c)Condicional simple y compuesta"<<endl;
cout<<"d)a y b"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"15-¿Como se usa un pseudocodigo?"<<endl;
cout<<"a)En un unico punto de inicio"<<endl;
cout<<"b)Un numero finito de caminos entre el punto de inicio y los posibles puntos de termino"<<endl;
cout<<"c)Ambos"<<endl;
cout<<"d)Otro"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"16-¿Quien nos indica el flujo de los procesos?"<<endl;
cout<<"a)Una flecha"<<endl;
cout<<"b)Una entrada de datos"<<endl;
cout<<"c)Un circulo"<<endl;
cout<<"d)Una salida de datos"<<endl;
cin>>respuesta;
       if(respuesta=='a')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"17-En esta fase el programa se pasa a un lenguaje de programacion ¿Que fase es?"<<endl;
cout<<"a)Analisis"<<endl;
cout<<"b)Diseño"<<endl;
cout<<"c)Prueba"<<endl;
cout<<"d)Codificación"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"18-¿Que fase del ciclo de vida del software se enlistan tareas donde el software debe realizar tareas?"<<endl;
cout<<"a)Codificacion"<<endl;
cout<<"b)Prueba"<<endl;
cout<<"c)Diseño"<<endl;
cout<<"d)Analisis"<<endl;
cin>>respuesta;
       if(respuesta=='d')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"19-Es una propuesta de solucion en la cual se garantiza el cumplimiento de forma eficiente logica y completa"<<endl;
cout<<"a)Prueba"<<endl;
cout<<"b)Analisis"<<endl;
cout<<"c)Diseño"<<endl;
cout<<"b)Codificacion"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
cout<<"20-Es la fase en la que se determina cualquier error o deficiencia del programa y se realiza cualquier accion para corregirla¿?"<<endl;
cout<<"a)Diseño"<<endl;
cout<<"b)Codificacion"<<endl;
cout<<"c)Prueba"<<endl;
cout<<"b)Analisis"<<endl;
cin>>respuesta;
       if(respuesta=='c')
cout<<"la respuesta es correcta"<<endl;
 
else
cout<<"La respuesta es incorrecta"<<endl;
 
system ("pause");
}
}
}
}
}
}
