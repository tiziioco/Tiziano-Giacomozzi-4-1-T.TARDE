# Tiziano-Giacomozzi-4-1-T.TARDE
Tiziano Giacomozzi
tizigiacomozzi525@gmail.com projecto informatico 4°1 Gonzalo Consorti
SOLO USANDO TEMAS QUE VIMOS EN CLASE
En un museo, la protección de las obras de arte es fundamental para garantizar su seguridad y preservar su integridad. En este caso, se diseñará un sistema de alarma inteligente para una obra de arte específica, utilizando varios sensores para detectar:


(para detectar si alguien está tocando la obra, lo que podría generar un aumento de temperatura).
(para detectar si alguien se acerca a la obra o la toca).
(para activar el sistema solo de noche, cuando el museo está cerrado).
(para asegurar que las personas no se acerquen demasiado a la obra de arte, evitando posibles daños).


El sistema se encargará de generar alertas visuales mediante LEDs RGB, sonoras mediante un buzzer, y de proporcionar información en la consola serial para que el personal de seguridad del museo pueda estar al tanto en todo momento.


El sistema de seguridad estará instalado alrededor de una obra de arte en una galería del museo. Durante el horario de cierre, el sistema estará monitoreando la obra de arte para asegurarse de que no se toque, se acerquen demasiado o se viole la seguridad del espacio. A continuación, se describen las diferentes situaciones y las respuestas del sistema:

Protección de la obra (sensor de calor):El sensor de temperatura mide la temperatura ambiente cerca de la obra de arte. Si alguien se acerca demasiado y toca la obra, el calor corporal puede generar un cambio en la temperatura que activa el sistema.
Alerta: Si la temperatura supera un umbral de 39°c, el LED RGB se pone rojo y el buzzer suena brevemente, indicando que alguien está tocando la obra.

Detección de movimiento:El sensor de movimiento detecta si una persona entra en el área de la obra de arte.Alerta: Si el sensor detecta movimiento, el LED RGB se pone amarillo, indicando que alguien está cerca, pero no necesariamente tocando la obra. El buzzer emite un sonido breve, como advertencia.

Monitoreo nocturno: El sensor mide la luz ambiental. Si la luz es baja (indicación de que es de noche o el museo está cerrado), el sistema se activa, tener cuidad que no este atardeciendo o amaneciendo, para ellos tomar valores menores al 20% de luz como oscuridad.
Alerta: Si el nivel de luz es bajo y se detecta movimiento o calor cerca de la obra, el sistema se activa completamente, emitiendo alertas visuales y sonoras. Si no se detecta movimiento ni calor, el sistema de monitoreo permanece inactivo.

Proximidad peligrosa (sensor de distancia):El sensor mide la distancia entre el sensor y las personas durante el dia que se acercan a la obra. Si alguien se acerca a menos de 1 metro de la obra, el sistema considera esto un riesgo de daño.Alerta: Si la distancia es menor a 1 metro, el LED RGB se pone rojo y el buzzer emite una secuencia de alarmas, alertando al personal de seguridad.

Monitorización en tiempo real:Los valores de los sensores (temperatura, luz, movimiento y distancia) se envían constantemente a una pantalla LCD. Esto permite al personal de seguridad verificar el estado de la obra de arte en tiempo real.



ES UN SOLO REPOSITORIO POR MATERIA, NO UNO POR TRABAJO A ENTREGAR


La entrega de los TP se realiza por una nueva BRANCH  en su repositorio de GIT (ADENTRO UNA CARPETA CON EL MISMO NOMBRE DE LA RAMA).

Agregarme como colaborador del repo GIT ->  consor92@gmail.com

Luego colocar el enlace a la BRACH en la entrega de esta tarea (si no esta el link de acceso, no estoy como colaborador o se entrega por otro medios el TP se considera DESAPROBADO).
Captura de pantalla del circuito.
Archivo de codificación de arduino (   .ino)
No subir archivos basura de ningún IDE.
Archivo README.md actualizado la consigna del TP a entregar.
Si se requiere, subir documentación pedida (siempre en formato .PDF)
Todo tiene que estar dentro de una carpeta en la rama correspondiente que se llamara igual al nombre del TP.

El archivo README.md de cada Branch contendrá:
Datos del alumno, docente y explicación de la materia.(Nombre y Apellido, Correo , Curso y Division)
Organización/estructura de la branch y su contenido.
Consigna a resolver.
Comentarios sobre complicaciones.
