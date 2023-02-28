#include <stdio.h>
#include <math.h>

#define radiowave (3*pow(10,9))
#define microwave (3*pow(10,12))
#define infrared (4.3*pow(10,14))
#define visible (7.5*pow(10,14))
#define uv (3*pow(10,17))
#define xray (3*pow(10,19))

int main()
{
    float base = 0;
    float exp = 0;
    double freq = 0;

    printf("Insira um valor de frequencia, primeiro base e depois exp de base 10 : ");
    scanf("%f %f",&base, &exp);
    freq = (base * pow(10,exp));


    if (freq < radiowave){
        printf("Radiowave");}
    if ((freq >= radiowave) && (freq < microwave)){
        printf("Microwave");}
    if ((freq >= microwave) && (freq < infrared)){
        printf("Infrared");}
    if ((freq >= infrared) && (freq < visible)){
        printf("Visible");}
    if ((freq >= visible) && (freq < uv)){
        printf("Ultraviolet");}
    if ((freq >= uv) && (freq < xray)){
        printf("Xray");}
    if (freq >= xray){
        printf("Gamma");}

}
