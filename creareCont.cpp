void creareCont()
{
    ifstream myFile;
    string data;
    myFile.open("data_base.csv");
    int i = 0;
    int numarPersoane = 0;
    ofstream myFile1;
    myFile1.open("data_base_nou.csv");
    bool parola = true;
    bool lungime = true;
    bool lungimeParola;


    while(myFile.good())
    {
        string line;
        getline(myFile, line, ';');

       if ( i == 0)
       myFile1 << line;
       if( i == 1)
       {myFile1 << ";" << line;
            i = 0;}
       i++;
        
        
        //cout << line << endl;
    }

    //cout << data;

    cout << "Ce nume de utilizator doriti : " << endl;
    {
        char *nume;
        cin >> nume;
        myFile1 << nume << ";";
    }
 
 while(parola)
    {
    cout << "Ce parola doriti, minim 7 caractere : "  <<endl;
    
        char parolaSimpla[50];
        char parolaSimplaVerificare[50];
        while(lungimeParola)
        {
        cin >> parolaSimpla;
        if (strlen(parolaSimpla) < 7) cout << "Parola este prea scurta, introduceti din nou parola dorita : ";

        else lungimeParola = false;
        }

        cout << "Introduceti din nou parola dorita : " << endl;
        cin >> parolaSimplaVerificare;

        if( strcmp (parolaSimplaVerificare, parolaSimpla)  == 0 )
        {myFile1 << encriptareParola(parolaSimpla);
        parola = false;

        }

        else {cout << "Verificiarea parolei introduse a esuat, trebuie sa introduceti din nou parola dorita" << endl;
                    lungimeParola = true;
        }

    

    }
   // cout << data;

    myFile.close();
     myFile1.close();
     




}