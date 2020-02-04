#include <iostream>
#include <stdlib.h>

#include "rectange.h"
#include "File_handler.h"
#include "Form.h"
#include "circle.h"
#include "elipse.h"
#include "Line.h"
#include "polygon.h"
#include "text.h"

using namespace std;

int main()
{
    Create_File("Picture.html");

    //creation de figure ici

    end_File("Picture.html");
    system("start Picture.html");
}
