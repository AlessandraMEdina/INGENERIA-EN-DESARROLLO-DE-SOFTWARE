
#include <iostream>

using namespace std;

int main()
{
    int edad   = 0;
    cout<<"escribe tu edad:";
    cin >> edad;
    //cout << edad;
    
    if(edad>=18)
    {
        cout<<"el ususuario es mayor de edad";
    }
    else
    {
        cout<<"el usuario es menor de edad";
    }

    return 0;
}