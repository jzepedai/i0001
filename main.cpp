#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


int main(){   //Test number 02 with binary data

	ofstream archivo("prueba06.dat",ios::out | ios::binary);
	unsigned t0, t1;
	t0=clock();


 	//archivo.open("C:\\Users\\Julián\\Desktop\\Blockchain\\prueba06.dat");
    if(!archivo){
        cerr << "No se pudo abrir el archivo."<<endl;
    }

 	for (int i=0; i<136637; i++){
    	archivo << "qqqq 3 " << endl;
    //	archivo << i << endl;
    	//archivo << hash << endl;

	}

    archivo.close();
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
	cout << "Execution Time: " << time << endl;

	return 0;
}
