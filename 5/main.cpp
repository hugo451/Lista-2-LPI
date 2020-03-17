#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    ofstream filebkp;
    string str;

    file.open("dados.txt");
    filebkp.open("dadosbkp.txt");

    if (!file.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo para leitura" << endl;
    }
    while (true)
    {
        if (file.eof() || file.bad() || file.fail())
            break;

        getline(file, str);
        filebkp << str << endl;
    }
    file.close();
    filebkp.close();

    return 0;
}