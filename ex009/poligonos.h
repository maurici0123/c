#include <stdio.h>

#define pi 3.14159265

float calcirculo(float r){
    float s;
    s = r*r*pi;
    return s;
}

float calquadrado(float a, float b){
    float s;
    s = a*b;
    return s;
}

float calretangulo(float a, float b){
    float s;
    s = a*b;
    return s;
}

float caltriangulo(float b, float h){
    float s;
    s = (b*h)/2;
    return s;
}