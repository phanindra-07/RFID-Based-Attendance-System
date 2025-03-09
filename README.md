# RFID-Based-Attendance-System
RFID-Based Attendance System is an automated solution that records attendance using Radio Frequency Identification (RFID) technology. This system replaces traditional attendance methods with a fast, reliable, and efficient alternative, minimizing human error and saving time
 An *RFID Wi-Fi-based Attendance System* is a modern approach to recording attendance using Radio Frequency Identification (RFID) technology integrated with Wi-Fi connectivity. This system eliminates the need for manual roll-calls or paper-based attendance systems. It's efficient, accurate, and time-saving. Below is a high-level explanation of how the system works:

# Why did we decide to make it?
Attendance in University is generally paper based which may sometimes cause errors. Taking attendance manually consumes more time. So, In this project we have designed RFID Based Attendance System using Arduino and RFID  Module. In this system, each student is issued an RFID card as their id card and their attendance is marked when they touch their card to RFID reader.

# What is RFID?
RFID stands for Radio Frequency Identification .Here digital data stored in RFID tags are captured by a reader via radio waves.
# RFID Reader
   - The RFID reader scans the RFID tags when a person enters or exits a predefined area, like a classroom, office, or gate.
   - The reader is connected to the system via Wi-Fi, so it can transmit the data in real-time to a central server or database.

# Wi-Fi Connectivity
   - The RFID reader uses Wi-Fi to communicate with the database or server. The connection allows real-time attendance logging and updates without the need for physical connections or cables.

# Centralized Database
   - Data from the RFID reader is transmitted to a centralized cloud-based or local database where the attendance records are stored, processed, and analyzed.
   - The system can also send notifications, reports, and dashboards to administrators or supervisors.
:red_circle: DEPRECATED - No longer actively maintained
===
RFID Based Attendance System
===
RFID Based Attendance System using Arduino and RFID MFRC522 Module.

# Why did we decide to make it?
Attendance in University is generally paper based which may sometimes cause errors. Taking attendance manually consumes more time. So, In this project we have designed RFID Based Attendance System using Arduino and RFID MFRC522 Module. In this system, each student is issued an RFID card as their id card and their attendance is marked when they touch their card to RFID reader.

# What is RFID?
RFID stands for Radio Frequency Identification.Here digital data stored in RFID tags are captured by a reader via radio waves.

# Components we used in the project
* Arduino Uno Board

* RFID wifi module

* SD card module

* RTC module

* LCD display (20*4) with i2c lcd module

# Components Connect With Arduino UNO

## RFID MFRC522
---------------

|Pin   |    Wiring to Arduino Uno|
|------|-------------------------|
|SDA   |    Digital 10|
|SCK   |    Digital 13|
|MOSI  |    Digital 11|
|MISO  |    Digital 12|
|IRQ   |    unconnected
|GND   |    GND
|RST   |    Digital 9
|3.3V  |    3.3V

Caution: You must power this device to 3.3V!


## Real Time Clock (RTC) Module (DS1307 and DS3231)
--------------------------------------------------

|Pin    |   Wiring to Arduino Uno|
|-------|------------------------|
SCL    |   A5
SDA    |   A4
VCC    |   5V
GND    |   GND

If you’re using other Arduino board rather than the uno, chek out what are their SCL and SDA pins.
    
|Pin    |Nano   |Mega   |Leonardo   |
|-------|-------|-------|-----------|
|SDA |A4 |20 |20 |
|SCL    |A5 |21 |21 |

## SD Card module
-----------------

|SD card module  |   Wiring to Arduino Uno|
|----------------|------------------------|
VCC             |   3.3V or 5V (check module’s datasheet)
CS              |   4
MOSI            |   11
CLK             |   13
MISO            |   12
GND             |   GND

## I2C module
-------------

|I2C Character LCD |  Arduino|
|------------------|---------|
GND         	  |  GND
VCC        	  |  5 V
SDA        	  |  A4
SDL         	  |  A5


<
<table>
  <tr>
<!--     <td align="center"><img src="https://avatars.githubusercontent.com/u/1500684?v=3" width="100px;" alt=""/><br /><sub><b>Chamila Bandara</b></sub></a><br /><a href="#question-kentcdodds" title="Answering Questions">💬</a> <a href="https://github.com/all-contributors/all-contributors/commits?author=chami-95" title="Documentation">📖</a> <a href="https://github.com/all-contributors/all-contributors/pulls?q=is%3Apr+reviewed-by%3Akentcdodds" title="Reviewed Pull Requests">👀</a> <a href="#talk-kentcdodds" title="Talks">📢</a></td> -->
    </tr>
</table>
