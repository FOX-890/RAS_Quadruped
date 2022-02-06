#include <Servo.h>  //Include header files

//Define pin assignments
#define servoPWM  3
#define selPin    6
#define joystickX A0
#define joystickY A1

//Create servo object to use library
Servo servo;

uint16_t posX, posY = 0;     //Joystick position variables
uint16_t servo0degree = 0;   //Variable for knowing when motor is in the 0 degree position
uint16_t servo180degree = 0; //Variable for servo 180 position
uint8_t switchPress = 0;//Switch press, either 1 or 0

//Initial code setup
void setup() {
  //Setup pin modes
  pinMode(servoPWM, OUTPUT);
  pinMode(selPin, INPUT_PULLUP);
  pinMode(joystickX, INPUT);
  pinMode(joystickY, INPUT);
  
  //Attach servo signal wire to specified pin
  servo.attach(servoPWM);

  /* Setup serial monitor for communication with computer
   * Uses Arduino UART communication to send/receive data
   * Just being used for debugging/testing in this case
   * 
   * @param Baud Rate
   * Sets transmission rate for serial communication
   */
  Serial.begin(9600);
}

//Main program loop
void loop() {
  //Read the values from all pins, 
  //analog read for analog pins, digital read for digital pins
  posX = analogRead(joystickX);
  posY = analogRead(joystickY);
  switchPress = digitalRead(selPin);
  //Print out values for debugging
  debugPrint(joystickX, joystickY, 0, 0);
  //Delay as to not bog down output
  delay(100);
}

/*
 * Take 4 separate readings to be formatted
 * then printed. If less than 4 values are used
 * replace with 0
 * 
 * @param val1 val2 val3 val4
 * Values to be printed to the serial terminal
 */
void debugPrint(int val1, int val2, int val3, int val4)
{
  Serial.print("Value 1: ");
  Serial.print(val1);
  Serial.print("   Value 2: ");
  Serial.print(val2);
  Serial.print("   Value 3: ");
  Serial.print(val3);
  Serial.print("   Value 4: ");
  Serial.println(val4);
}
