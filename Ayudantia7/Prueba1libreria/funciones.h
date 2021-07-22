int verificacion(int limiteInferior, int limiteSuperior);
void instrucciones();
int inicioDeFilas();
int inicioDeColumnas();
char ingresoDireccion();
void resumenMision(int canCuadriculas, int canTesoros);
void moverNorte(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverEste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverSur(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverOeste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);

//.sh
//chmod 777 archivo