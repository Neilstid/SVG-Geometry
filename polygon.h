#ifndef POLYGON_H
#define POLYGON_H
#include <vector>

#include "Form.h"

//class polygon inherent from form
class polygon : public Form
{
    public:
        polygon(int X1, int Y1, int X2, int Y2, int X3, int Y3);//constructor
        virtual ~polygon();//destructor

        void AddPoint(int X, int Y);//Add a vertex
        void RemovePoint(int p); //remove a vertex

        void Affiche(char *name_File); //print it into html file

    protected:

    private:
        std::vector<int> vectorX;//vector of x
        std::vector<int> vectorY;//vector of Y
};

#endif // POLYGON_H
