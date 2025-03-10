#include <ESP8266WiFi.h>
#include <SPI.h>
#include <MFRC522.h>
#include <ThingSpeak.h>

// Define RFID module pins
#define SS_PIN D4
#define RST_PIN D3

MFRC522 rfid(SS_PIN, RST_PIN);
WiFiClient client;

// WiFi Credentials
const char* ssid = "your_wifi_ssid";
const char* password = "your_wifi_password";

// ThingSpeak Credentials
const char* apiKey = "your_thingspeak_api_key"; 
const char* server = "api.thingspeak.com";
unsigned long channelID = your_channel_id; 

void setup() {
    Serial.begin(115200);
    SPI.begin();
    rfid.PCD_Init();

    WiFi.begin(ssid, password);
    Serial.print("Connecting to WiFi...");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nWiFi Connected!");

    ThingSpeak.begin(client);
}

void loop() {
    if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
        return;
    }

    Serial.print("RFID UID: ");
    String uid = "";
    for (byte i = 0; i < rfid.uid.size; i++) {
        uid += String(rfid.uid.uidByte[i], HEX);
    }
    Serial.println(uid);

    // Send data to ThingSpeak
    ThingSpeak.setField(1, uid);
    int response = ThingSpeak.writeFields(channelID, apiKey);
    
    if (response == 200) {
        Serial.println("Data sent to ThingSpeak successfully.");
    } else {
        Serial.println("Failed to send data.");
    }

    rfid.PICC_HaltA();
    rfid.PCD_StopCrypto1();

    delay(5000); // Delay before next scan
}
