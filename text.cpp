#include "text.h"

#include <string>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <fstream>
#include <stdio.h>
#include <string.h>

//constructor
text::text(char *txt)
{
    SetText(txt);
}

//destructor
text::~text()
{
    //dtor
}

//add text
void text::AddText(char *txt){
    strcat(textToPrint,txt);
}

//remove all the text
void text::RemoveText(){
    textToPrint = "";
}

//reset the text
void text::SetText(char *txt){
    textToPrint = txt;
}

//set the rotation of the text
void text::SetRotation(int rot){
    rotation = rot;
}

//return the rotation
int text::GetRotation(){
    return rotation;
}

//return the text
char* text::GetText(){
    return textToPrint;
}

//print the text in a html file
void text::Affiche(char *name_File){
    FILE *monFichier = fopen(name_File, "a");//open the file in add mode

    //html code for the figure
    fprintf(monFichier, "           <text x=\"%d\" y=\"%d\" style=\"fill:rgb(%d,%d,%d)\" transform=\"rotate(%d)\">%s</text>\n", GetPositionY(), GetPositionX(), GetColorRed(), GetColorGreen(), GetColorBlue(), GetRotation(), GetText());

    //close the file
    fclose(monFichier);
}
