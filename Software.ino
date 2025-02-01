#include <avr/pgmspace.h>
#include <TMRpcm.h>
#include <stdio.h>
#include <SPI.h>
#include <SD.h>
#define SD_ChipSelectPin 4


TMRpcm wav; //Criando objeto wav

int cont = 0,c;
char entrada[10];


static const char _Ei[] PROGMEM = "Ei.wav";
static const char _e[] PROGMEM = "e.wav";  
static const char _0[] PROGMEM = "0.wav";         
static const char _1[] PROGMEM = "1.wav";         
static const char _2[] PROGMEM = "2.wav";         
static const char _3[] PROGMEM = "3.wav";         
static const char _4[] PROGMEM = "4.wav";         
static const char _5[] PROGMEM = "5.wav";         
static const char _6[] PROGMEM = "6.wav";      
static const char _7[] PROGMEM = "7.wav";      
static const char _8[] PROGMEM = "8.wav";      
static const char _9[] PROGMEM = "9.wav";       
static const char _10[] PROGMEM = "10.wav";   
static const char _11[] PROGMEM = "11.wav";
static const char _12[] PROGMEM = "12.wav";
static const char _13[] PROGMEM = "13.wav";
static const char _14[] PROGMEM = "14.wav";
static const char _15[] PROGMEM = "15.wav";
static const char _16[] PROGMEM = "16.wav";
static const char _17[] PROGMEM = "17.wav";
static const char _18[] PROGMEM = "18.wav";
static const char _19[] PROGMEM = "19.wav";
static const char _20[] PROGMEM = "20.wav";
static const char _30[] PROGMEM =  "30.wav";
static const char _40[] PROGMEM = "40.wav";
static const char _50[] PROGMEM = "50.wav";
static const char _60[] PROGMEM = "60.wav";
static const char _70[] PROGMEM = "70.wav";
static const char _80[] PROGMEM = "80.wav";
static const char _90[] PROGMEM = "90.wav";
static const char _100[] PROGMEM = "100.wav";
static const char _101[] PROGMEM = "101.wav";
static const char _200[] PROGMEM = "200.wav";
static const char _300[] PROGMEM = "300.wav";
static const char _400[] PROGMEM = "400.wav";
static const char _500[] PROGMEM = "500.wav";
static const char _600[] PROGMEM = "600.wav";
static const char _700[] PROGMEM = "700.wav";
static const char _800[] PROGMEM = "800.wav";
static const char _900[] PROGMEM = "900.wav";
static const char _1000[] PROGMEM = "1000.wav";


const char *wav_table[] = {  
  _0,      _1,        _2,         _3,        _4,        _5,          _6,            _7,         _8,        _9,        _10,
  _11,     _12,       _13,        _14,       _15,       _16,         _17,           _18,        _19,       _20,       _30,
  _40,     _50,       _60,        _70,       _80,       _90,         _100,          _101,       _200,      _300,      _400, 
  _500,    _600,      _700,       _800,      _900,      _1000,  _e, }; 

const int *wav_delay[] = {
  948,     652,       700,        500,       700,       700,         700,          700,       700,      700,       700,
  700,     700,       800,        800,       800,       900,         900,          900,       900,      500,       900,
  700,     800,       800,        800,       800,       800,         300,          800,       800,      700,      1000, 
  1000,    1000,      1200,       1400,      1271,      662,         300, };

void narrador(int indice){ 
  
  char wavFile[40]; 
  strcpy_P(wavFile, wav_table[indice]);  
  wav.play(wavFile); 
  delay(wav_delay[indice]);

  }

void umd(char valor[]){
        switch(valor[c]){
                           case '1':if(cont>=2)narrador(39);narrador(1);break;//verifica caso dgito seja um
                           case '2':if(cont>=2)narrador(39);narrador(2);break;
                           case '3':if(cont>=2)narrador(39);narrador(3);break;
                           case '4':if(cont>=2)narrador(39);narrador(4);break;
                           case '5':if(cont>=2)narrador(39);narrador(5);break;
                           case '6':if(cont>=2)narrador(39);narrador(6);break;
                           case '7':if(cont>=2)narrador(39);narrador(7);break;
                           case '8':if(cont>=2)narrador(39);narrador(8);break;
                           case '9':if(cont>=2)narrador(39);narrador(9);break;
                    }
 }
