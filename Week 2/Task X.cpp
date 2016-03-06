#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void PrintRectangle (Rectangle r)
{
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
}

void InitRectangle (Rectangle& r)
{
  cout << "Please enter the length of the rectangle: ";
  cin >> r.length;
  cout << "Please enter the width of the rectangle: ";
  cin >> r.width;
}

Rectangle InitRectangle ()
{
    Rectangle r;
    cout << "Please enter the length of the rectangle: ";
    cin >> r.length;
    cout << "Please enter the width of the rectangle: ";
    cin >> r.width;

    return r;
}

int main()
{
    // First Way
    Rectangle r;
    InitRectangle(r);
    PrintRectangle(r);

    //Second Way
    Rectangle rect = InitRectangle();
    PrintRectangle(rect);

    return 0;
}
