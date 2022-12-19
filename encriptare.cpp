string encriptareParola(char parola[])
{
    int size = strlen(parola);
    int encriptare = 0;
    int publicKey[] = {5,27};
    int numar;
    int mod = 27;
    
    

    for(int i = 0 ; i < size ; i++)
    {   
        
        numar = 1;
        encriptare = 0;
        mod = 0;
        switch(parola[i])
        {
            case 'A' : encriptare = 1;
            break;

            case 'a' : encriptare = 1;
            break;

            case 'B' : encriptare = 2;
            break;

            case 'b' : encriptare = 2;
            break;

            case 'C' : encriptare = 3;
            break;

            case 'c' : encriptare = 3;
            break;

            case 'D' : encriptare = 4;
            break;

            case 'd' : encriptare = 4;
            break;

            case 'E' : encriptare = 5;
            break;

            case 'e' : encriptare = 5;
            break;

            case 'F' : encriptare = 6;
            break;

            case 'f' : encriptare = 6;
            break;

            case 'G' : encriptare = 7;
            break;

            case 'g' : encriptare = 7;
            break;

            case 'H' : encriptare = 8;
            break;

            case 'h' : encriptare = 8;
            break;

            case 'I' : encriptare = 9;
            break;

            case 'i' : encriptare = 9;
            break;

            case 'J' : encriptare = 10;
            break;

            case 'j' : encriptare = 10;
            break;

            case 'K' : encriptare = 11;
            break;

            case 'k' : encriptare = 11;
            break;

            case 'L' : encriptare = 12;
            break;

            case 'l' : encriptare = 12;
            break;

            case 'M' : encriptare = 13;
            break;

            case 'm' : encriptare = 13;
            break;

            case 'N' : encriptare = 14;
            break;

            case 'n' : encriptare = 14;
            break;

            case 'O' : encriptare = 15;
            break;

            case 'o' : encriptare = 15;
            break;

            case 'P' : encriptare = 16;
            break;

            case 'p' : encriptare = 16;
            break;

            case 'Q' : encriptare = 17;
            break;

            case 'q' : encriptare = 17;
            break;

            case 'R' : encriptare = 18;
            break;

            case 'r' : encriptare = 18;
            break;

            case 'S' : encriptare = 19;
            break;

            case 's' : encriptare = 19;
            break;

            case 'T' : encriptare = 20;
            break;

            case 't' : encriptare = 20;
            break;

            case 'U' : encriptare = 21;
            break;

            case 'u' : encriptare = 21;
            break;

            case 'V' : encriptare = 22;
            break;

            case 'v' : encriptare = 22;
            break;

            case 'W' : encriptare = 23;
            break;

            case 'w' : encriptare = 23;
            break;

            case 'X' : encriptare = 24;
            break;

            case 'x' : encriptare = 24;
            break;

            case 'Y' : encriptare = 25;
            break;

            case 'y' : encriptare = 25;
            break;

            case 'Z' : encriptare = 26;
            break;

            case 'z' : encriptare = 26;
            break;



        }
        
        encriptare = encriptare * encriptare * encriptare * encriptare * encriptare;

        //cout << encriptare << endl;

        while(encriptare > mod)
        {   if ( numar * 27 > encriptare) break;
            mod  = 27 * numar;
            numar++;
        }

        
            
            if (encriptare == 1) encriptare = 1;
            else 
             encriptare = encriptare % mod;
       

    switch(encriptare)
    {
        case 0:
        parola[i] = '@';
        break;

        case 1 :
        parola[i] = 'a';
        break;

        case 2 :
        parola[i] = 'b';
        break;

         case 3 :
        parola[i] = 'c';
        break;

        case 4 :
        parola[i] = 'd';
        break;

        case 5 :
        parola[i] = 'e';
        break;

        case 6 :
        parola[i] = 'f';
        break;

         case 7 :
        parola[i] = 'g';
        break;

        case 8 :
        parola[i] = 'h';
        break;

        case 9 :
        parola[i] = 'i';
        break;

        case 10 :
        parola[i] = 'j';
        break;

         case 11 :
        parola[i] = 'k';
        break;

        case 12 :
        parola[i] = 'l';
        break;

        case 13 :
        parola[i] = 'm';
        break;

        case 14 :
        parola[i] = 'n';
        break;

         case 15 :
        parola[i] = 'o';
        break;

        case 16 :
        parola[i] = 'p';
        break;

        case 17 :
        parola[i] = 'q';
        break;

        case 18 :
        parola[i] = 'r';
        break;

         case 19 :
        parola[i] = 's';
        break;

        case 20 :
        parola[i] = 't';
        break;

        case 21 :
        parola[i] = 'u';
        break;

        case 22 :
        parola[i] = 'v';
        break;

         case 23 :
        parola[i] = 'w';
        break;

        case 24 :
        parola[i] = 'x';
        break;

         case 25 :
        parola[i] = 'y';
        break;

        case 26 :
        parola[i] = 'z';
        break;


    }


    }


    return parola;
}