void doisd(char valor[]){


        if(valor[c]=='1'){
                    switch(valor[c-1]){
                              case '0':c--;if(cont>=3)narrador(39);narrador(10);break;
                              case '1':c--;if(cont>=3)narrador(39);narrador(11);break;//verifica caso dgito seja um
                              case '2':c--;if(cont>=3)narrador(39);narrador(12);break;
                              case '3':c--;if(cont>=3)narrador(39);narrador(13);break;
                              case '4':c--;if(cont>=3)narrador(39);narrador(14);break;
                              case '5':c--;if(cont>=3)narrador(39);narrador(15);break;
                              case '6':c--;if(cont>=3)narrador(39);narrador(16);break;
                              case '7':c--;if(cont>=3)narrador(39);narrador(17);break;
                              case '8':c--;if(cont>=3)narrador(39);narrador(18);break;
                              case '9':c--;if(cont>=3)narrador(39);narrador(19);break;
                    }
        }
        else{ 
            switch(valor[c]){//se for zero nao faz nada
                              case '2':c--;if(cont>=3)narrador(39);narrador(20);break;
                              case '3':c--;if(cont>=3)narrador(39);narrador(21);break;
                              case '4':c--;if(cont>=3)narrador(39);narrador(22);break;
                              case '5':c--;if(cont>=3)narrador(39);narrador(23);break;
                              case '6':c--;if(cont>=3)narrador(39);narrador(24);break;
                              case '7':c--;if(cont>=3)narrador(39);narrador(25);break;
                              case '8':c--;if(cont>=3)narrador(39);narrador(26);break;
                              case '9':c--;if(cont>=3)narrador(39);narrador(27);break;
                    }
            if(valor[c-1 != '0']) {
                              switch(valor[c]){
                                                  case '1':if(cont>=2)narrador(39);narrador(1);break;//verifica caso dgito seja um
                                                  case '2':if(cont>=2)narrador(39);narrador(2);break;
                                                  case '3':if(cont>=2)narrador(39);narrador(3);break;
                                                  case '4':if(cont>=2)narrador(39);narrador(4);break;
                                                  case '5':if(cont>=2)narrador(39);narrador(5);break;
                                                  case '6':if(cont>=2)narrador(39);narrador(6);break;
                                                  case '7':if(cont>=2)narrador(39);narrador(7);break;
                                                  case '8':if(cont>=2)narrador(39);narrador(8);break;
                                                  case '9':if(cont>=2)narrador(39);narrador(9);break;
                    }
            }
        }
    }


void tresd(char valor[]){
            switch(valor[c]){//se for zero nao faz nada
                              case '1':if(valor[c-1]=='0'&&valor[c-2]=='0')narrador(28); else narrador(29);break;//verifica caso dgito seja um
                              case '2':if(cont>=4);narrador(30);break;
                              case '3':if(cont>=4);narrador(31);break;
                              case '4':if(cont>=4);narrador(32);break;
                              case '5':if(cont>=4);narrador(33);break;
                              case '6':if(cont>=4);narrador(34);break;
                              case '7':if(cont>=4);narrador(35);break;
                              case '8':if(cont>=4);narrador(36);break;
                              case '9':if(cont>=4);narrador(37);break;
              }          
}


void quatrod(char valor[]){
              switch(valor[c]){//se for zero nao faz nada
                              case '1':if(cont>=5)narrador(39);narrador(38);break;//verifica caso dgito seja um
                              case '2':if(cont>=5)narrador(39);narrador(2);narrador(38);break;
                              case '3':if(cont>=5)narrador(39);narrador(3);narrador(38);break;
                              case '4':if(cont>=5)narrador(39);narrador(4);narrador(38);break;
                              case '5':if(cont>=5)narrador(39);narrador(5);narrador(38);break;
                              case '6':if(cont>=5)narrador(39);narrador(6);narrador(38);break;
                              case '7':if(cont>=5)narrador(39);narrador(7);narrador(38);break;
                              case '8':if(cont>=5)narrador(39);narrador(8);narrador(38);break;
                              case '9':if(cont>=5)narrador(39);narrador(9);narrador(38);break;
              }          
        
 }


