#include <iostream>


using namespace std;
int main()
{
	cout << "\t Moj kolejny kalkulatorek"<< endl;
	{
	
		cout << "\t Dokonaj wyboru"<< endl;	
		cout << "[1] Km  " << endl;
		cout << "[2] Mile  " << endl;
		cout << "[3] Jardy" << endl;
		cout << "[4] WYJSCIE  " << endl;
	}	
	int wybor;
    cin >> wybor;
    
    
    switch( wybor )
    case 1:
			{
		cout << "OK wybrales kilometry" << endl << endl;
		cout << "Podaj ilosc kilometrow, zatwierdz ENTER " << endl << endl;
        
        float a;
        cin >> a;
        cout << "Twoje kilometry to  \n" ;
        cout << " mil   :"
		<< a/ 1.609 << endl << endl << endl;
		cout << " jardow:"
		<< a/ 1.609 / 1760 << endl << endl << endl;
        return main();
        
        break;
    
	case 2:
			
		cout << "OK wybrales mile" << endl << endl;
		cout << "Podaj ilosc mil, zatwierdz ENTER " << endl << endl;
        
        float b;
        cin >> b;
        cout << "Twoje mile to  \n" ;
        cout << " km   :"
		<< b * 1.609 << endl << endl << endl;
		cout << " jardow:"
		<< b * 1760 << endl << endl << endl;
        return main();
        
        break;
        
        case 3:
			
		cout << "OK wybrales jardy" << endl << endl;
		cout << "Podaj ilosc jardow, zatwierdz ENTER " << endl << endl;
        
        float d;
        cin >> d;
        cout << "Twoje jardy to  \n" ;
        cout << " mile      :"
		<< d / 1760 << endl << endl << endl;
		cout << " kilometry :"
		<< d / 1760 / 1.609 << endl << endl << endl;
        return main();
        
        case 4:
        cout << "KONIEC" << endl;
        break;
        
        
    }
	getchar();
}
