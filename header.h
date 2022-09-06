#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <stdlib.h>


using namespace std;

void ChangeTone();
void Checker(int i);

class Jeans
{
    private:
        string color;
        string sizing;
        string fit;

    public:
        Jeans(string color, string sizing, string fit);
        ~Jeans();
        void setColor(string color);
        string getColor();

        void setSizing(string sizing);
        string getSizing();

        void setFit(string fit);
        string getFit();

    private:
        void init(string color, string sizing, string fit);
};

#endif
