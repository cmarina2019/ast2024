/* ---------------------------

Author: Christian Marina
Date: 12/04/22

---------------------------- */
#include "User.h"

#include <iostream>
using namespace std;

User::User(string ID, string NIF, string name) {
  this->name = name;
  User::setID(ID);
  User::setNIF(NIF);
  this->addTimestamp();
  }

void User::setNIF(int NIF){
  this->NIF=NIF;
};

int User::getNIF(){
  return this->NIF;
};

void User::setID(int ID){
  this->ID=ID;
};

int User::getID(){
  return this->ID;
};

void User::addTimestamp(){
};

string User::getTimestamp(){
};

User::~User(){};
