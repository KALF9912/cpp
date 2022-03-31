#incluide <iostream>
#incluide <ctime>
#incluide <cstdlib>

// Declaraciones

 entrada int ( int cant)
{
  si (no puedo == 1 )
    {
      std::cout << " Press \" Enter \" para tirar el dado 1 " ;
    }
  demas
    {
      std::cout << " Press \" Enter \" para tirar el dado 2 " ;
    }
  estandar::cin. ignorar ();
}

// Desarrollo

int  Lanzarote ()
{
  int corria;
  srand ( tiempo ( 0 ));
  corrio = rand () % 6 + 1 ;
  std::cout << " La respuesta Del Dado Es " << corrio << std::endl;
   sistema ( " color 03 " );
  retorno corrido;
}

int  dado ( int pdado, int sdado)
{
  std::cout << " Ha avanzado " << pdado + sdado << " Recuadros " << std::endl;
  return pdado + sdado;
}



int  principal ()
{
  inttotal , primerdado, segundodado;

  entrada ( 1 );
  primerdado = Lanzardado ();
  entrada ( 2 );
  segundodado = Lanzardado ();
  total = dado (primerdado, segundodado);
  
  Return 0 ;
}
