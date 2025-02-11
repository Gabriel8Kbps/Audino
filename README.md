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
Os arquivos de áudio devem estar armazenados no cartão microSD. Exemplo:
```
/1.wav  (Número 1)
/2.wav  (Número 2)
...
```

## Conexões
| Módulo Cartão Leitor SD | Arduino      |
|-------------------------|--------------|         
| VCC                     | 5V           |         
| GND                     | GND          |         
| MISO                    | 12           |         
| MOSI                    | 11           |         
| SCK                     | 13           |         
| CS                      | 4            |    
| Speaker                 | 9            |
 
 

## Bibliotecas Necessárias
Instale as seguintes bibliotecas através da Arduino IDE.
```cpp
#include <avr/pgmspace.h>
#include <TMRpcm.h>
#include <stdio.h>
#include <SD.h>
#include <pcmConfig.h>
#include <pcmRF.h>

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
3. instale a biblioteca arduino.zip. 
4. Carregue o código no Arduino.
5. O número correspondente será narrado pelo sistema de áudio.

##
Tabela:
Use esta tabela como guia na hora de chamar a função narrador.
```cpp
    0: "0.wav",
    1: "1.wav",
    2: "2.wav",
    3: "3.wav",
    4: "4.wav",
    5: "5.wav",
    6: "6.wav",
    7: "7.wav",
    8: "8.wav",
    9: "9.wav",
    10: "10.wav",
    11: "11.wav",
    12: "12.wav",
    13: "13.wav",
    14: "14.wav",
    15: "15.wav",
    16: "16.wav",
    17: "17.wav",
    18: "18.wav",
    19: "19.wav",
    20: "20.wav",
    21: "30.wav",
    22: "40.wav",
    23: "50.wav",
    24: "60.wav",
    25: "70.wav",
    26: "80.wav",
    27: "90.wav",
    28: "100.wav",
    29: "101.wav",
    30: "200.wav",
    31: "300.wav",
    32: "400.wav",
    33: "500.wav",
    34: "600.wav",
    35: "700.wav",
    36: "800.wav",
    37: "900.wav",
    38: "1000.wav",
    39: "e.wav",
    40: "Volts.wav",
    41: "Amperes.wav",
    42: "kilo.wav",
    43: "menos.wav",
    44: "mili.wav",
    45: "virgula.wav",
```

## Licença
Este projeto é de código aberto e pode ser modificado conforme necessário.




