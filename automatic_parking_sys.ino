#include<LiquidCrystal.h>
LiquidCrystal lcd (0,1,2,3,4,5);
#define sensor1 8
#define sensor2 9
#define sensor3 10
#define sensor4 11
#define closeGate 6
#define openGate 7

//custom character for parking area is filled 
byte park[8] = {
0b10001,
0b10001,
0b01010,
0b00100,
0b01010,
0b10001,
0b10001,
};

//custom character for parking area is Empty 
byte npark[8] = {
0b11111,
0b10001,
0b10001,
0b10001,
0b10001,
0b10001,
0b11111,
};

int pA1,pA2,pA3,pA4;


void setup ()  {
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(sensor3,INPUT);
pinMode(sensor4,INPUT);
pinMode(openGate,OUTPUT);
pinMode(closeGate,OUTPUT);
lcd.createChar(0,park);
lcd.createChar(1,npark);

lcd.begin(16,2);
lcd.print("Gate opening");
digitalWrite(openGate,HIGH);
digitalWrite(closeGate,LOW);
delay(1000);
digitalWrite(openGate,LOW);
digitalWrite(closeGate,LOW);
lcd.clear();
}


void loop()    {
lcd.setCursor(0,0);
lcd.print("pA1 pA2 pA3 pA4");
pA1 = digitalRead(sensor1);
pA2 = digitalRead(sensor2);
pA3 = digitalRead(sensor3);
pA4 = digitalRead(sensor4);


//for parking area 1
if (pA1 == 1) {
lcd.setCursor(1,1);
lcd.write(byte(1));
}
else {
lcd.setCursor(5,1);
lcd.write(byte(0));
}


//for parking area 2
if (pA2 == 1)  {
lcd.setCursor(1,1);
lcd.write(byte(1));
}
else {
lcd.setCursor(5,1);
lcd.write(byte(0));
}

//for parking area 3
if (pA3 == 1)  {
lcd.setCursor(9,1);
lcd.write(byte(1));
}
else {
lcd.setCursor(9,1);
lcd.write(byte(0));
}


//for parking area 4
if (pA4 == 1)  {
lcd.setCursor(13,1);
lcd.write(byte(0));
}
else {
lcd.setCursor(13,1);
lcd.write(byte(0));
}


if(pA1 == 0 && pA2 == 0 && pA3 == 0 && pA4 == 0)  {
lcd.setCursor(0,0);
lcd.print("Gate closing");
digitalWrite(closeGate,HIGH);
digitalWrite(openGate,LOW);
delay(1000);
digitalWrite(closeGate,LOW);
digitalWrite(openGate,LOW);
lcd.setCursor(0,1);
lcd.print("OCCUPIED");
}


}