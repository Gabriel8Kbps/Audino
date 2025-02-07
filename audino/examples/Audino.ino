#include <stdio.h>
#include <audino.h> //Diretório da biblioteca...

#define SD_ChipSelectPin 4

void loop(){

    
    char entrada[10];
    if (Serial.available() > 0) {
    int tamanho = Serial.readBytesUntil('\n', entrada, sizeof(entrada) - 1);
    entrada[tamanho] = '\0';  // Adiciona o terminador de string
    Serial.print("Número digitado: ");
    Serial.println(entrada);
    extenso(entrada); //exemplo ou entrada
    }
 }
 
void setup() {

    sd_wav_player(9, 4, 1, 5, 9600);
    Serial.println("Digite um número e pressione ENTER:");
 }
