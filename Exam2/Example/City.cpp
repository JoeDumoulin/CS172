//  City.cpp - City class implementation
//
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include "Citizen.h"
#include "City.h"

using namespace std;

City::City(string cityName) {
  _name = cityName;

  // check for a file
  fstream cityfile(cityName.c_str(), ios::in);
  if (cityfile.is_open()) {
    int counter = 0;
    int id;
    string first, last, color;
    while (cityfile >> id >> first >> last >> color) {
      _population.push_back(new Citizen(id, first, last, color));
    }
    cityfile.close();
  }
}

City::~City() {
  fstream cityfile(_name.c_str(), ios::out);
  if (cityfile.is_open()) {
    int counter = 0;
    for (int i = 0; i < _population.size(); ++i) {
      Citizen* p = _population[i];
      cityfile << p->getId()    << " "
          << p->getFirstName()  << " "
          << p->getLastName()   << " "
          << p->getFavoriteColor() << endl;
      delete p;
    }
    
    _population.clear();
    cityfile.close();
  }
  else // just delete the items
  {
    for (int i = 0; i < _population.size(); ++i) {
      delete _population[i];
    }
    _population.clear();
  }
}

string City::getCityName() {
    return _name;
}

int City::populationSize() {
    return _population.size();
}

Citizen* City::getCitizenAtIndex(int index) {
  if (index < _population.size()) {
    return _population[index];
  }
  return NULL;
}

void City::addCitizen(Citizen* citizen) {
    // copy!
    _population.push_back(new Citizen(citizen));
}

Citizen* City::getCitizenWithId(int id) {
  for (int i = 0; i < _population.size(); ++i) {
    if (_population[i]->getId() == id) {
      return _population[i];
    }
  }
}

vector<Citizen*> City::getCitizensForFavoriteColor(string color) {
  vector<Citizen*> colorpeople;
  for (int i = 0; i < _population.size(); ++i) {
    if (_population[i]->getFavoriteColor() == color) {
      colorpeople.push_back(_population[i]);
    }
  }
  return colorpeople;
}
















