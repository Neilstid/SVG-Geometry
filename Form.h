#ifndef FORM_H
#define FORM_H

//superClass form
class Form
{
    public:
        Form();//constructor
        virtual ~Form();//destructor

        void SetCouleur(int r, int g, int b);//Set the color of the figure
        void SetPosition(int x, int y);//Set the position of the figure

        int GetColorRed();//Return the amount of Red in rgb code
        int GetColorGreen();//Return the amount of Green in rgb code
        int GetColorBlue();//Return the amount of Blue in rgb code
        void GetColorTotal();//Return the  rgb code
        int GetPositionX();//Return the x position of the figure
        int GetPositionY();//Return the y position of the figure
        int GetPositionTotal();//Return the position of the figure

        void MovePosition(int x, int y);//Move the position of the figure

    protected:

    private:
        int ColRed = 0;//Amount of red in rgb code
        int ColGreen = 0;//Amount of green in rgb code
        int ColBlue = 0;//Amount of blue in rgb code
        int PositionX = 0;
        int PositionY = 0;
};

#endif // FORM_H
