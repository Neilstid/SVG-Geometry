#include "elipse.h"

#include <stdlib.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>      /* Creation fichier */
#include <math.h>
#include <cmath>

//constructor
elipse::elipse(int RX, int RY)
{
    SetRayonX(RX);
    SetRayonY(RY);
}

//destructor
elipse::~elipse()
{
    //dtor
}

//set the first ray
void elipse::SetRayonX(int RX){
    rayonX = RX;
}

//set the second ray
void elipse::SetRayonY(int RY){
    rayonY = RY;
}

//return the first ray
int elipse::GetRayonX(){
    return rayonX;
}

//return the second ray
int elipse::GetRayonY(){
    return rayonY;
}

//return the perimeter
int elipse::GetPerimetre(){
    //formula for the perimeter
    double mem = (std::pow(GetRayonX(), 2) + std::pow(GetRayonY(), 2)) / 2.00;
    mem = sqrt(mem);
    return (2*M_PI*mem);
}

//return the surface
int elipse::GetSurface(){
    return (M_PI*GetRayonX()*GetRayonY());
}

//print the ellipse in a html file
void elipse::Affiche(char *name_File){
    FILE *monFichier = fopen(name_File, "a");//open the file in add mode

    //html code for the figure
    fprintf(monFichier, "           <ellipse cx=\"%d\" cy=\"%d\" rx=\"%d\" ry=\"%d\" style=\"fill:rgb(%d,%d,%d)\" />\n", GetPositionY(), GetPositionX(), GetRayonX(), GetRayonY(),  GetColorRed(), GetColorGreen(), GetColorBlue());

    //close the file
    fclose(monFichier);
}
