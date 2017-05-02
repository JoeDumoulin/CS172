//  Citizen.cpp - implementation of the Citizen class
//
#include <string>

#include "Citizen.h"

Citizen::Citizen(int id, string firstName, string lastName, string color) {
    _id = id;
    _firstName = firstName;
    _lastName = lastName;
    _color = color;
}

Citizen::Citizen(Citizen* c) {
    _id = c->getId();
    _firstName = c->getFirstName();
    _lastName = c->getLastName();
    _color = c->getFavoriteColor();
}

string Citizen::getFirstName() {
    return _firstName;
}

string Citizen::getLastName() {
    return _lastName;
}

int Citizen::getId() {
    return _id;
}

string Citizen::getFavoriteColor() {
    return _color;
}

void Citizen::setFavoriteColor(string color) {
  _color = color;
}

