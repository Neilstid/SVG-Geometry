#include "File_handler.h"

#include <stdio.h>
#include <iostream>
#include <stdlib.h>     /* exit, EXIT_FAILURE */
#include <string.h>
#include <cstring>

//create the file
void Create_File(char *name_File){
    FILE *monFichier = fopen(name_File, "w+");

    //determine the paramter of the svg
    int FrameH, FrameW;
    std::cout<<"Parametre du cadre a creer : \n Hauteur : ";
    std::cin>>FrameH;
    std::cout<<" Largeur : ";
    std::cin>>FrameW;

    if(monFichier)  //On teste si tout est OK
    {
        //Tout est OK, on peut utiliser le fichier
        //html code for the file
        fprintf(monFichier,"<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01//EN\">\n");
        fprintf(monFichier,"<html>\n");
        fprintf(monFichier,"    <head>\n");
        fprintf(monFichier,"        <title>Image</title>\n");
        fprintf(monFichier,"    </head>\n");
        fprintf(monFichier,"    <body>\n");
        fprintf(monFichier, "       <svg width=\"%d\" height=\"%d\">\n", FrameW, FrameH);
    }
    else//fail to open
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
        exit (EXIT_FAILURE);
    }

    fclose(monFichier);//close the file
}

//finish the file
void end_File(char *name_File){
    FILE *monFichier = fopen(name_File, "a");//open file in add mode

    if(monFichier)  //On teste si tout est OK
    {
        //Tout est OK, on peut utiliser le fichier
        //html code
        fprintf(monFichier, "       </svg>\n");
        fprintf(monFichier,"    </body>\n");
        fprintf(monFichier,"</html>");
    }
    else//fail to open
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
        exit (EXIT_FAILURE);
    }

    fclose(monFichier);//close the file
}

//write in the file
void Write_in_File_Body(char *name_File, char *str){
    FILE *monFichier;
    monFichier = fopen(name_File, "a");

    fprintf(monFichier, "       %s\n", str);

    fclose(monFichier);
}
