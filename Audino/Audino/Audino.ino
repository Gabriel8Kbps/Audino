#include <stdio.h>
#include "audino\audino.h" //Diretório da biblioteca...

#define SD_ChipSelectPin 4

void loop(){

    if (Serial.available() > 0) {
    int tamanho = Serial.readBytesUntil('\n', entrada, sizeof(entrada) - 1);
    entrada[tamanho] = '\0';  // Adiciona o terminador de string
    //char exemplo[]="2342";
    Serial.print("Número digitado: ");
    Serial.println(entrada);
    extenso(entrada); //exemplo ou entrada
    }
 }
 
void setup() {

    sd_wav_player(9, 4, 1, 5, 9600);
    Serial.println("Digite um número e pressione ENTER:");
 }
