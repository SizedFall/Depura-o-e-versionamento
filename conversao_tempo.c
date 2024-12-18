#include "biblioteca.h"

double segundosParaMinutos(double seg) {
	return seg / 60.0;
}

double segundosParaHoras(double seg) {
	return seg / 60.0 / 60.0;
}

double minutosParaSegundos(double min) {
	return min * 60.0;
}

double minutosParaHoras(double min) {
	return min / 60.0;
}

double horasParaMinutos(double min) {
	return min * 60.0;
}

double horasParaSegundos(double min) {
	return min * 60.0 * 60.0;
}
