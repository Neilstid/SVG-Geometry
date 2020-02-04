#ifndef ELIPSE_H
#define ELIPSE_H
#include "Form.h"

//class circle inherent from form
class elipse : public Form
{
    public:
        elipse(int RX, int RY);//constructor
        virtual ~elipse();//destructor

        void SetRayonX(int RX);//set the first ray
        void SetRayonY(int RY);//set the second ray

        int GetRayonX();//return the first ray
        int GetRayonY();//return the second ray
        int GetPerimetre();//return the perimeter
        int GetSurface();//return the surface

        void Affiche(char *name_File);//print the ellipse in a html file

    protected:

    private:
        int rayonX;//first ray
        int rayonY;//second ray
};

#endif // ELIPSE_H
