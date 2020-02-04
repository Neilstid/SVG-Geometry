#include "rectange.h"
#include "Form.h"

#include <stdlib.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>      /* Creation fichier */

//constructor
rectange::rectange(int H, int L)
{
    SetHauteur(H);
    SetLargeur(L);
}

//destructor
rectange::~rectange()
{
    //dtor
}

//set the height
void rectange::SetHauteur(int H){
    if(H <= 0){//test if it > 0
        std::cout<< "Erreur : Taille  negative ou nulle" << std::cout;
        exit (EXIT_FAILURE);
    }
    Hauteur = H;
}

//set the width
void rectange::SetLargeur(int L){
    if(L <= 0){//test if it > 0
        std::cout<< "Erreur : Taille  negative ou nulle" << std::cout;
        exit (EXIT_FAILURE);
    }
    Largeur = L;
}

//return the height
int rectange::GetHauteur(){
    return Hauteur;
}

//return the width
int rectange::GetLargeur(){
    return Largeur;
}

//return the perimeter
int rectange::GetPerimetre(){
    return (Hauteur + Largeur)*2;
}

//return the surface
int rectange::GetSurface(){
    return Hauteur * Largeur;
}

//print it into hmtl file
void rectange::Affiche(char *name_File){
    FILE *monFichier = fopen(name_File, "a");//open the file in add mode

    //html code with all parameter
    fprintf(monFichier, "           <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" style=\"fill:rgb(%d,%d,%d)\" />\n", GetPositionY(), GetPositionX(), Largeur, Hauteur, GetColorRed(), GetColorGreen(), GetColorBlue());

    //close the file
    fclose(monFichier);
}
