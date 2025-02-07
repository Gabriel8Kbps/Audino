/*

  AUDINO.h

  Autor: Eng. Gabriel de Jesus dos Santos Costa
  Fevereiro de 2025

*/

#ifndef AUDINO_H
#define AUDINO_H

#include <stdio.h>
#include <avr/pgmspace.h>
#include <TMRpcm.h>
#include <SD.h>

#define SD_ChipSelectPin 4

class Audino {
  public:
    void narrador(int indice);
    void doisd(char valor[]);
    void tresd(char valor[]);
    void quatrod(char valor[]);
    void cincod(char valor[]);
    void inverter(char dados[20]);
    void extenso(char valor[]);
    void sd_wav_player(int speaker_pin, int SD_pin, int qualidade, int volume, int serial_begin);

  private:
    int c; // Variável para controle de índice
    int cont; // Variável para controle de contagem
    //TMRpcm wav;  Objeto para reprodução de áudio
    const char* wav_table[40]; // Tabela de nomes de arquivos WAV
    char entrada[10];
    int wav_delay[40]; // Tabela de delays para cada arquivo WAV
};

#endif
