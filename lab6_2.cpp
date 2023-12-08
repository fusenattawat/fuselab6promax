#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    return deg * M_PI / 180.0;
}

double rad2deg(double rad){
    return rad * 180.0 / M_PI;
}

double findXComponent(double l1, double l2, double a1, double a2){
    return l1 * cos(a1) + l2 * cos(a2);
}

double findYComponent(double l1, double l2, double a1, double a2){
    return l1 * sin(a1) + l2 * sin(a2);
}

double pythagoras(double a, double b){
    return sqrt(a * a + b * b);
}

void showResult(double length, double angle){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = "<< angle << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction...
