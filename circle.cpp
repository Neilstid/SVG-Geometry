#include "circle.h"

#include <stdlib.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>      /* Creation fichier */
#include <cmath>

//constructor with ray
circle::circle(int R)
{
    SetRayon(R);//set the ray of the circle
}

//destructor
circle::~circle()
{
    //dtor
}

//set the ray
void circle::SetRayon(int R){
    rayon = R;
}

//return ray
int circle::GetRayon(){
    return rayon;
}

//return perimeter
double circle::GetPerimetre(){
    return (2 * M_PI * rayon);
}

//return surface
double circle::GetSurface(){
    return (M_PI * (rayon * rayon));
}

//print the result in a file in html
void circle::Affiche(char *name_File){
    FILE *monFichier = fopen(name_File, "a");//open the file in add mode

    //html code for the figure
    fprintf(monFichier, "           <circle cx=\"%d\" cy=\"%d\" r=\"%d\" style=\"fill:rgb(%d,%d,%d)\" />\n", GetPositionY(), GetPositionX(), GetRayon(),  GetColorRed(), GetColorGreen(), GetColorBlue());

    //close the file
    fclose(monFichier);
}
