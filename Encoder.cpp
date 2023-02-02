#include "Encoder.h"

Encoder::Encoder(int quad1, int quad2) {
    this->quad1 = quad1;
    this->quad2 = quad2;
    StartQuadEncoder(quad1, quad2, 0);
    PresetQuadEncoder(quad1, quad2, 0);
}

int Encoder::value() {
    return GetQuadEncoder(quad1, quad2);
}
