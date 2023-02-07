#include "Motor.h"

Motor::Motor(int number, int num1, int num2) : number(number), encoder(num1, num2) {
    calibrate();
}

void Motor::calibrate() {
    PrintToScreen("Motor Number: %d\n", number);
    while (1) {
        PrintToScreen("Encoder Test: %d\n", encoder.value());
        Wait(500);
    }
}

