# Audino

# Projeto: Narração de Números com Arduino

Este projeto permite que um Arduino enuncie números de 0 a 99999 utilizando um Módulo Cartão Leitor SD.

## Funcionalidades
- Reproduz arquivos de áudio .wav armazenados em um cartão microSD.
- Permite a narração de números individuais por meio da reprodução dos arquivos correspondentes.


## Modelo
  ![image](https://github.com/user-attachments/assets/0bb20ca4-c35a-43a8-bfdc-6a401ba2618d)

## Componentes Utilizados
- Arduino (Uno, Mega, etc.)
- Módulo Cartão Leitor SD
- Cartão microSD (formatado em FAT32) com arquivos de áudio
- Alto-falante
- Resistores e jumpers para conexões

## Estrutura dos Arquivos de Áudio
Os arquivos de áudio devem estar armazenados no cartão microSD dentro da pasta `Vozes/`. Exemplo:
```
Vozes/1.wav  (Número 1)
Vozes/2.wav  (Número 2)
...
```

## Conexões
| DFPlayer Mini | Arduino |
|--------------|---------|
| VCC          | 5V      |
| GND          | GND     |
| TX           | RX  |
| RX           | TX  |
| SPK1, SPK2   | Alto-falante |

## Bibliotecas Necessárias
Instale as seguintes bibliotecas através da Arduino IDE.
```cpp
#include <avr/pgmspace.h>
#include <TMRpcm.h>
#include <stdio.h>
#include <SD.h>
```

## Código Básico
```cpp
#include <stdio.h>
#include "audino.h"

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
```

## Como Usar
1. Copie os arquivos de áudio para o cartão microSD.
2. Conecte o hardware conforme indicado.
3. Carregue o código no Arduino.
4. O número correspondente será narrado pelo sistema de áudio.

## Licença
Este projeto é de código aberto e pode ser modificado conforme necessário.




