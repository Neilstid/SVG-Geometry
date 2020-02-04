#ifndef CIRCLE_H
#define CIRCLE_H
#include "Form.h"

//class circle inherent from form
class circle : public Form
{
    public:
        circle(int R);//constructor with ray
        virtual ~circle();//destructor

        void SetRayon(int R);//set the ray

        int GetRayon();//return ray
        double GetPerimetre();//return perimeter
        double GetSurface();//return surface

        void Affiche(char *name_File);//print the result in a file in html

    protected:

    private:
        int rayon;//ray
};

#endif // CIRCLE_H
