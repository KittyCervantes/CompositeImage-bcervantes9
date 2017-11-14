//Author: Bianca Cervantes
#include"bitmap.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<Pixel>askFile(int &); //asks for valid bmp image
Bitmap imageStack(vector<Pixel> &); //matrix of images
void imageAvg(Pixel &); //averages image values


int MAX=10; //max number of images
int MIN=2; //min number of images

int main()
{
        string input;
        int count=0;
        vectore<Pixel>album;

        //Loop receives max of 10 images
        do{
                album = askFile(count); //asks for valid bmp file, makes vector                
                count++; //image count increases each loop

                cout<<"Press any key to continue adding files or enter (DONE) to stop."<<endl;
                cin>>input; 

                if(input= "DONE" || input= "done" && count<MIN)
                {
                        cout<<"Need minimum of 2 valid images!"<<endl; //minimum of 2 images
                }

                if(count=MAX)
                {
                        cout<<"MAX number of image inputs reached"<<endl;
                }
        }while(input!= "DONE" || input!= "done" && count<MAX); //still not sure about dowhile

        imageStack(album);

        //save file ---------------change bmpimage and mashUp to appropriate variables later
        bmpimage.fromPixelMatrix(mashUp);
        bmpimage.save("composite-bcervantes9.bmp");


        return 0;
}
//------------------
vector<Pixel>askFile(int & count)
{       vector<Pixel>mashUp;
        Bitmap imageFile;
        string file;

        cout<<"Enter valid 24 bit bmp image file name:"<<endl;
        cin>>file;//asks for file name
        imageFile.open(file);//opens image

        //checks for valid format, prints error otherwise
        if(imageFile.isImage() == false)
        {
                cerr<<"----!!Invalid file!!----"<<endl;
                if(imageFile.isImage(.bmp) == false)
                {
                        cerr<<"!!Not a valid bmp image!!"<<endl;
                }
                mashUp.pop_back();//removes offending file
                count--;//returns to previous count value
        }
        imageFile.toPixelMatrix();//converts to bitmap
        mashUp.push_back(imageFile);//pushes into matrix

        return mashUp;//returns image vector
}
//------------------next function
Bitmap imageStack(vector & album)
{
        int pages=album.size();
        int pix;
vector<Pixel>photo;
       for(i=0; i<pages;i++)
        {

                for(row=0; row<pages;row++)
                {
                        for(column=0;column<pages;column++)
                        {
                                pix += album[row][column];

                        }
                }


        }
        return ;
}

//------------------next function
void imageAvg( )
{
        int focus;
        //int pages=album.size();




}

