#include <Arduino.h>



void setup() {


// initialize serial communication:
Serial.begin(9600);

Serial.println("  starting  ");

    // Volume setting
Serial.write(0x7E); // startcode
Serial.write(0x03); // Datalength
Serial.write(0xA7); // Adjuste Volume
Serial.write(0x19); // volume 0-31
Serial.write(0x7E); // Endcode
Serial.println("  volume set");

// set playing mode
Serial.write(0x7E); // startcode
Serial.write(0x03); // Datalength
Serial.write(0xA9); // Command
Serial.write(0x03); // single and no cycle
Serial.write(0x7E); // Endcode
delay(50); // pause to wait mp3 start
Serial.println("  mode set");

/*
    // play file 001.mp3 -- Start sound
Serial.println("playing first file");
Serial.write(0x7E); // Startcode
Serial.write(0x04); // Datalength
Serial.write(0xA8); // Command
Serial.write((byte)0x00); // High byte
Serial.write(0x03); // low byte
Serial.write(0x7E); // Endcode
delay(9000); // pause to wait mp3 start


Serial.print(" looping ");
Serial.write(0x7E); // Startcode
Serial.write(0x04); // Datalength
Serial.write(0xA0); // Command
Serial.write((byte)0x00); // High byte
Serial.write(0x02); // low byte
Serial.write(0x7E); // Endcode

delay(5000); // pause to wait mp3 start

Serial.println(" 2nd song in loop   ");

Serial.write(0x7E); // Startcode
Serial.write(0x04); // Datalength
Serial.write(0xA0); // Command
Serial.write(0x00); // High byte
Serial.write(0x01); // low byte
Serial.write(0x7E); // Endcode
delay(7000); // pause to wait mp3 start

// set playing mode
Serial.write(0x7E); // startcode
Serial.write(0x03); // Datalength
Serial.write(0xA9); // Command
Serial.write(0x00); // single and no cycle
Serial.write(0x7E); // Endcode
delay(50); // pause to wait mp3 start
Serial.println("  mode set");
*/
}


void loop() {
/*
  Serial.write(0x7E); // Startcode
Serial.write(0x04); // Datalength
Serial.write(0xA0); // Command
Serial.write(byte(0x00)); // High byte
Serial.write(0x01); // low byte
Serial.write(0x7E); // Endcode
delay(700); // pause to wait mp3 start

Serial.write(0x7E); // Startcode
Serial.write(0x04); // Datalength
Serial.write(0xA0); // Command
Serial.write(0x00); // High byte
Serial.write(0x02); // low byte
Serial.write(0x7E); // Endcode
delay(7000); // pause to wait mp3 start
*/
}
