#ifndef LINE_H
#define LINE_H


class Line
{
    public:
        Line(int SrcX, int SrcY, int DestX, int DestY);//constructor
        virtual ~Line();//destructor

        void SetSourceX(int SrcX);//set the x of the source point
        void SetSourceY(int SrcY);//set the y of the source point
        void SetDestinationX(int DestX);//set the x of the destination point
        void SetDestinationY(int DestY);//set the y of the destination point
        void SetCouleur(int r, int g, int b);//set the color of the line
        void SetEpesseur(int e);//set the stroke width

        int GetEpesseur();//return the stroke width
        int GetColorRed();//return the amount of red in rgb code
        int GetColorGreen();//return the amount of green in rgb code
        int GetColorBlue();//return the amount of blue in rgb code
        int GetSourceX();//return the x of the source point
        int GetSourceY();//return the y of the source point
        int GetDestinationX();//return the x of the destination point
        int GetDestinationY();//return the y of the destination point

        double GetLongeur();//return the length of the line
        void Affiche(char *name_File);//print it into a html file

    protected:

    private:
        int SourceX;//the x of the source point
        int SourceY;//the y of the source point
        int DestinationX;//the x of the destination point
        int DestinationY;//the y of the destination point

        int Epesseur = 1;//stroke width
        int ColRed = 0;//the amount of red in rgb code
        int ColGreen = 0;//the amount of green in rgb code
        int ColBlue = 0;//the amount of blue in rgb code
};

#endif // LINE_H
