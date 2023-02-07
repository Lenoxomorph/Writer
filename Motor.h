#ifndef WRITER_MOTOR_H
#define WRITER_MOTOR_H

#include "API.H"
#include "Encoder.h"

class Motor {
private:
    int number;
    Encoder encoder;
    void calibrate();
public:
    Motor(int number, int num1, int num2);
};

#endif //WRITER_MOTOR_H

