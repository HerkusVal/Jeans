#include <iostream>
#include <stdlib.h>
#include "header.h"

using namespace std;

void ChangeTone();
void Checker(int i);

Jeans::Jeans(string color, string sizing, string fit){
init(color, sizing, fit);
}

Jeans::~Jeans(){
}

void Jeans::setColor(string color){
    this->color = color;
}
string Jeans::getColor(){
    return color;
}

void Jeans::setSizing(string sizing){
    this->sizing = sizing;
}
string Jeans::getSizing(){
    return sizing;
}

void Jeans::setFit(string fit){
    this->fit = fit;
}
string Jeans::getFit(){
    return fit;
}

void Jeans::init(string color, string sizing, string fit){
    setColor(color);
    setSizing(sizing);
    setFit(fit);
}
