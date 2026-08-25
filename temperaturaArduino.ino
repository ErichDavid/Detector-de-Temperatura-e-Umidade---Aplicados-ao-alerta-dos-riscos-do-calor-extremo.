#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_BMP280.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

Adafruit_BMP280 bmp; 

void setup() {
  Serial.begin(9600);
  
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha ao iniciar OLED"));
    while(1);
  }
  
  
  if (!bmp.begin(0x76)) { 
    Serial.println(F("Sensor BMP não encontrado!"));
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  display.clearDisplay();
  
  
  display.setCursor(0,0);
  display.setTextSize(1);
  display.println(F("Dados do Sensor:"));

  display.setCursor(0 , 25);
  display.print(F("Temp: "));
  display.print(bmp.readTemperature(), 1);
  display.println(" C");
  
  display.setCursor(0, 40);
  display.print(F("Pressao: "));
  display.print(bmp.readPressure() / 100.0, 1); 
  display.println(" hPa");
  
  display.display();
  delay(2000);
}
