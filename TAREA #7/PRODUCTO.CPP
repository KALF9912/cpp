# incluir  < iostream >
# incluir  " productos.h "
# incluir  " factura.h "

utilizando el espacio de  nombres  estandar ;

 extern  void  agregarProducto (string descripcion, int cantidad, double precio);

 productos nulos ( opcion int )
{
    sistema ( " cls " );

    int opcionProducto = 0 ;

    interruptor (opcion)
    {
    caso  1 :
    {
            cout << " BEBIDAS CALIENTES " << endl;
            cout << " *************** " << endl;
            cout << " 1 - Capuchino " << endl;
            cout << " 2 - Expresso " << endl;
            cout << endl;

            cout << " Ingresa una opcion: " ;
            cin >> opcionProducto;

            interruptor (opcionProducto)
            {
            caso  1 :
                agregarProducto ( " 1 Capucciono - L 40.00 " , 1 , 40 );
                romper ;
              caso  2 :
                agregarProducto ( " 1 Expresso - L 30.00 " , 1 , 30 );
                romper ;
            predeterminado :
            {
              cout << " opcion no valida " ;
              volver ;
               romper ;
            }
       }
		
     cout << endl;
     cout << " Producto agregado " << endl << endl;
     sistema ( " pausa " );
     
      romper ;
      
        {
     caso  2 :
        {
		 
    cout << " BEBIDAS FRIAS " << endl;
    cout << " *************** " << endl;
    cout << " 1 - Te Frio " << endl;
    cout << " 2 - Piña Colada " << endl;
    cout << " 3 - Granita de Fresa " << endl;
    cout << endl;
    cout << " Ingresa una opcion: " ;
            cin >> opcionProducto;

            interruptor (opcionProducto)
            {
            caso  1 :
                agregarProducto ( " 1 Te Frio - L 25.00 " , 1 , 25 );
                romper ;
              caso  2 :
                agregarProducto ( " 1 Piña colada - L 40.00 " , 1 , 40 );
                romper ;
                caso  3 :
                agregarProducto ( " 1 Granita De Fresa - L 40.00 " , 1 , 40 );
                romper ;
            predeterminado :
            {
              cout << " opcion no valida " ;
              volver ;
               romper ;
           }
        }
        
        
		romper ;
     cout << endl;
     cout << " Producto agregado " << endl << endl;
     sistema ( " pausa " );
      romper ;
    }
    caso  3 :
    {
    cout << " REPOSTERIA " << endl;
    cout << " *************** " << endl;
    cout << " 1 - Cheesecake " << endl;
    cout << " 2 - Panini " << endl;
    cout << " 3 - Marboleado " << endl;
    cout << endl;
    cout << " Ingresa una opcion: " ;
            cin >> opcionProducto;

            interruptor (opcionProducto)
            {
            caso  1 :
                agregarProducto ( " 1 Cheesecake - L 70 " , 1 , 70 );
                romper ;
              caso  2 :
                agregarProducto ( " 1 Panini - L 55.00 " , 1 , 55 );
                romper ;
                caso  3 :
                agregarProducto ( " 1 Marboleado - L 22 " , 1 , 22 );
                romper ;
            predeterminado :
            {
              cout << " opcion no valida " ;
              volver ;
               romper ;
            }
       }
		romper ;
        
     cout << endl;
     cout << " Producto agregado " << endl << endl;
     sistema ( " pausa " );
      romper ;
    }
    sistema ( " pausa " );
        romper ;
    
    predeterminado :
    romper ;
    }
}
