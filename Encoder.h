#ifndef WRITER_ENCODER_H
#define WRITER_ENCODER_H

#include "API.H"

class Encoder {
private:
    int quad1;
    int quad2;
public:
    Encoder(int quad1, int quad2);
    int value();
};

#endif //WRITER_ENCODER_H
