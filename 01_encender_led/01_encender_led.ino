//LED que parpadea

const int LED = 13; // LED conectado al pin digital #13

void setup() {
  // Aqui ponemos codigo de configuracion que corre solo una vez:
  pinMode(LED, OUTPUT); //Configura el pin digital llamado LED como output

}

void loop() {
  // Aqui va el codigo principal, el que corre repetidamente:
  digitalWrite(LED, HIGH); //Encience el LED
  delay(1000);             //Espera por un segundo
  digitalWrite(LED, LOW);  //Apaga el LED
  delay(1000);             //Espera por un segundo             

}
