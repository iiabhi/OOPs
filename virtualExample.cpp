#include <iostream>
#include <cstring>
using namespace std;

class channel
{
protected:
    string title;
    float ratings;

public:
    channel(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display(void)
    {
        cout << "Bogus  Code." << endl; // this will be executed from pointer if "displpay" function is not found in derived classes.
    }
};

class videos : public channel
{
    float videolen;

public:
    videos(string s, float r, float vl) : channel(s, r)
    {
        videolen = vl;
    }
    void display(void)
    {
        cout << "Title is :" << title << endl;
        cout << "Rating is :" << ratings << endl;
        cout << "Video Length is :" << videolen << endl;
    }
};

class texts : public channel
{
    int words;

public:
    texts(string s, float r, int wc) : channel(s, r)
    {
        words = wc;
    }
    void display(void)
    {
        cout << "Title is :" << title << endl;
        cout << "Rating is :" << ratings << endl;
        cout << "Word Count is :" << words << endl;
    }
};

int main()
{
    string TITLE;
    int wordCount, Rating;
    float vidLen;

    // for  video class:
    TITLE = "Amazing Veritasium Video";
    Rating = 4.9;
    vidLen = 26.3;
    videos vd(TITLE, Rating, vidLen);

    // for text class:
    TITLE = "Machine Learning Forum";
    Rating = 4.5;
    wordCount = 566;
    texts txt(TITLE, Rating, wordCount);

    channel *tutorial[10]; // base class pointer
    tutorial[0] = &vd;     // derived class object address is passed.
    tutorial[1] = &txt;

    tutorial[0]->display(); // respective display function of derived class got executed.
    tutorial[1]->display();

    return 0;
}