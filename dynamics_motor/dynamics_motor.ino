#include<DynamixelWorkbench.h>

DynamixelWorkbench wb;

void setup() {
  // put your setup code here, to run once:
  wb.begin("",1000000);
  wb.ping(1); // 살아있나 확인
  wb.ping(2);

  wb.jointMode(1);
  wb.jointMode(2);

}

void loop() {
  // put your main code here, to run repeatedly:
  // 초기화
  wb.goalPosition(1,0);
  wb.goalPosition(2,0);
  delay(1000);

  wb.goalPosition(1,2000);
  wb.goalPosition(2,2000);
  delay(1000);
}
