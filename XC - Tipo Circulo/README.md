# Trabajo XC - Tipo Circulo

## Etapa #1: Análisis del problema

### <u>Transcripcion del problema:</u> 
-   Demostrar la capacidad de construir tipos de compuestos basados en otros tipos existentes o creados por el programador.
   
**<u>IPO Chart:</u>**
| **Entrada** | **Procesos** | **Salida** |
|---|---|---|
| Par de reales. | Definir centro de la estructura. | Par de reales. |
| Par de reales. | Definir punto adicional. | Par de reales. |
| Valor real. | Definir el radio de la estructura. | Valor real. |

### <u>Restricciones:</u>
-   No presenta.

## Etapa #2: Diseño de la solución

### <u>Léxico del algoritmo</u>
- La solucion se baso en el contenido que se vio en clase, *Tipos de datos definidos por el usuario*, *operador ternario*, etc...

### <u>Representación visual o textual del algoritmo</u>
- El algoritmo se penso desde la modularizacion, definiendo las funciones pedidas por el programa:
  - getCircunferencia
  - getArea
  - isDentro
  - moverCirculo

- Dada la naturaleza de las operaciones a realizar era necesario utilizar una definicion constante para el valor matematico de pi:

```cpp
#define M_PI 3.14159265358979323846
```

- Por otro lado se construyeron representaciones de estructuras matematicas para poder llevar a cabo las operaciones pedidas por el problema. Las misas son:

```cpp
struct Punto {double x,y;};
struct Circulo
{
    Punto c;
    double rad;
};
```

- Por ultimo, se tiene el desafio de la operacion *moverCirculo*. Si bien se hubiera podido aplicar un menu de opciones interactivo para el usuario, me decidi a consultarle al usuario si confirmaba las coordenadas iniciales de la estructura y darle la posibilidad de cambiarlo si el mismo lo creia necesario.

```cpp
cout << "Confirma posicion del circulo? (Y/N): ";
    cin >> opt;
    
    if(opt == 'n')
        moverCirculo();
```
