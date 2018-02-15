#include <iostream>
#include <iomanip>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::ifstream;
using std::setprecision;
int main()
{
    ifstream fd("duom.txt");
    string vardas;
    string pavarde;
    int n;
    fd>>n;
    double balai;
    double vidurkis=0;
    double galutinis;
    double egzaminas;
    for(int i=0; i<n;i++)
    {
        fd>>balai;
        vidurkis=balai+vidurkis;
    }
    fd>>egzaminas;
    galutinis=0.4*(vidurkis/n)+0.6*egzaminas;
    cout<<setprecision(3)<<galutinis;
    fd.close();
    return 0;

}
