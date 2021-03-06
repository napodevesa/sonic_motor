
 
// Incluímos la librería para poder controlar el servo
#include <Servo.h>
 
Servo servoMotor1;
Servo servoMotor2;

const int PinTrig = 2;
const int PinEcho = 3;

const float VelSon = 34000.000;

float distancia;

void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  
  // Ponemos el pin Trig en modo salida
  pinMode(PinTrig, OUTPUT);
  // Ponemos el pin Echo en modo entrada
  pinMode(PinEcho, INPUT);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
 servoMotor1.attach(9);
 servoMotor2.attach(8);
  // Inicializamos al ángulo 0 el servomotor
  servoMotor1.write(0);
  servoMotor2.write(0);
}
 
void loop() {

  // Vamos a tener dos bucles uno para mover en sentido positivo y otro en sentido negativo
  // Para el sentido positivo
  
  for (int i = 0; i <= 90; i++)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor1.write(i);
    // Hacemos una pausa de 25ms
    delay(25);


  }

  iniciarTrigger();
  
  // La función pulseIn obtiene el tiempo que tarda en cambiar entre estados, en este caso a HIGH
  unsigned long tiempo = pulseIn(PinEcho, HIGH);
  
  // Obtenemos la distancia en cm, hay que convertir el tiempo en segudos ya que está en microsegundos
  // por eso se multiplica por 0.000001
  distancia = tiempo * 0.000001 * VelSon / 2.0;
  Serial.print(distancia);
  Serial.print("cm");
  Serial.println();
  delay(1000);


  


                             for (int i = 140; i <= 180; i++)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }

                                         
                 
                  // Para el sentido negativo
                  for (int i = 179; i > 140; i--)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }


              
 for (int i = 90; i <= 180; i++)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor1.write(i);
    // Hacemos una pausa de 25ms
    delay(25);

    
 
  }


  iniciarTrigger();
  

  
  // Obtenemos la distancia en cm, hay que convertir el tiempo en segudos ya que está en microsegundos
  // por eso se multiplica por 0.000001
  distancia = tiempo * 0.000001 * VelSon / 2.0;
  Serial.print(distancia);
  Serial.print("cm");
  Serial.println();
  delay(1000);


                             for (int i = 140; i <= 180; i++)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }

                                  
              
                 
                  // Para el sentido negativo
                  for (int i = 179; i > 140; i--)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }

                              
              
                  
                           
  // Para el sentido negativo
  for (int i = 179; i > 90; i--)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor1.write(i);
    // Hacemos una pausa de 25ms
    delay(25);

   
  }

  iniciarTrigger();
  
  // La función pulseIn obtiene el tiempo que tarda en cambiar entre estados, en este caso a HIGH
  
  
  // Obtenemos la distancia en cm, hay que convertir el tiempo en segudos ya que está en microsegundos
  // por eso se multiplica por 0.000001
  distancia = tiempo * 0.000001 * VelSon / 2.0;
  Serial.print(distancia);
  Serial.print("cm");
  Serial.println();
  delay(1000);

                  for (int i = 140; i <= 180; i++)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                    
                  }



                                 
                 
                  // Para el sentido negativo
                  for (int i = 179; i > 140; i--)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }


                                 
                                      
   // Para el sentido negativo
  for (int i = 179; i > 90; i--)
  {
    // Desplazamos al ángulo correspondiente
    servoMotor1.write(i);
    // Hacemos una pausa de 25ms
    delay(25);
    
   
  }


  iniciarTrigger();
  
  // La función pulseIn obtiene el tiempo que tarda en cambiar entre estados, en este caso a HIGH

  
  // Obtenemos la distancia en cm, hay que convertir el tiempo en segudos ya que está en microsegundos
  // por eso se multiplica por 0.000001
  distancia = tiempo * 0.000001 * VelSon / 2.0;
  Serial.print(distancia);
  Serial.print("cm");
  Serial.println();
  delay(1000);


               for (int i = 140; i <= 180; i++)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }



                 
                  // Para el sentido negativo
                  for (int i = 179; i > 140; i--)
                  {
                    // Desplazamos al ángulo correspondiente
                    servoMotor2.write(i);
                    // Hacemos una pausa de 25ms
                    delay(25);
                  }

                                   


// Método que inicia la secuencia del Trigger para comenzar a medir

}

void iniciarTrigger()
{
  // Ponemos el Triiger en estado bajo y esperamos 2 ms
  digitalWrite(PinTrig, LOW);
  delayMicroseconds(2);
  
  // Ponemos el pin Trigger a estado alto y esperamos 10 ms
  digitalWrite(PinTrig, HIGH);
  delayMicroseconds(10);
  
  // Comenzamos poniendo el pin Trigger en estado bajo
  digitalWrite(PinTrig, LOW);
}
