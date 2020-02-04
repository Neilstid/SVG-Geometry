#include "Line.h"

#include <stdlib.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>      /* Creation fichier */
#include <math.h>
#include <cmath>

//constructor
Line::Line(int SrcX, int SrcY, int DestX, int DestY)
{
    SetSourceX(SrcX);
    SetSourceY(SrcY);
    SetDestinationX(DestX);
    SetDestinationY(DestY);
}

//destructor
Line::~Line()
{
    //dtor
}

//set the x of the source point
void Line::SetSourceX(int SrcX){
    SourceX = SrcX;
}

//set the y of the source point
void Line::SetSourceY(int SrcY){
    SourceY = SrcY;
}

//set the x of the destination point
void Line::SetDestinationX(int DestX){
    DestinationX = DestX;
}

//set the y of the destination point
void Line::SetDestinationY(int DestY){
    DestinationY = DestY;
}

//set the color of the line
void Line::SetCouleur(int r, int g, int b){
    ColRed = r;
    ColGreen = g;
    ColBlue = b;
}

//set the stroke width
void Line::SetEpesseur(int e){
    Epesseur = e;
}

//return the stroke width
int Line::GetEpesseur(){
    return Epesseur;
}

//return the amount of red in rgb code
int Line::GetColorRed(){
    return ColRed;
}

//return the amount of green in rgb code
int Line::GetColorGreen(){
    return ColGreen;
}

//return the amount of blue in rgb code
int Line::GetColorBlue(){
    return ColBlue;
}

//return the x of the source point
int Line::GetSourceX(){
    return SourceX;
}

//return the y of the source point
int Line::GetSourceY(){
    return SourceY;
}

//return the x of the destination point
int Line::GetDestinationX(){
    return DestinationX;
}

//return the y of the destination point
int Line::GetDestinationY(){
    return DestinationY;
}

//return the length of the line
double Line::GetLongeur(){
    //it uses the theorem of pythagore to calcul the length of the line
    int Side1,Side2;//we create 2 imaginary side to do it
    Side1 = pow(abs(SourceX - DestinationX), 2); //we calcul their length
    Side2 = pow(abs(SourceY - DestinationY), 2);
    std::cout<<Side1<<" "<<Side2;

    //we return the length of the line
    return sqrt(Side1 + Side2);
}

//print it into a html file
void Line::Affiche(char *name_File){
    FILE *monFichier = fopen(name_File, "a"); //open the file in add mode

    //create the code in html
    fprintf(monFichier, "           <line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:rgb(%d,%d,%d);stroke-width:%d\" />\n", GetSourceX(), GetSourceY(), GetDestinationX(),  GetDestinationY(), GetColorRed(), GetColorGreen(), GetColorBlue(), GetEpesseur());

    //close the file
    fclose(monFichier);
}
