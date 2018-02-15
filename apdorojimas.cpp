#include <iostream>
#include <iomanip>
#include <fstream>
using std::cin;
using std::cout;
using std::string;
using std::ifstream;
using std::setprecision;
using std::endl;
int main()
{
    ifstream fd("duom.txt");
    string vardas;
    string pavarde;
    int n;
    int k;
    fd>>n;
    double balai;
    double vidurkis=0;
    double galutinis;
    double egzaminas;
    cout<<"kaip vertinsime?"<<endl<<"1 - vidurkis   2 - mediana"<<endl;
    cin>>k;
    if(k==1)
    {
    for(int i=0; i<n;i++)
    {
        fd>>balai;
        vidurkis=balai+vidurkis;
    }
    fd>>egzaminas;
    galutinis=0.4*(vidurkis/n)+0.6*egzaminas;
    cout<<setprecision(3)<<galutinis;
    }
    if(k==2)
    {
        for(int i=0; i<n;i++)
    {
        fd>>balai;
        if(n/2==i)
            cout<<balai<<endl;
    }
    }
    fd.close();
    return 0;

}
