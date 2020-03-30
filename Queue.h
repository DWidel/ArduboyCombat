#pragma once
#include "PlayerObj.h"

class Queue
{ 
    char Ptr=0;
    PlayerObj PList[6];

public:

void Clear(){
  Ptr=0;
}

    char Count() {
        return Ptr;
    };

    void Add(PlayerObj P) {
        if (Ptr < 6) {
            PList[Ptr] = P;
            Ptr++;
        };
     };


    PlayerObj Next() {
        PlayerObj P = PList[0];
        Ptr--;
        if (Ptr > 0) {
            for (char i = 0;i <  Ptr;i++) {
                PList[i] = PList[i + 1];
            };

        }; 
        return P;
    };

};
