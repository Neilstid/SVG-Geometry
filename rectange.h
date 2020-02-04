#ifndef RECTANGE_H
#define RECTANGE_H
#include "Form.h"

//class circle inherent from form
class rectange : public Form
{
    public:
        rectange(int H, int L);//constructor
        virtual ~rectange();//destructor

        void SetHauteur(int H);//set the height
        void SetLargeur(int L);//set the width

        int GetHauteur();//return the height
        int GetLargeur();//return the width
        int GetPerimetre();//return the perimeter
        int GetSurface();//return the surface

        void Affiche(char *name_File);//print it to html file

    protected:

    private:
        int Hauteur;//height
        int Largeur;//width
};

#endif // RECTANGE_H
