// serial 통신 위한 알고리즘
// 케이블과 연결(포트,)
// 하나씩 읽음.

void setup() {
  // put your setup code here, to run once:
//  Serial.begin(9600);
//  Serial.println("Hello world! Tae Seong\n");

}

int first = 33;
int second = 34;
int third = 35;

void loop() {
  // put your main code here, to run repeatedly:
    int i = 666;
    Serial.begin(9600);
    Serial.printf("%d is good \n", i);
    
    Serial.write("%s \n",first);
    Serial.write("%s \n",second);
    Serial.write("%s \n",third);

    Serial.println(first);
    Serial.println(second);
    Serial.println(third);
    
}
