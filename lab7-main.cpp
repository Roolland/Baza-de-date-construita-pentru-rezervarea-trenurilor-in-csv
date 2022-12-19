#include "lab7-header.h"
#include "encriptare.cpp"
#include "creareCont.cpp"
#include "optiuniConectare.cpp"
//#include "programTrenuri.cpp"


int main()
{
    int numarPersoane;
    ofstream myFile;
    char numeCont[50];
    char parolaCont[50];
   
    int numarCurse;
    char numeCursa[200];
    char dataCursa[50];

//Crearea bazei de date pentru cursele de trenuri
ofstream myFileCursa;
    myFileCursa.open("data_trenuri.csv");
    
    cout << "Introduceti numarul de curse din baza de date" << endl ;
    cin >> numarCurse;

    for(int i = 1 ; i <= numarCurse ; i++)
    {
        cout << "Introduceti " << i << " cursa dorita sub forma orasul din care plecati - orasul in care vreti sa ajungeti : "  ;
        cin >> numeCursa;
        cout << "Introduceti " << i << " data la care pleaca cursa sub forma dd/mm/yyyy-cc:cc : " ; 
        cin >> dataCursa;

        myFileCursa<< numeCursa << ";" << dataCursa << endl;
       
    }

    /*
     Crearea bazei de date

    myFile.open("data_base.csv");
    crearea bazei de date
    cout << "Cate persoane doriti introduse in baza de date?" << endl ;
    cin >> numarPersoane;

    for(int i = 1 ; i <= numarPersoane ; i++)
    {
        cout << "Introduceti numele contului " << i << " persoane: ";
        cin >> numeCont;
        cout << "Introduceti parola contului " << i << " persoane: ";   
        cin >> parolaCont;

        myFile<< numeCont << ";" << encriptareParola(parolaCont) << endl;
       
    }
*/
    
    bool optiuni = true;
    char* conectare;
    char utilizator[30];
    char* null;

    while(optiuni)
    {
        cout  << "Doriti sa va conectati pe cont?" << endl << "Tastati da sau nu: ";
        cin >> conectare;

         if(strcmp(conectare,"nu") == 0 ) 
         
            {
            cout << "Doriti sa creati un nou utilizator?" << endl << "Tastati da sau nu: ";
            cin>> utilizator;

            if(strcmp(utilizator,"nu" ) == 0) 
            {
                      cout << "Nu mai exista alte optiuni";
                    optiuni = false;
            }

            else {creareCont();
            }

            }
        else {
        optiuniConectare();
        break;
        }
         
        


    }
    return 0;
}