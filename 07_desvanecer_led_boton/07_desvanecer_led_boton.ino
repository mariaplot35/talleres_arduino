//Código para desvanecer luz con botón presionado

const int LED = 9;     // Pin que usamos para el LED
const int BUTTON = 7;  // Pin que usamos para el botón
int val = 0;           // Guarda estado del input del pin
int old_val = 0;       // Guarda estado previo de val
int estado = 0;        // 0 es LED apagado, 1 es LED encendido
int brillo = 128;      // Guarda el valor del brillo
unsigned long startTime = 0;    // ¿Cuándo presionamos el botón? 

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);  
  }

void loop(){
  
  val = digitalRead(BUTTON); // Lea el valor del input y guardelo

  //Revisar si hubo una transición
  if ((val == HIGH) && (old_val == LOW)){
    
    estado = 1 - estado;    // Cambie el estado de apagado a encendido
                            // y viceversa
                            
    startTime = millis();   // millis() es el reloj del Arduino y retorna
                            // cuántos milisegundos han transcurrido desde
                            // que el "board" ha sido "reseteado"

    // Esta es la línea que recuerda cuando
    // el botón fue presionado por 
    // última vez
    delay(10);
    }

  //Revisar si el boton esta siendo presionado
  if ((val == HIGH) && (old_val == HIGH)){

    // Si el botón está presionado por más de  ms
    if(estado == 1 && (millis() - startTime) > 500){
      
      brillo++;  // Incremente el brillo por 1
      delay(10); // Retrase para evitar que el brillo
                 // cambie muy rápido

      if(brillo > 255){ // 255 es el máximo del brillo
        
        brillo = 0;     // Si llegamos a 255
                        // volvamos a cero
        }
      }
    }

  old_val = val;               // val ahora es viejo, guardemos el estado
  if(estado == 1){
    
    analogWrite(LED, brillo);  // Encender LED al nivel del birrlo actual
    
    } else {
      analogWrite(LED, 0);     // Apaguemos el LED
      }
  }
