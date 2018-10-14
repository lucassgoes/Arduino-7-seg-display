int matriz[10][7] = {
  {1,1,1,1,0,1,1},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,0,1,1,1,1,1},
  {1,0,1,1,0,1,1},
  {0,1,1,0,0,1,1},
  {1,1,1,1,0,0,1},
  {1,1,0,1,1,0,1},
  {0,1,1,0,0,0,0},
  {1,1,1,1,1,1,0},
};
int juca[7]={9,10,11,12,13,A0,A1};



void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  Serial.begin(9600);
  
}


void loop() {
  for (byte digito1 = 0; digito1 <10; ++digito1){
    int  pino1 = 2;
    for (byte contadorSegmentos1 = 0; contadorSegmentos1 < 7; ++contadorSegmentos1){ 
      digitalWrite(pino1, matriz[digito1][contadorSegmentos1]);
      ++pino1;
    }
    for (byte digito = 0; digito <10; ++digito){
    int  pino = 0;
    for (byte contadorSegmentos = 0; contadorSegmentos < 7; ++contadorSegmentos){ 
      digitalWrite(juca[pino], matriz[digito][contadorSegmentos]);
      ++pino;
    }
    delay(100);
  }
  }
  
}
