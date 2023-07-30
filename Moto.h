//
// Created by Gomez Garzon on 29/07/2023.
//

#ifndef TALLERINDIVIDUAL_MOTO_H
#define TALLERINDIVIDUAL_MOTO_H


#include <string>
#include <ostream>

class Moto {
public:
    Moto();

    Moto(const std::string &id, const std::string &marca, const std::string &modelo, int cilindraje, double potencia,
         double capTanque);

    const std::string &getModelo() const;

    void setModelo(const std::string &modelo);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getMarca() const;

    void setMarca(const std::string &marca);

    int getCilindraje() const;

    void setCilindraje(int cilindraje);

    double getPotencia() const;

    void setPotencia(double potencia);

    double getCapTanque() const;

    void setCapTanque(double capTanque);

    friend std::ostream &operator<<(std::ostream &os, const Moto &moto);

    virtual ~Moto();

private:
    std::string id;
    std::string marca;
    std::string modelo;
    int cilindraje;
    double potencia;
    double capTanque;



};


#endif //TALLERINDIVIDUAL_MOTO_H