void cincod(char valor[]){
        if(valor[c-1]=='0'&&valor[c]=='1'){
            switch(valor[c]){
                              case '1':narrador(10);narrador(38);break;//verifica caso dgito seja um
            }
        }

        else if(valor[c]=='1'){
            switch(valor[c-1]){//se for zero nao faz nada
                              case '1':c--;if(cont>=6)narrador(39);narrador(11);narrador(38);break;//verifica caso dgito seja um
                              case '2':c--;if(cont>=6)narrador(39);narrador(12);narrador(38);break;
                              case '3':c--;if(cont>=6)narrador(39);narrador(13);narrador(38);break;
                              case '4':c--;if(cont>=6)narrador(39);narrador(14);narrador(38);break;
                              case '5':c--;if(cont>=6)narrador(39);narrador(15);narrador(38);break;
                              case '6':c--;if(cont>=6)narrador(39);narrador(16);narrador(38);break;
                              case '7':c--;if(cont>=6)narrador(39);narrador(17);narrador(38);break;
                              case '8':c--;if(cont>=6)narrador(39);narrador(18);narrador(38);break;
                              case '9':c--;if(cont>=6)narrador(39);narrador(19);narrador(38);break;
                    }
            }
            else{
                      switch(valor[c]){//se for zero nao faz nada
                              case '2':if(cont>=7)narrador(39);narrador(20);if((valor[c-1])=='0')narrador(38);break;//verifica caso dgito seja um
                              case '3':if(cont>=7)narrador(39);narrador(21);if((valor[c-1])=='0')narrador(38);break;
                              case '4':if(cont>=7)narrador(39);narrador(22);if((valor[c-1])=='0')narrador(38);break;
                              case '5':if(cont>=7)narrador(39);narrador(23);if((valor[c-1])=='0')narrador(38);break;
                              case '6':if(cont>=7)narrador(39);narrador(24);if((valor[c-1])=='0')narrador(38);break;
                              case '7':if(cont>=7)narrador(39);narrador(25);if((valor[c-1])=='0')narrador(38);break;
                              case '8':if(cont>=7)narrador(39);narrador(26);if((valor[c-1])=='0')narrador(38);break;
                              case '9':if(cont>=7)narrador(39);narrador(27);if((valor[c-1])=='0')narrador(38);break;
                      }
            }
 }


void inverter(char dados[20])
    
      {//funcao inverter string
      char auxc;
      int ac,bc,contc;
      contc=strlen(dados);
      bc=contc;
      for (ac=0;ac<contc/2;ac++)
        
        {
            bc--;
          auxc=dados[ac];
          dados[ac]=dados[bc];
          dados[bc]=auxc;
        }
    }


void extenso(char valor[]){

    cont=strlen(valor);
    inverter(valor);

    if(valor[0]=='0'&&cont<=1)
      {
        narrador(0);
      }

    for(c=cont;c >= 0 ;c--){
      switch (c){

              case 4:cincod(valor);break;
              case 3:quatrod(valor);break;
              case 2:tresd(valor);break;
              case 1:doisd(valor);break;
              case 0:umd(valor);break;      //verifica qual casa decimal está a correr
       }
    }
 }

void sd_wav_player(int speaker_pin, int SD_pin, int qualidade, int volume, int serial_begin){

    Serial.begin(serial_begin);
    wav.speakerPin = speaker_pin; pinMode(SD_pin,OUTPUT);

    if (!SD.begin(SD_ChipSelectPin)) 
    { 

      Serial.println("\nCartao SD Falhou!");  
      return;

    }else{Serial.println("\nCartao SD Inicializado...");}

    wav.quality(qualidade);
    wav.setVolume(volume); 
 }
 
void loop(){

    
    if (Serial.available() > 0) {
    int tamanho = Serial.readBytesUntil('\n', entrada, sizeof(entrada) - 1);
    entrada[tamanho] = '\0';  // Adiciona o terminador de string

    Serial.print("Número digitado: ");
    Serial.println(entrada);

    extenso(entrada);  // Chama sua função extenso()
    }
 }
 
void setup() {

    sd_wav_player(9, 4, 1, 5, 9600);
    Serial.println("Digite um número e pressione ENTER:");

 }