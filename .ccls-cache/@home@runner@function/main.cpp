
#include <iostream>
#include <math.h>
using namespace std;

//create a function for the area of a square given the length and the height
//parameters 
int square_calc(int len, int hei) { 
  int area = len*hei;   
  string length = to_string(len);
  string  height = to_string(hei);
  string str_area = to_string(area);
  //we want to print out "length and height" - 5 and 6
  cout << length + " and " + height + "\n";
  cout << "A rectangle with a length of " + length + " and a height of " + height + " has an area of " + str_area + "\n";
  return area;
}
//function square calc
void ccout() {
  cout <<"couty cout cout";
}
//parameter: int age, int increment
//age = 10, increment = 5
//return 15
int increment_age (int age, int increment) {
  int old = age + increment;
  cout << "someone with a age of "+ to_string(age) +" wants to grow up " + to_string(increment) +" year/years will be " +to_string(old) + ".\n";
  return old;
}

//1) I want you to create a function for the area of a circle using our code from below. If you need help look at our function for the area of a square.
//2) I want you to create a creative function that you think will impress me.
//



int main() {

  square_calc(5, 5);//calculate area of a square with length of 114 and height of 23.
increment_age(10, 90);


  
  /*
 cout <<"hello universe!!!!\n";
  //our end goal is to print out the area of the square using the length and the height
  //std::cout << " a square with length (length) and height (height) has an area of (area)"
  //int var. name =var1
  int len = 314; //variable for the length of the rectangle
  int hei = 278;  //var for the height of the rectangle
  int area = len*hei;   
  string length = to_string(len);
  string  height = to_string(hei);
  string str_area = to_string(area);
  //we want to print out "length and height" - 5 and 6
  cout << length + " and " + height + "\n";
  cout << "a rectangle with a length of (len) and a height of (hei) has an area of (area)\n";
  cout << "A rectangle with a length of " + length + " and a height of " + height + " has an area of " + str_area + "\n";
//area of a circle is pi*r^2 = pi * radius * radius
  //M_PI - pi
int radius = 52;
  string str_radius = to_string(radius);
int area_circle = M_PI * radius * radius;
std::cout << "A circle with the radius of " + str_radius + " has an area of " + to_string(area_circle) + "\n";
  cout << "value of e = " + to_string(M_E) + "\n";
  */
 ccout();
  
  //square_calc(5, 5);
  }















