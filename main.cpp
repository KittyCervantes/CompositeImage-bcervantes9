//Author: Bianca Cervantes
#include"bitmap.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

bmp askFile();
//asks for valid bmp image
vector< vector<Pixel> >imageStack(& *.bmp);
//matrix of images
void imageAvg(Pixel &);
//averages image values


int Max=10;
//max number of images

int main()
{
        int input;
        int count=0;

        vector<Pixel>mashUp;

        //Loop receives max of 9 other images
        do{
                askFile();
                //asks for valid bmp file
                count++;
                //image count increases

                cout<<"Add another file? (Y)es (N)o"<<endl;
                cin>>input; 
                //gives option to add more or not


                if(input=N || input=n && count<2)
                {
                        cout<<"Need minimum of 2 valid images!"<<endl;
                        //makes sure theres a minimum of 2 given images
                }

        }while(input= Y || input= y && count<MAX); //still not sure i wanna use a dowhile for this


        //creates matrix of images
        vector<vector<Pixel> >imageStack;

        //takes average of images


        //save file
        bmpimage.fromPixelMatrix(mashUp);
        bmpimage.save("composite-bcervantes9.bmp");


        return 0;
}

bitmap askFile()
{
        //ask user for image file
        //saves user input
        //checks input to make sure its a valid format
        //print error if invalid
        //returns images to pixel matrix mashUp
}

vector< vector<Pixel> >imageStack( bitmap & pic)
{
        //goes through each individual picture
        //goes through each pixel
        //adds respective pixel values
        //calls imageAvg
}

void imageAvg (Pixel & dot)
{
        //takes average //<-----------  HOW DOES IT KNOW THE NUMBER TO DIVIDE IT BY?  divide by vector.size() maybe? DIVIDE BY COUNT!!! It's keeping track of how many images you have inputed already!
        //give new value
        //returns new picture
}

