
  #include <TM1637Display.h>
  #include <Adafruit_NeoPixel.h>
  #include <Arduino.h>
  #define CLK1 10
  #define DIO1 9

  #include <DFRobot_DF1201S.h>
  #include <SoftwareSerial.h>
  SoftwareSerial DF1201SSerial(2, 3);  //RXarduino  TXarduino ATTENTION RX TX inversés sur DFPlayer PRO
  DFRobot_DF1201S DF1201S;

  TM1637Display display1(CLK1, DIO1);

  void setup(void)
  {
  Serial.begin(115200);
  DF1201SSerial.begin(115200);
  while(!DF1201S.begin(DF1201SSerial))
  {
  delay(100);
  }
  DF1201S.setVol(20);                         // Echelle  0 - 30
  
  DF1201S.switchFunction(DF1201S.MUSIC);
  delay(3000);
   display1.setBrightness(0x0A); 
  
  DF1201S.setLED(false);
  //DF1201S.setLED(true);
  }

  void loop()
{
  //DF1201S.start();
  delay(50);
  display1.showNumberDec(100, false, 4, 0);
  DF1201S.playSpecFile("/wife/001F.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(200, false, 4, 0);
  DF1201S.playSpecFile("/men/002H.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(300, false, 4, 0);
  DF1201S.playSpecFile("/wife/003F.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.enableAMP();
  //Disable amplifier chip 
  DF1201S.disableAMP();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(400, false, 4, 0);
  DF1201S.playSpecFile("/men/004H.mp3");                         
  delay(2000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(500, false, 4, 0);
  DF1201S.playSpecFile("/wife/005F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  
  DF1201S.enableAMP();
  //Disable amplifier chip 
  //DF1201S.disableAMP();
  //DF1201S.start();
  delay(50);
  
  
  display1.showNumberDec(600, false, 4, 0);
  DF1201S.playSpecFile("/men/006H.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(700, false, 4, 0);
  DF1201S.playSpecFile("/wife/007F.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(800, false, 4, 0);
  DF1201S.playSpecFile("/men/008H.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(900, false, 4, 0);
  DF1201S.playSpecFile("/wife/009F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1000, false, 4, 0);
  DF1201S.playSpecFile("/men/010H.mp3");                   
  delay(3000);
  DF1201S.pause();
 
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1100, false, 4, 0);
  DF1201S.playSpecFile("/wife/010F.mp3");                        
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1200, false, 4, 0);
  DF1201S.playSpecFile("/men/012H.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1300, false, 4, 0);
  DF1201S.playSpecFile("/wife/013F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1400, false, 4, 0);
  DF1201S.playSpecFile("/men/014H.mp3");                   
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1500, false, 4, 0);
  DF1201S.playSpecFile("/wife/015F.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1600, false, 4, 0);
  DF1201S.playSpecFile("/men/016H.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1700, false, 4, 0);
  DF1201S.playSpecFile("/wife/017F.mp3");                   
  delay(3000);
  DF1201S.pause();


  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1800, false, 4, 0);
  DF1201S.playSpecFile("/men/018H.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(1900, false, 4, 0);
  DF1201S.playSpecFile("/wife/019F.mp3");                   
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(2000, false, 4, 0);
  DF1201S.playSpecFile("/men/020H.mp3");                         
  delay(3000);
  DF1201S.pause();

  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(2100, false, 4, 0);
  DF1201S.playSpecFile("/wife/021F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(2200, false, 4, 0);
  DF1201S.playSpecFile("/men/022H.mp3");                   
  delay(3000);
  DF1201S.pause();


  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(2300, false, 4, 0);
  DF1201S.playSpecFile("/wife/023F.mp3");                         
  delay(3000);
  DF1201S.pause();
  
  //DF1201S.start();
  delay(50);
  
  display1.showNumberDec(2400, false, 4, 0);
  DF1201S.playSpecFile("/men/024H.mp3");                   
  delay(3000);
  DF1201S.pause();
}
  
  
