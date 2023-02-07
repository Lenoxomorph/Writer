#include "MainCpp.h"

void Main() {
    Encoder e1(1, 2);
    while (1) {
        int angle = e1.value();
        if (88 < angle && angle < 92) {
            SetMotor(1, 0);
        } else {
            SetMotor(1, -30*((angle > 90) - (angle < 90)));
        }
    }
    SetMotor(1, 0);
}

void Deadband() {
    for (int i = 0; i < 50; i++) {
        SetMotor(1, i);
        PrintToScreen("Motor Power: %d\n", i);
        Wait(1000);
    }
    SetMotor(1, 0);
}

void MainCpp() {
    PrintToScreen("Start\n");
    Motor m1(1, 1, 2);
}

