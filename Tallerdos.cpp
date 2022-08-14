
#include <iostream>
#include <fstream>
using namespace std;

void menu_Principal();
int covertir_numerica(string cadena);
void contador_alfanumerico(string cadena);
void mayuscula(string cadena);

int main(int argc, char **argv)
{

    int opcion;

    do
    {
        menu_Principal();
        fflush(stdin);
        cout << "\n--------------------------------------------------" << endl;
        cout << "Repetir Programa" << endl;
        cout << "1). SI \n2). NO" << endl;
        cout << "Ingrese opcion -> ";
        cin >> opcion;
        cout << "----------------------------------------------------\n\n"
             << endl;
        if (opcion == 2)
        {
            cout << "\nGracias por utilizar mi Progrma!! ";
        }
    } while (opcion != 2);

    return 0;
}

void mayuscula(string cadena)
{
    cout << "\n--------------------------------------------------" << endl;
    cout << "\t****** Convertir a MAyuscula ******" << endl;
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] == ' ' && cadena[i + 1] != ' ')
        {
            cadena[i + 1] = toupper(cadena[i + 1]);
        }
    }

    cout << "Cadena : " << cadena << endl;
}

void contador_alfanumerico(string cadena)
{
    int conta = 0, contn = 0;
    cout << "\n--------------------------------------------------" << endl;
    cout << "\t****** Contador  Alfa-Numericos ******" << endl;
    for (int i = 0; i < cadena.length(); i++)
    {
        for (int j = 48; j < 58; j++)
        {
            if (cadena[i] == j)
            {
                contn++;
            }
        }
        for (int j = 65; j < 91; j++)
        {
            if (cadena[i] == j)
            {
                conta++;
            }
        }
        for (int j = 97; j < 123; j++)
        {
            if (cadena[i] == j)
            {
                conta++;
            }
        }
    }
    cout << "Existen " << contn << " numeros en la cadena." << endl;
    cout << "Existen " << conta << " letras en la cadena." << endl;
}

int covertir_numerica(string cadena)
{

    char numeros[cadena.length()];
    int j = 0, num;
    cout << "\n--------------------------------------------------" << endl;
    cout << "\t****** Conversion a Numeros ******" << endl;
    // fflush(stdin);
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] != ' ')
        {
            numeros[j] = cadena[i];
            j++;
        }
    }

    num = stoi(numeros);
    cout << "dimension del arreglo: " << cadena.length() << endl;
    cout << "numero: " << num << endl;
    float n = num / cadena.length();
    // cout<<"("<<num<<" % "<<cadena.length()<<") = "<<n <<endl;
    if (num % cadena.length() == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void menu_Principal()
{
    string cadena;
    bool alfanumerica = false, numerica = false, alfabetico = false;
    int cont = 0, num;

    cout << "-------------- PROGRAMA PRINCIPAL ---------------" << endl;
    cout << "Ingrese una cadena de Caracteres: ";
    fflush(stdin);
    getline(cin, cadena);

    for (int i = 0; i < cadena.length(); i++)
    {
        for (int j = 48; j < 58; j++)
        {
            if (cadena[i] == j)
            {
                cont++;
            }
            if (cadena[i - 1] == j && cadena[i] == ' ')
            {
                cont++;
            }
        }
    }
    cout << "\n--------------------------------------------------" << endl;
    if (cont == cadena.length())
    {
        numerica = true;
        cout << "\nLa cadena de caracteres es -> Numerica" << endl;
        num = covertir_numerica(cadena);
        if (num == 1)
        {
            cout << "\nEs divisible" << endl;
        }
        else
        {
            cout << "\nNo es divisible" << endl;
        }
    }
    else if (cont != 0 && numerica == false)
    {
        alfanumerica = true;
        cout << "\nLa cadena de caracteres es -> AlfaNumerica" << endl;
        contador_alfanumerico(cadena);
    }
    else
    {
        alfabetico = true;
        cout << "\nLa cadena de caracteres es -> Alfabetica" << endl;
        mayuscula(cadena);
    }

    // cout<<endl<<cadena;
}