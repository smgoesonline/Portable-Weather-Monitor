#include <Wire.h>                   // Facilitates communication with I2C devices
#include <Adafruit_GFX.h>           // Adafruit library for graphics on the OLED display
#include <Adafruit_SSD1306.h>       // SSD1306 is the OLED controller
#include <Adafruit_Sensor.h>        // Additional sensor communication libraries
#include <DHT.h>                    // For DHT sensors

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define DHTPIN D6             // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11         // Type of DHT sensor (DHT11, DHT22)
#define BZZPIN D7             // Buzzer operated through this pin.
#define HMDPIN D3             // Humidity LED pin
#define TMPPIN D4             // Temperature LED pin
#define LHTPIN A0             // LDR pin

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(BZZPIN, OUTPUT);
  pinMode(TMPPIN, OUTPUT);
  pinMode(HMDPIN, OUTPUT);
  pinMode(LHTPIN, INPUT);
  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  delay(2000);
  display.clearDisplay();
  display.setTextColor(WHITE);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  float l = analogRead(A0);
  float lu = 10 * l;

  if (t > 50) {
    digitalWrite(BZZPIN, HIGH);
    digitalWrite(TMPPIN, HIGH);
    delay(1000);
    digitalWrite(BZZPIN, LOW);
    digitalWrite(TMPPIN, LOW);
    delay(1000);
  }

  if (h > 75) {
    digitalWrite(BZZPIN, HIGH);
    digitalWrite(HMDPIN, HIGH);
    delay(1000);
    digitalWrite(BZZPIN, LOW);
    digitalWrite(HMDPIN, LOW);
    delay(1000);
  }

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
  }

  Serial.println("Temperature and Humidity and Lumens:");
  Serial.print(t);
  Serial.print(",");
  Serial.print(h);
  Serial.print(",");
  Serial.println(lu);
  delay(1000);

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(10, 15);
  display.print("Temp: ");
  display.setCursor(40, 15);
  display.print(t);
  display.print(" C");

  display.setCursor(10, 30);
  display.print("Humid: ");
  display.setCursor(45, 30);
  display.print(h);
  display.print(" %");

  display.setCursor(10, 45);
  display.print("Lumens:");
  display.setCursor(50, 45);
  display.print(lu);
  display.display();
}

