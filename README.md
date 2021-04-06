# cimg_example
En este ejemplo se carga una imagen para obtener sus pixeles en rgb

# Instalación
Primero intenta correr el archivo de codigo antes de instalar los scripts de paquetes a instalar,
  
  sudo apt-get install libx11-dev
  
  sudo apt-get install cimg-dev cimg-doc cimg-examples
  
# Compilación y ejecución

  g++ -Wall -o test test.cpp -lpthread -lX11
  
  ./test

