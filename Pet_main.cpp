/*
Anna Greene
Pet main file to run methods
 */
#include "Pet.h"

int main(int argc, char **argv){

  Pet *p = new Pet("angela", 2, "dog", 5.0); // Creating new instances of the objects
  Pet *p2 = new Pet("steve", 4, "cat", 14.0);

  cout << "Pet Information: " << endl; // Displaying pet information
  cout << "Pet 1" << endl;
  cout << "Name: " << p->getName() << endl; // Using accessor method to display name
  cout << "Age: " << p->getAge() << endl; // Using accessor method to display age
  cout << "Type: " << p->getType() << endl; // Using accessor method to display type
  cout << "Weight: " << p->getWeight() << endl; // Using accessor method to display weight

  cout << endl;
  cout << "Pet 2" << endl; // Displaying pet two information
  cout << "Name: " << p2->getName() << endl;
  cout << "Age: " << p2->getAge() << endl;
  cout << "Type: " << p2->getType() << endl;
  cout << "Weight: " << p2->getWeight() << endl;

  delete p; // Deleting instance of items
  delete p2;

  return 0;
}
