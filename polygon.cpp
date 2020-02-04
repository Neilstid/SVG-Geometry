#include "polygon.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//constructor
polygon::polygon(int X1, int Y1, int X2, int Y2, int X3, int Y3)
{
    AddPoint(X1, Y1);
    AddPoint(X2, Y2);
    AddPoint(X3, Y3);
}

//destructor
polygon::~polygon()
{
    //dtor
}

//Add a point
void polygon::AddPoint(int X, int Y){
    vectorX.push_back(X);//add the x in the vector x
    vectorY.push_back(Y);//add the y in the vector y
}

//remove a point
void polygon::RemovePoint(int p){
    vectorX.erase(vectorX.begin()+p);//remove the x in the vector x
    vectorY.erase(vectorY.begin()+p);//remove the y in the vector y
}

//print it into html file
void polygon::Affiche(char *name_File){

    FILE *monFichier = fopen(name_File, "a");//open the file in add mode

    //html code
    fprintf(monFichier, "           <polygon points=\"");

    for (unsigned i=0; i<vectorX.size(); i++){
        fprintf(monFichier,"%d,%d ",vectorX.at(i), vectorY.at(i));
    }//add all the point into the html code

    fprintf(monFichier,"\" style=\"fill:rgb(%d,%d,%d)\"/>\n", GetColorRed(), GetColorGreen(), GetColorBlue());

    fclose(monFichier);//close the file
}
