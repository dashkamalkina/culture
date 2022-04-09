//
// Created by DARIA on 08.04.2022.
//
#include "header.h"
#include <math.h>
#include <iostream>

using namespace std;

Complex::Complex(int material, int fake ) {
    this->material = material;
    this->fake = fake;
}
Complex::Complex() {
    this->material = 0;
    this->fake = 0;
}
Complex Complex::operator + (Complex data) {
    return Complex(this->material + data.material, this->fake + data.fake);
}
Complex Complex::operator * (Complex data) {
    return Complex(this->material * data.material - this->fake * data.fake, this->material * data.fake + this->fake * data.material);
}
Complex Complex::operator*(double v) {
    return Complex(this->material * v, this->fake * v);
}
Complex::operator double() const {
    return sqrt(this->material * this->material * 1.0 + this->fake * this->fake * 1.0);
}
void Complex::display()
{
    if (this->fake >= 0)
    {
        cout << this->material << " + " << this->fake << "i" << endl;
    }
    else
    {
        cout << this->material << " - " << this->fake << "i" << endl;
    }
}
