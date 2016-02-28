

//#include "FishFeeder\FishFeeder.h"



//#include <FishFeeder.h>
#include <RTCExt.h>
#include <Wire.h>
#include <TimeLib.h>
#include <Time.h>
#include <DS3232RTC.h>
#include <DigitalTime.h>
#include <RunScheduleExt.h>
#include <EEWrap.h>
#include <EEPROM.h>
#include <TimerExt.h>
#include "StandardCplusplus.h"
#include <vector>
#include "Servo.h"


#include "SerialExt.h"
using namespace Utils;

#include <SimpleTimer.h>
#include <AnalogSwitch.h>
#include <ServoMotor.h>
#include <RODoser.h>
#include <FishFeeder.h>







void setup() {
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
	//FishFeeder::CreateFeeders(2, 7);
}

// the loop function runs over and over again forever
void loop() {
	SerialExt::Print("test", "test");
	digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(1000);              // wait for a second
	digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	delay(1000);              // wait for a second
	FishFeeder feeder(Servo(), 7, 2);
	//FishFeeder::Feeders.push_back(feeder);
	//bool t = feeder.ShouldRunMotor(7);

}
