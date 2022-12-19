#include "programTrenuri.cpp"

void optiuniConectare ()
{
    char numeUtilizator[50];
    char parolaUtilizator[50];
    int lungime;
    int encriptareLungime;
    char optiuni[50];
    string encriptareParolaLocal;


    bool nume;
    bool parola;
    int index = 0;
    int p;
    int j;

cout << "Introduceti numele de utilizator: ";
cin >> numeUtilizator ;

cout << "Introduceti parola: ";
cin >> parolaUtilizator;

encriptareParolaLocal = encriptareParola(parolaUtilizator);
encriptareLungime = encriptareParolaLocal.length();
char parolaEncriptata[encriptareLungime];
strcpy(parolaEncriptata, encriptareParolaLocal.c_str());

ifstream myFile;
    myFile.open("data_base_nou.csv");

    while(myFile.good())
    {

        p = 0;
        j = 0;

        string line;
        getline(myFile, line, ';');
        
        lungime = line.length();
        char linie[lungime+1];
        strcpy(linie, line.c_str());
        for(int i = 0 ; i < lungime ; i++)
        {
        if(linie[i] == numeUtilizator[p]) p++;

        else p = 0;

        if(linie[i] == parolaEncriptata[j]) j++;

        else j = 0;

        if (p == strlen(numeUtilizator)) nume = true;
        if (j == strlen(parolaEncriptata)) parola = true;
        }
        

    }


    if (parola == true && nume == true) {
        cout << "V-ati conectat";
    
    programTrenuri(numeUtilizator);
    
    }



    if(parola == false && nume == true) cout << "Ati introdus parola gresit";
    if(parola == true && nume == false) cout << "Ati introdus numele gresit gresit";
    if(parola == false && nume == false) {
        cout << "Acest cont nu exista! Doriti sa creeati un cont nou, da/nu :";
        cin >> optiuni;

        if(strcmp(optiuni,"da") == 0 ) creareCont();
        else cout << endl << "Nu mai exista alte opituni";

    }
        
        
    



}