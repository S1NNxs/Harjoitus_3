#define LED 5
#define ON LOW
#define OFF HIGH


void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  }

int viive = 1000;

void loop(){ 
  int val = Serial.read();
  
  if (val != -1){
  if (val == 'I'){digitalWrite(LED, ON); Serial.println("LED ON");}
  else if (val =='O'){digitalWrite(LED, OFF); Serial.println("LED OFF");}
                }
            }
  
  
 
