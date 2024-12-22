#include "conversor.h"

double wattsParaQuilowatts(double watts) {
    return watts / 1000.0;
}

double wattsParaCV(double watts) {
    return watts / 735.5; 
}

double quilowattsParaWatts(double quilowatts) {
    return quilowatts * 1000.0;
}

double quilowattsParaCV(double quilowatts) {
    return quilowatts * 1000.0 / 735.5;
}

double cvParaWatts(double cv) {
    return cv * 735.5;
}

double cvParaQuilowatts(double cv) {
    return cv * 735.5 / 1000.0;
}
