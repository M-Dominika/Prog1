#include <iostream>
#include <windows.h>
using namespace std;

static void palya_rajzolasa(int x, int y, string palya[20][40]) {
    system("cls");
    for (int i = 0; i < 20;i++)
    {
        for (int j = 0; j < 40; j++)
        {
            if (i == 0 || i == 19)
            {
                palya[i][j] = "=";
            }
            else if (j == 0 || j == 39)
            {
                palya[i][j] = "|";
            }
            else if (x == i && y == j)
            {
                palya[i][j] = "o";
            }
            else {
                palya[i][j] = " ";
            }
            cout << palya[i][j];
        }
        cout << endl;
    }
}

void kovetkezo_lepes(int& x, int& y, int& x_iranya, int& y_iranya)
{
    if (x + x_iranya == 19 || x + x_iranya == 0)
    {
        x_iranya *= -1;
    }
    if (y + y_iranya == 39 || y + y_iranya == 0)
    {
        y_iranya *= -1;
    }
    x = x + x_iranya;
    y = y + y_iranya;
}

void lejatszas(int& sebesseg)
{
    string v = " ";
    while (v != "l" && v != "n" && v != "g")
    {
        cout << "Valaszd ki a labda sebesseget: lassu - l, normal - n, gyors - g! " << endl;
        cin >> v;
        if (v == "l")
        {
            sebesseg = 800;
        }
        else if (v == "n")
        {
            sebesseg = 400;
        }
        else if (v == "g")
        {
            sebesseg = 100;
        }
        else
        {
            cout << "Kerlek a megadott lehetosegek kozul valassz! " << endl;
        }
    }
}

int main()
{
    string palya[20][40];
    int x = 1;
    int y = 1;
    int x_iranya = 1;
    int y_iranya = 1;
    int sebesseg = 0;

    lejatszas(sebesseg);

    while (true)
    {
        palya_rajzolasa(x, y, palya);
        kovetkezo_lepes(x, y, x_iranya, y_iranya);
        Sleep(sebesseg);
    }
}
