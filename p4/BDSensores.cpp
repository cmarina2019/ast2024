/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#include "BDSensores.h"
using namespace std;

BDSensores::BDSensores() {

}

BDSensor *BDSensor::Create(string type){
};

void BDSensor::setActive(bool active){
  this->active = active;
};

bool BDSensor::isActive(){
  return this->active;
}

string BDSensor::getType(){
  return this->type;
}

BDSensor::~BDSensor(){};
