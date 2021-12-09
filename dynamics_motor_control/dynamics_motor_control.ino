#include<DynamixelWorkbench.h>

DynamixelWorkbench wb;

void setup() {
  // put your setup code here, to run once:
  wb.begin("",1000000);
  wb.ping(1); // 살아있나 확인
  wb.ping(2);

  wb.jointMode(1);
  wb.jointMode(2);

  Serial.begin(115200);

}
String cont;
void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available()){}
    cont = Serial.readString();
    if (cont == "q")
    {
      wb.goalPosition(1,0);
      wb.goalPosition(2,0);
//      delay(1000);
      Serial.println("stop");
    }
    else if(cont == "w") //앞 
    {
      wb.goalPosition(1,2000);
      wb.goalPosition(2,2000);
//      delay(1000);
      Serial.println("forward");
    }
    else if(cont == "s") //뒤 
    {
      wb.goalPosition(1,-2000);
      wb.goalPosition(2,-2000);
//      delay(1000);
      Serial.println("backward");
    }
    else if(cont == "a") //좌 
    {
      wb.goalPosition(1,0);
      wb.goalPosition(2,2000);
//      delay(1000);
      Serial.println("left");
    }
    else if(cont == "d") // 우
    
    {
      wb.goalPosition(1,10000);
      wb.goalPosition(2,0);
//      delay(1000);
      Serial.println("right");
    }
    else
    {
      Serial.println("Please Enter 'f' or 's'");
    }
}
