Notas Resumen del libro de Mazzimo B.

**Capítulo 1. Introducción**

¿Qué es diseño interactivo?
Diseño pensado para cualquier experiencia interactiva, alentando el diseño a
traves de un proceso iterativo basado en prototipado para incrementar la
fidelidad de la interacción.

    *Concern about creating a “meaningful” experience.*

   Prototipado a través de “Physical Interaction Desing”
¿Qué es computación física? = “Physical Interaction Desing”
Se refiere al uso de la electronica empleada en el dsieño y prototipado que tiene la capacidad de comunicarse a los humanos mediante sensores  y “actuators” que pueden ser controlados por medio instrucciones que corren dentro de un componente conocido como  microcontrolador (similar a una pequeña computadora)

**Capítulo 2.  El estilo Arduino.**

La filosofía del Arduino se basa en la CREACIÓN DE MEJORES Y MÁS EFICIENTES PROTOTIPOS, esto se logra con la investigación y exploracion. Osea manos a la obra!

  "Culture of sharing and helping each other"

   Prototipado:
Este es el corazón del pensamiento Arduino, diseño y construcción de
objetos que tengan interacciones sigificativas con otros seres u objetos,
con la  meta de que cada uno sea más eficiente, simple y accesible.


**Capítulo 3.  La plataforma Arduino**

Dos componentes básicos:
La Placa Arduino:  el hardware (componente físico) en el que contruyes tu prototipo.

Cuenta con:

  _Un microcontrolador:_ que es un pequeño circuito que contiene un minichip que recibe y manda a ejecutar las instrucciones.

  Unos “Strips” para conectar los sensores y “actuators”:
      Sensores: sencoramiento fisico en el mundo real que va a ser traducido a una computadora en un lenguaje que puede entender
      Actuators: convierte una señal de la computadora en un acto fisico en el mundo real.

  Pines Digitales Input y Output (0-13)
      Input: leen información de los sensores. Solo pueden leer una instrucción High or Low
      Output:  Controlan los “actuators”. Solo pueden ejecutar una instrucción High or Low

  Pines Análogos In (0-5): miden el voltaje de sensores analógicos, a diferencia de los digitales pueden leer 1024 niveles diferentes de voltaje.

  Pines Análogos Out (3, 5, 6, 9, 10, and 11): estos son digitales, sin embargo funcionan como analogicos Out también.

   _IDE, Integrated Development Environment:_ es el software en tu computadora que
te permite construir y correer las intrucciones que seran ejecutadas en tu placa y que el prototipo interactue.

**Capítulo 4. Really getting started with Arduino.**

**Capitulo 5. Advanced Input and Output**

 Otro tipo de sensores on/of

_Momentary switch :_ este switch no es de accion prolongado, se ejecuta solo
un estímulo inmediato, por ejemplo un timbre.

_Toggle switch:_ este switch tiene la capacidad de recordar la acción hasta que
otra interracción sea ejecutada, por ejemplo  un interruptor de luz.

_Termostato:_ un switch que cambia la temperatura cuando alcanza un valor dado.

_Switch magnetico:_ está compuesto por dos contactos que se atraen cuando se
encuentran muy cerca.

_Carpet switch,  tilt switch y sensores infrarojo_

**Controlando pulsos de luz**

Hasta ahora hemos visto que podemos encender y apagar un LED, sin embargo, al aumentar el tiempo en que permanece encendido o apagado podemos modular el brillo que persivimos en el LED, haciendolo que parezca mas brillante si permanece mas tiempo en ON o atenuandolo si permanece por mucho mas tiempo en OFF.

Este proceso es conocido como PWM por sus siglas en ingles, y  es basicamente un cambio en el estado de la señal de un estado alto con voltaje = 5 y  a uno bajo con voltaje = 0. Aqui el tiempo en el que podemos mantener cualquiera de los dos estados va a ser variable y es a lo que se le llama ciclo de trabajo. En el ciclo de trabajo tendremos siempre una misma frecuencia en el pulso pero es lo que nos permitira ajustar el brillo de nuestro LED, donde en los ciclos bajos percibiremos luz tenue y en ciclos bajos luz brillante.

  **Input Analogico**
Input le llamamos al dispositivo por el que va a "entrar" nuestra señal o instrucción, mientras que nuestro Output es la salida por la cual se envia la señal para que sea ejecutada.

 Para realizar este ejercicio en nuestra placa Arduino UNO, utilizamos la funcion llamada: *analogWrite()*, implementada en los pines 3,5, 6, 9, 10 y 11, los cuales devuelven meddiciones desde 0 hasta 1023 que representan los 0 a las 5 V, permitiendonos saber no solo si hay voltaje, sino cuanto exactamente.

Diseños mas interactivo incluyen el uso de otros dispositivo que nos permiten mayor cotrol por ejemplo: 1) podria ser el uso de un boton el cual nos permitiera ya sea encender o apagar al pulsar y soltar pero a su vez modular el brillo al mantener la presión sobre él, o bien 2) empleando un resistor dependiente de luz (LDR) en donde en ausencia de luz el LED se mantiene apagado pero se enciende y aumenta su brillo conforme aumenta la intensidad de luz a la que se expone la resistencia

  **Comunicacion serial**
La comunicacion serial supone la propiedad de recibir y transmitir información a traves de dispositivos conectados, de esta forma, al ensamblar objetos con capacidades relacionadas como los sensores de luz y los LED en un dispositivo interactivo, estamos creando lo que llaman "objeto serial", que se podran comunicar con otros objetos seriales a traves de una conexion USB en el llamado puerto serial por ejemplo de nuestra placa de Arduino UNO.

  **Sensores complejos**
Otro tipo de sensores son los que proveen informacion que no logramos medir mediante las funciones de digitalRead() o analogWrite() dado que usualmente cuentan con un circuito interno o inclusive con su propio microcontrolador, tal es el caso de sensores de temperatura, ultrasonicos, accelerometros. Por lo general son construidos de esta manera para proveer informacion mas precisa

 **Cap. 6 El Arduino Leonardo.**
