//  testCity.cpp - test the city class

#include <string>

#include "City.h"
#include "Citizen.h"


int main() {
    City* katchem = new City("Katchem");
        Citizen* Richard = katchem->getCitizenWithId(9);
        if (Richard == NULL)
        {
            cout << "ERROR: Could not find Richard" << endl;
        }
        else
        {
            cout << "SUCCESS: Found Richard" << endl;
        }
        
        if (Richard->getFavoriteColor() == "Pink")
        {
            Richard->setFavoriteColor("Purple");
        }
        else if (Richard->getFavoriteColor() == "Purple")
        {
            cout << "SUCCESS: Richard's color successfully changed!" << endl;
        }
        else
        {
            errors++;
            cout << "ERROR: Richard's color is wrong. " << endl;
        }

}
