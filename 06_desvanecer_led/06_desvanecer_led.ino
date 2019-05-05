// Atenuar una luz una y otra vez.

const int LED = 9; // El pin utilizado por el LED

int i = 0; // Objeto para contar hacia arriba y hacia abajo

void setup (){
  pinMode(LED, OUTPUT); // Indicamos que LED es un output  
  }


void loop(){
  for (i = 0; i < 255; i++) { //Loop desde 0 a 254 (aumentar)
    analogWrite(LED, i);      //Configuramos el brillo del LED 
    delay(10);                // Esperar 10ms para ver el cambio.
    }

  for (i = 255; i = 0, i--){
    analogWrite(LED, i);
    delay(10);
    }
  
  }
