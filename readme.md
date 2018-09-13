Nombre del Proyecto 

Semaforo

Descripcion del proyecto

Este proyecto fue elaborado con la intencion de mostrar como es que esta funcionando un semaforo
normalmente en la vida real solo que para efectos de la materia se modifico el funcionamiento de
este haciendo que:
--El semaforo vehicular siempre esta en verde.
--Al hacer click en el boton el semaforo debera esperar cierto tiempo, despues comenzar a parpadear,despues pasar a color ambar y por ultimo a rojo.
--El boton tiene una perilla reguladora que calcula el tiempo que durara el semaforo en verde antes de comenzar con el proceso de parpadeo.

Materiales Requeridos

-protoboard
-Arduino uno
-Resistencias de diferentes valores
-5 leds(verde,amarillo,rojo)
-Cables para interconectar el circuito
-Push boton
-Potenciometro de 10k (regular el tiempo)

Proceso(Descripcion del programa)

1.- Lo primero que hacemos es declarar nuestras variables tanto de entrada como salida asi como
variables que utilizaremos en el prgorama
2.- Asignamos el metodo que tendran las variables (entrada o salida) asi como valores iniciales
a variables dentro del programa
3.- El metodo verde() recibe un parametro que sera el tiempo que durara encendido antes de empezar a parpadear.
4.- El metodo parpadeo contiene las veces que nuestro semaforo en verde encendera y apagara antes de pasar a color ambar (led amarillo).
5.- El metodo amarillo contiene el tiempo que durar encendido nuestro led amarillo para despues apagarse
6.- EL metodo rojo recibe el mismo parametro que el metodo verde para determinar el tiempo que durara el semaforo en rojo y por lo consecuente cuanto tiempo durara el led verde del semaforo peaton encendido.
7.- El metodo peaton se ejecuta dentro del metodo rojo y este evalua el estado del led rojo del semaforo vehicular y en base a ello determinar si encender el led verde o rojo del semaforo de peaton
8.- En el loop lo que se hace es que inicialmente esta encendido siempre en verde hasta que sea presionado el push boton y en base a el calcular el valor del potencimetro y mapearalo para definir un tiempo que durara el semaforo en comenzar a parpadear, despues se ejecuta el metodo amarillo y por ultimo el rojo.
