// MainCpp.cpp : implementation file

#include "MainCpp.h"

const int startWait = 2;

class Encoder {
public:
    int quad1;
    int quad2;

    Encoder(int quad1, int quad2) {
        this->quad1 = quad1;
        this->quad2 = quad2;
        StartQuadEncoder(quad1, quad2, 0);
        PresetQuadEncoder(quad1, quad2, 0);
    }

    int value() {
        return GetQuadEncoder(quad1, quad2);
    }
};

void Main() {
    Encoder e1(1, 2);
    while (true) {
        PrintToScreen("rrg %d\n", e1.value());
        Wait(100);
    }
}

void MainCpp() {
    Wait(startWait * 1000);
    SetMotor(1, 127);
}
