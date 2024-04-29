#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd_0x27(0x27, 16, 2);

void setup()
{

  lcd_0x27.init();
  lcd_0x27.backlight();

  Serial.begin(9600);

  tone(3, 495, 500);

    lcd_0x27.setCursor(3, 0);
    lcd_0x27.print("Hola");

    lcd_0x27.setCursor(0, 1);
    lcd_0x27.print("Bienvenidos");
  Serial.println("Bienvenidos");
  delay(2000);

  pinMode(2,INPUT);

  pinMode(4,OUTPUT);

  pinMode(5,INPUT);

  pinMode(6,OUTPUT);

  pinMode(7,INPUT);

  pinMode(8,OUTPUT);

  pinMode(9,INPUT);

  pinMode(10,OUTPUT);

  pinMode(11,INPUT);

}


void loop()
{



      lcd_0x27.clear();

      lcd_0x27.setCursor(0, 0);
      lcd_0x27.print("Pulse el boton");

      lcd_0x27.setCursor(0, 1);
      lcd_0x27.print("Para comenzar");
    Serial.println("Pulse el boton para comenzar");
    while (digitalRead(2) == 0) {
     }

    tone(3, 741, 700);

      lcd_0x27.clear();

      lcd_0x27.setCursor(0, 0);
      lcd_0x27.print("Iniciado...");

      lcd_0x27.setCursor(0, 1);
      lcd_0x27.print("Comience");
    Serial.println("Ejercicio Iniciado..  Conecte los pares");
    delay(2000);

      lcd_0x27.clear();

      lcd_0x27.setCursor(0, 0);
      lcd_0x27.print("Pulse para ver");

      lcd_0x27.setCursor(0, 1);
      lcd_0x27.print("el resultado: ");
    Serial.println("Pulse el boton para ver los resultados...");
    while (digitalRead(2) == 0) {
     }
    digitalWrite(4,HIGH);
    if (digitalRead(5) == 0) {
      digitalWrite(4,LOW);

    }
    digitalWrite(6,HIGH);
    if (digitalRead(7) == 0) {
      digitalWrite(6,LOW);

    }
    digitalWrite(8,HIGH);
    if (digitalRead(9) == 0) {
      digitalWrite(8,LOW);

    }
    digitalWrite(10,HIGH);
    if (digitalRead(11) == 0) {
      digitalWrite(10,LOW);

    }

    tone(3, 588, 1000);

      lcd_0x27.clear();

      lcd_0x27.setCursor(0, 0);
      lcd_0x27.print("Ejercicio");

      lcd_0x27.setCursor(0, 1);
      lcd_0x27.print("Finalizado");
    Serial.println("Ejercicio Finalizado");
    delay(5000);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);

      lcd_0x27.clear();


}
