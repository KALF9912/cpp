# incluir  < iostream >
# incluir  " factura.h "
utilizando el espacio de  nombres  estandar ;

subtotal doble ;
string listaProductos;

void  agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + ' \n ' ;
    subtotal = subtotal + (cantidad * precio);
}

nulo  imprimirFactura ()
{
    sistema ( " cls " );
    cout << " ********* " << endl;
    cout << " Factura " << endl;
    cout << " ********* " << endl;
    cout<<endl;

    cout << " Productos: " << endl;
    cout << listaProductos;

    cout<<endl;
    cout << " Subtotal: " << subtotal;
    cout << " Impuesto 15%: " << subImpuesto << endl;
    cout << " Total: " << total << endl;
    cout << endl;
    cout << endl;
    sistema ( " Pausa " );

}
