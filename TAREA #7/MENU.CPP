# incluir  < iostream >
# incluir  " menú.h "
# incluir  " producto.h "
# incluir  " factura.h "

utilizando el espacio de  nombres  estandar ;

// extern void productos(int opcion);
// externo void imprimirFactura();


 menu vacio ()
{
    int opcion = 0 ;

    mientras ( verdadero )
    {
        sistema ( " cls " );
        cout<< " **** " ;
        cout << " Menú " ;
        cout<< " **** " ;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << " 1 - Bebidas Calientes " << endl;
        cout << " 2 - Bebidas Frias " << endl;
        cout << " 3 - Repostería " << endl;
        cout << " 4 Imprimir Factura " << endl;
        cout << " 0 - Salir " << endl;

        cout << endl;
        cout << " Ingresa una opcion: " ;
        cin >> opcion;

        si (opcion == 0 )
        {
            romper ;
        }
        si (opcion == 4 )
        {
            imprimir Factura ();
        } mas {
      productos (opcion);
   }
