int g=A0;
int r=A1;
int h=255;
int l=0;
String data;

void setup() {

  Serial.begin(9600);
  pinMode(g,OUTPUT); 
  pinMode(r,OUTPUT);
}

void loop() {
  Serial.println("a/b/c/d?");
  while(Serial.available()==0) { }

  data = Serial.readString();
  if(data=="a"){
    analogWrite(g,h);
    analogWrite(r,l);
  }

  if(data=="b"){
    analogWrite(g,l);
    analogWrite(r,1);
  }
  if(data=="c"){
    analogWrite(g,l);
    analogWrite(r,h);
  }
  if(data=="d"){
    analogWrite(g,l);
    analogWrite(r,1);
  }
}
