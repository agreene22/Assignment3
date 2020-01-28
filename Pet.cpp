#include "Pet.h"

Pet(){
  m_name = "";
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

string Pet::getName(){
  return m_name;
}

Pet::setName(string name){
  m_name = name;
}

int Pet::getAge(){
  return m_age;
}

Pet::setAge(int age){
  m_age = age;
}

string Pet::getType(){
  return m_type;
}

Pet::setType(string type){
  m_type = type;
}

double Pet::getWeight(){
  return m_weight;
}

Pet::setWeight(double weight){
  m_weight = weight;
}
