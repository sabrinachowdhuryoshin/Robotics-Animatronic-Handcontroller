#include <Servo.h>
int flexSensorPin1 = A0;
int flexSensorPin2 = A0;
int flexSensorPin3 = A0;
int flexSensorPin4 = A0;
int flexSensorPin5 = A0;
int flexSensorPin6 = A0;
int pos=0;
Servo servo1,servo2,servo3,servo4,servo5,servo6;

void setup()
{
Serial.begin(9600);
servo1.attach(9);
servo2.attach(8);
servo3.attach(7);
servo4.attach(6);
servo5.attach(5);
servo6.attach(4);
pinMode(flexSensorPin1,INPUT);
pinMode(flexSensorPin2,INPUT);
pinMode(flexSensorPin3,INPUT);
pinMode(flexSensorPin4,INPUT);
pinMode(flexSensorPin5,INPUT);
pinMode(flexSensorPin6,INPUT);
}

void loop()
{
int fsr1=analogRead(flexSensorPin1);
//myServo.write(x);
//Serial.println(fsr);
int s1=map(fsr1, 605, 696, 180, 0);
Serial.println(s1);
if(s1>0 ||s1<180)
servo1.write((s1));
delay(100);

int fsr2=analogRead(flexSensorPin2);
//myServo.write(x);
//Serial.println(fsr);
int s2=map(fsr2, 605, 696, 180, 0);
Serial.println(s2);
if(s2>0 ||s2<180)
servo2.write((s2));
delay(100);

int fsr3=analogRead(flexSensorPin3)
;
//myServo.write(x);
//Serial.println(fsr);
int s3=map(fsr3, 605, 696, 180, 0);
Serial.println(s3);
if(s3>0 ||s3<180)
servo3.write((s3));
delay(100);

int fsr4=analogRead(flexSensorPin4);
//myServo.write(x);
//Serial.println(fsr);
int s4=map(fsr4, 605, 696, 180, 0);
Serial.println(s4);
if(s4>0 ||s4<180)
servo4.write((s4));
delay(100);

int fsr5=analogRead(flexSensorPin5);
//myServo.write(x);
//Serial.println(fsr);
int s5=map(fsr5, 605, 696, 180, 0);
Serial.println(s5);
if(s5>0 ||s5<180)
servo5.write((s5));
delay(100);

int fsr6=analogRead(flexSensorPin6);
//myServo.write(x);
//Serial.println(fsr);
int s6=map(fsr6, 605, 696, 180, 0);
Serial.println(s6);
if(s6>0 ||s6<180)
servo6.write((s6));
delay(100);
}