#include <iostream>

using namespace std;

const double pi {3.14159};

// Function prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

int main() {
  area_circle();
  volume_cylinder();

  cout << endl;
  return 0;
}

void area_circle() {
  double radius{};
  cout << "\nEnter the radius of the circle: ";
  cin >> radius;
  cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
  double radius{};
  double height{};
  cout << "\nEnter the radius of the base of the cylinder: ";
  cin >> radius;
  cout << "\nEnter the height of the cylinder: ";
  cin >> height;
  cout << "The area of a cylinder with a base radius " << radius << " and height of " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

double calc_area_circle(double radius) {
  return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
  return calc_area_circle(radius) * height;
}
