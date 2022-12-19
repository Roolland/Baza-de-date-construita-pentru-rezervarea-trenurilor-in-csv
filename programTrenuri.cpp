void programTrenuri(char numeUtilizator[]){
   ifstream myFileProgram;
    myFileProgram.open("data_trenuri.csv");
cout << endl << "Programul de trenuri este : " << endl << endl;
string data_base;
ofstream myFileUtilizator;
    myFileUtilizator.open(strcat(numeUtilizator,".csv"));
    

int i = 0;
    while(myFileProgram.good())
    {
         string line;
        getline(myFileProgram, line, ';');
        data_base += line;
        //cout << line << " ";
    }

myFileProgram.close();

    char ruta[100];
    char data[100];
    bool scriere = true;


cout << data_base;



while(scriere)
{
    cout << endl <<  "Ce ruta doriti ";
    cin >> ruta ;
for(i = 0 ; i < strlen(ruta) ; i++)
if(ruta[i] == '-' ) {
    scriere = false;
    cout << endl << "Ati introdus ruta corect";
    myFileUtilizator << ruta << ";" ;
}

if( i == strlen(ruta) && scriere == true) cout << "N-ati introdus ruta corect";

}

scriere = true;

while(scriere)
{
    cout << endl << "Introduceti data si ora sub forma dd/mm/yyyy-cc:cc ";
    cin >> data;
    cout << data[2] << data[5] << data[10] << data[13];
    if( data[2] == '/' && data[5] == '/' && data[10] == '-' && data[13] == ':') {scriere = false;
myFileUtilizator << data << endl ;
cout << "Ati introdus formatul corect";
    }
    else cout  << "Ati scris formatul gresit";





}
}