# Tiziano-Giacomozzi-4-1-T.TARDE
Tiziano Giacomozzi
tizigiacomozzi525@gmail.com projecto informatico 4°1 Gonzalo Consorti
Usando el ejercicio del TP1 como base: Desarrollar un sistema con , controlando el tiempo entre los cambios de colores mediante una resistencia variable (potenciómetro) que valla desde 0s(aprox) min a 3s(aprox) max, y el encendido/apagado de los LEDs con un pulsador (en funcionalidad boton) que puede detener y recomenzar la secuencia en cualquier momento, un buzzer que emitirá un sonido cuando cambien los colores (junto a la secuencia de parpadeo).

Además, los colores de los LEDs serán personalizables por el usuario usando 3 potenciometros para ajustar los valores de RGB, durante el tiempo entre apagar un LED y encender el siguiente, hacer que los (aproximadamente 100ms por parpadeo) y se mostrará un mensaje en el monitor serial que indica la configuración de colores con el siguiente formato: 1° Renglón => Tiempo: x Donde x es el valor en Segundos (no en miliSegundos) 2° Renglón => R:x G:x B:x Donde x es el valor que va a tener de color en escala 0-255

Pista: para poder escalar el valor cíclico de las lecturas analogías a un valor estable de salida analogía se puede realizar una regla de 3 simple: (value * 255) / 1023

ES UN SOLO REPOSITORIO POR MATERIA, NO UNO POR TRABAJO A ENTREGAR

La entrega de los TP se realiza por una nueva BRANCH en su repositorio de GIT (ADENTRO UNA CARPETA CON EL MISMO NOMBRE DE LA RAMA).

Agregarme como colaborador del repo GIT -> consor92@gmail.com

Luego colocar el enlace a la BRACH en la entrega de esta tarea (si no esta el link de acceso, no estoy como colaborador o se entrega por otro medios el TP se considera DESAPROBADO). Captura de pantalla del circuito. Archivo de codificación de arduino ( .ino) No subir archivos basura de ningún IDE. Archivo README.md actualizado la consigna del TP a entregar. Si se requiere, subir documentación pedida (siempre en formato .PDF) Todo tiene que estar dentro de una carpeta en la rama correspondiente que se llamara igual al nombre del TP.

El archivo README.md de cada Branch contendrá: Datos del alumno, docente y explicación de la materia.(Nombre y Apellido, Correo , Curso y Division) Organización/estructura de la branch y su contenido. Consigna a resolver. Comentarios sobre complicaciones.

Hola profe, tuve el problema de que no tenia suficientes pines analagicos para hacer el trabajo con 3 leds asi que lo hice con dos pero usando el mismo sistema de prendido y apagado de las luzes con un parpadeo
