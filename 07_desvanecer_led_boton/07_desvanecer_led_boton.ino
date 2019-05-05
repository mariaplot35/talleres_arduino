//Código para desvanecer luz con botón presionado

const int LED = 9;     //Pin que usamos para el LED
const int BUTTON = 7;  //Pin que usamos para el botón
int val = 0;           //Guarda estado del input del pin
int old_val = 0;       //Guarda estado previo de val
int estado = 0;        //0 es LED apagado, 1 es LED encendido
int brillo = 128;      //Guarda el valor del brillo
unsigned long startTime = 0;    //¿Cuándo presionamos el botón? 

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);  
  }

void loop(){
  val = digitalRead(BUTTON);

  //Revisar si hubo una transición
  if ((val == HIGH) && (old_val == LOW)){
    estado = 1 - estado;
    startTime = millis();
    delay(10);
    }

  //Revisar si el boton esta siendo presionado
  if((val == HIGH) && (old_val == LOW)){
    
    if(estado == 1 && (millis() - startTime) > 500){
      brillo++;
      delay(10);

      if(brillo > 255){
        brillo = 0;
        }
      }
    }

  old_val = val;
  if(estado = 1){
    analogWrite(LED, brillo);
    } else {
      analogWrite(LED, 0);
      }
  }
