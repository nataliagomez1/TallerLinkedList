//
// Created by Gomez Garzon on 29/07/2023.
//

#include "Moto.h"

Moto::Moto() {}

Moto::Moto(const std::string &id, const std::string &marca, int cilindraje, double potencia, double capTanque) : id(id),
                                                                                                                 marca(marca),
                                                                                                                 cilindraje(
                                                                                                                         cilindraje),
                                                                                                                 potencia(
                                                                                                                         potencia),
                                                                                                                 capTanque(
                                                                                                                         capTanque) {}

const std::string &Moto::getId() const {
    return id;
}

void Moto::setId(const std::string &id) {
    Moto::id = id;
}

const std::string &Moto::getMarca() const {
    return marca;
}

void Moto::setMarca(const std::string &marca) {
    Moto::marca = marca;
}

int Moto::getCilindraje() const {
    return cilindraje;
}

void Moto::setCilindraje(int cilindraje) {
    Moto::cilindraje = cilindraje;
}

double Moto::getPotencia() const {
    return potencia;
}

void Moto::setPotencia(double potencia) {
    Moto::potencia = potencia;
}

double Moto::getCapTanque() const {
    return capTanque;
}

void Moto::setCapTanque(double capTanque) {
    Moto::capTanque = capTanque;
}

std::ostream &operator<<(std::ostream &os, const Moto &moto) {
    os << "id: " << moto.id << " marca: " << moto.marca << " cilindraje: " << moto.cilindraje << " potencia: "
       << moto.potencia << " capTanque: " << moto.capTanque;
    return os;
}

Moto::~Moto() {

}
