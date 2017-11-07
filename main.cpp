//Author: Bianca Cervantes
#include"bitmap.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

bmp askFile();
//asks for valid bmp image
void imageAvg( & );
//averages image values
int Max=10;
//max number of images

int main()
{
        int input;
        int count=0;
        
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
                cout<<"Need minimum of 2 images!"<<endl;
                //makes sure theres a minimum of 2 given images
                }
        }while(input= Y || input= y && count<MAX); //still not sure i wanna use a dowhile for this


        //write matrix here instead of in function or in the function?
        imageAvg( );

        //save file
        bmpimage.fromPixelMatrix(/*---add matrix name---*/);
        bmpimage.save("composite-bcervantes9.bmp");


        return 0;
}

bmp askFile()
{
//ask user for image file
//saves user input
//checks input to make sure its a valid format
//returns error if invalid
//returns images
}

void imageAvg ( & )
{
//goes through each image
//goes through every pixel
//takes average of all pictures
//give new value
//returns new image
}

