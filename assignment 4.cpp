#include<iostream>
#include<string>
using namespace std;
class Artist
{
    string name;
    int ratings;
    string country;
    public:
    Artist()
    {
        name=name;
        ratings=ratings;
        country=country;
    }
    void acceptArtistData()
    {
        cout<<"enter name of the artist: ";
        cin>>name;
        cout<<"enter ratings of the artist: ";
        cin>>ratings;
        cout<<"enter coutry name of the artist: ";
        cin>>country;
    }
    void printArtistData()
    {
        cout<<"name of artist is: "<<name<<endl;
        cout<<"ratings of the artist is: "<<ratings<<endl;
        cout<<"country of the artist is: "<<country<<endl;
    }
    bool isFamous()
    {
       return ratings>=3;  
    }

};
class painter:public Artist
{
    string type;
    int PaintingRate;
    int NoofPainting;
    public:
    painter()
    {
        PaintingRate=PaintingRate;
        NoofPainting=NoofPainting;
    }
    
    void acceptPainterData()
    {
        cout<<"Painting rate is: ";
        cin>>PaintingRate;
        cout<<"No of paintings are: ";
        cin>>NoofPainting;
    }
    void printPainterData()
    {
        cout<<"Painting rate is "<<PaintingRate<<endl;
        cout<<"No of paintings are "<<NoofPainting<<endl;
    }
    void calculateTotalIncome()
    {
       cout<<"totalIncome  "<<PaintingRate*NoofPainting<<endl;
    }

};
class singer:public Artist
{
    int NoofAlbums;
    int RatePerSong;
    public:
    singer()
    {
       NoofAlbums=NoofAlbums;
        RatePerSong=RatePerSong;
    }
    
    void acceptSingerrData()
    {
        cout<<"No of albums are: ";
        cin>>NoofAlbums;
        cout<<"Rate per song is: ";
        cin>>RatePerSong;
    }
    void printSingerData()
    {
        cout<<"No of albums are: "<<NoofAlbums<<endl;
        cout<<"Rate per song is: "<<RatePerSong<<endl;
    }
    void calculateTotalIncome()
    {
       cout<<"totalIncome  "<<NoofAlbums*RatePerSong<<endl;
    }
};

int main()
{
    // Artist A;
    // A.acceptArtistData();
    // A.printArtistData();
    
    painter B;

    B.acceptArtistData();
    B.acceptPainterData();
    B.printArtistData();
    B.printPainterData();
    B.calculateTotalIncome();
    B.isFamous();
    if(B.isFamous())
    {
        cout<<"artist is famous"<<endl;
    }
    else
    {
        cout<<"artist is not famous"<<endl;
    }
    singer C;

    C.acceptArtistData();
    C.acceptSingerrData();
    C.printArtistData();
    C.printSingerData();
    C.calculateTotalIncome();
    C.isFamous();
    if(C.isFamous())
    {
        cout<<"artist is famous"<<endl;
    }
    else
    {
        cout<<"artist is not famous"<<endl;
    }
}