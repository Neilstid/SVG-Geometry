#include "Form.h"

#include <stdio.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <string.h>
#include <cstring>

Form::Form()
{
    //ctor
}

Form::~Form()
{
    //dtor
}

//Set the position of the figure
void Form::SetPosition(int x, int y) {
    PositionX = x;
    PositionY = y;
}

//Set the color of the figure
void Form::SetCouleur(int r, int g, int b){
    ColRed = r;
    ColGreen = g;
    ColBlue = b;
}

//Return the amount of Red in rgb code
int Form::GetColorRed(){
    return ColRed;
}

//Return the amount of Green in rgb code
int Form::GetColorGreen(){
    return ColGreen;
}

//Return the amount of Blue in rgb code
int Form::GetColorBlue(){
    return ColBlue;
}

//Return the rgb code
void Form::GetColorTotal(){
    std::cout<<"Couleur du rectangle : [" << ColRed << ";" << ColGreen << ";" << ColBlue << "]" << std::endl;
}

//Return the x position of the figure
int Form::GetPositionX(){
    return PositionX;
}

//Return the y position of the figure
int Form::GetPositionY(){
    return PositionY;
}

//Return the position of the figure
int Form::GetPositionTotal(){
    std::cout<<"Position du rectangle : (" << PositionX << ";" << PositionY << ")" << std::endl;
}

//Return the position of the figure
void Form::MovePosition(int x, int y){
    if((PositionX + x) >=0){//test if the position is still greater than 0
        PositionX += x;
    }else{//Under 0
        std::cout<<"Erreur : Nouvelle position de x impossible (" << (PositionX + x) << " < 0)" << std::endl;
        exit (EXIT_FAILURE);//exit
    }

    if((PositionY + y) >=0){//test if the position is still greater than 0
        PositionY += y;
    }else{//under 0
        std::cout<<"Erreur : Nouvelle position de y impossible (" << (PositionY + y) << " < 0)" << std::endl;
        exit (EXIT_FAILURE);//exit
    }
}
