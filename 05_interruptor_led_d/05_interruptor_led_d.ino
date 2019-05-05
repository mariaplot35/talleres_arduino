// Encender la luz LED con un interruptor mientras está presionado

const int LED = 13; // El pin utilizado por el LED

const int BUTTON = 7;  // El pin de input donde el interruptor está conectado

int val = 0; // Valor utilizado para guardar el estado del input del pin

int old_val = 0; // Variable que guarda antiguo estado de val

int estado = 0; // Marcamos 0 como LED apagado y 1 sería LED encendido

void setup() {
  pinMode(LED, OUTPUT); // Le decimos al Arduino que LED  es un output
  pinMode(BUTTON, INPUT); // y que button es un INPUT
}

void loop() {
  val = digitalRead(BUTTON); // Lea el input de BUTTON y guardelo en val

  // Cerciorarse si hubo una transición del estado
  if((val == HIGH) && (old_val == LOW)){
    estado = 1 - estado; 
    delay(10); 
  }

  old_val = val; // Ya la variable val es vieja por lo que la guardamos.

  // Si estado quedó en uno, encender LED, sino apagarlo
  if(estado == 1){
    digitalWrite(LED, HIGH);  
  } else {
    digitalWrite(LED, LOW);  
  }

}
