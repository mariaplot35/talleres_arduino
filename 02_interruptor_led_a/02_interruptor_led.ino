// Encender la luz LED con un interruptor mientras está presionado

const int LED = 13; // El pin utilizado por el LED

const int BUTTON = 7;  // El pin de input donde el interruptor está conectado

int val = 0; // Valor utilizado para guardar el estado del input del pin

void setup() {
  pinMode(LED, OUTPUT); // Le decimos al Arduino que LED  es un output
  pinMode(BUTTON, INPUT); // y que button es un INPUT
}

void loop() {
  val = digitalRead(BUTTON); // Lea el input de BUTTON y guardelo en val

  // Cerciorarse de que el input es HIGH (boton apretado) y encienda LED
  if(val == HIGH) {
    digitalWrite(LED, HIGH); // Encienda LED    
  } else {
    digitalWrite(LED, LOW); // Caso contrario, apague LED
  }
}
