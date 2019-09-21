#include <Arduino.h>
#include <Adafruit_PN532.h>
#include <Servo.h>
#include <SPI.h>

#include "UID.h"
#include "_Objects.h"

#define PN532_SCK 2
#define PN532_MOSI 3
#define PN532_MISO 4
#define PN532_SS 5
#define PN532_IRQ 6
#define PN532_RESET 7

#define DOOR_LOCK_PIN 9

Servo doorLock;
Adafruit_PN532 nfc(PN532_SCK, PN532_MISO, PN532_MOSI, PN532_SS);
list_base <_Objects> Objects;

void setup() {
  while(!Serial);// wait until system ready
  
  nfc.begin();// begin the nfc
  while(!(nfc.getFirmwareVersion()));// wait until PN_532 is ready

  nfc.setPassiveActivationRetries(0xFF);
  nfc.SAMConfig();

  doorLock.attach(DOOR_LOCK_PIN);
  
}


void loop() {
}