/*
Anna Greene
Pet.cpp file
 */

#include "Pet.h"

/**
 * [Pet default constructor]
 */
Pet::Pet(){
  m_name = ""; // Itialize variables to default values
  m_age = 0;
  m_type = "";
  m_weight = 0.0;
}

/**
 * Pet overloaded constructor
 * @param name   [string for name]
 * @param age    [integer for age]
 * @param type   [string for type]
 * @param weight [double for weight]
 */
Pet::Pet(string name, int age, string type, double weight){
  m_name = name; // Setting the member variables to equal the parameters
  m_age = age;
  m_type = type,
  m_weight = weight;
}

/**
 * Name Accessor method
 * @return [String namezs]
 */
string Pet::getName(){
  return m_name;
}

/**
 * Name mutator method
 * @param name [string name]
 */
void Pet::setName(string name){
  m_name = name; // Set member variable to parameter
}

/**
 * Age accessor method
 * @return [integer age]
 */
int Pet::getAge(){
  return m_age; // Returns age
}

/**
 * Age mutator method
 * @param age [integer age]
 */
void Pet::setAge(int age){
  m_age = age;
}

/**
 * Type accessor method
 * @return [string type]
 */
string Pet::getType(){
  return m_type;
}

/**
 * Type mutator method
 * @param type [String type]
 */
void Pet::setType(string type){
  m_type = type;
}

/**
 * Weight accessor method
 * @return [double weight]
 */
double Pet::getWeight(){
  return m_weight;
}

/**
 * Weight mutator method
 * @param weight [double weight]
 */
void Pet::setWeight(double weight){
  m_weight = weight;
}
