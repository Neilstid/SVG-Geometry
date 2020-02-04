#ifndef TEXT_H
#define TEXT_H

#include "Form.h"

#include <string>

class text : public Form
{
    public:
        text(char *txt);//constructor
        virtual ~text();//destructor

        void AddText(char *txt);//Add text
        void RemoveText();//Remove all text
        void SetText(char *txt);//Reset the text
        void SetRotation(int rot);//set the rotation of the text

        int GetRotation();//return the rotation
        char* GetText();//return the text

        void Affiche(char *name_File);//print the text in a html file

    protected:

    private:
        char *textToPrint;//text
        int rotation = 0;//rotation
};

#endif // TEXT_H
