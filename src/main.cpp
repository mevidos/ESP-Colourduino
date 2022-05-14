#include <Arduino.h>
#include <SPI.h>

#define DIP1PIN 15
#define DIP2PIN 2
#define DIP3PIN 4
#define DIP4PIN 16
#define DIP5PIN 17
#define DIP6PIN 5
#define DIP7PIN 18
#define DIP8PIN 19
#define DIP9PIN 21
#define DIP10PIN 22
#define DIP11PIN 23
#define DIP12PIN 27
#define I2SRESERVED1 25
#define I2SRESERVED2 26


void setup() {
    SPIClass SPI1(HSPI);
    SPI.begin();
    pinMode(DIP1PIN, OUTPUT);
    pinMode(DIP2PIN, OUTPUT);
    pinMode(DIP3PIN, OUTPUT);
    pinMode(DIP4PIN, OUTPUT);
    pinMode(DIP5PIN, OUTPUT);
    pinMode(DIP6PIN, OUTPUT);
    pinMode(DIP7PIN, OUTPUT);
    pinMode(DIP8PIN, OUTPUT);
    pinMode(DIP9PIN, OUTPUT);
    pinMode(DIP10PIN, OUTPUT);
    pinMode(DIP11PIN, OUTPUT);
    pinMode(DIP12PIN, OUTPUT);
}

void loop() {

}
  