// Only 2 paths - DOWN & RIGHT

#include <iostream>
#include <string>

using namespace std;

int maze(int sr, int sc, int er, int ec)
{

    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;

    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);

    return rightways + downways;
}

// using only 2 variables -

int maze2(int ec, int er){
    if(ec < 1 || er < 1) return 0; 

    if(ec == 1 && er == 1) return 1;

    int rightways = maze2(ec - 1, er);
    int downways = maze2(ec , er -1);

    return rightways + downways;

}

void viewpath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    viewpath(sr, sc + 1, er,ec, s + 'R'); // RIght
    viewpath(sr + 1, sc, er,ec, s + "D"); // Down
}

// Path using 2 variables

void viewpath2(int er, int ec, string s){
    if(ec < 1 || er < 1) return; 

    if(ec == 1 && er == 1) cout <<s << endl;

     viewpath2(er,ec-1, s + 'R'); // RIght
    viewpath2( er-1,ec, s + "D"); // Down


}

int main()
{

    cout << maze(1, 1, 5,2);  // dimension of a matrix
    cout << endl;
    cout << endl;
    cout << maze2(5,2);
    cout << endl;
    cout << endl;
    
    viewpath(1, 1, 3,3, "");
      cout << endl;
    cout << endl;

    viewpath2(3,3,"");
    return 0;
}
