#include "movie.h"

using namespace std;

void Serials::Init(int lNumberSeries,bool&errorVar) {
    if(viewVar) {cout << "// Serials:Init" << endl;}
    SetNumberSeries(1,errorVar);  if(errorVar != 0) {return;}
}

Serials::Serials():Movie() {
    if(viewVar) {cout << "// Serials::Serials DEFAULT" << endl;}
    bool errorVar = false;
    Init(1,errorVar);
}

Serials::Serials(char fTitle[256],int fNumberSeries, char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar):Movie(fTitle, fCountry, fDirectedBy, fYear,errorVar) {
    if(viewVar) {cout << "// Serials::Serials SETTER" << endl;}
     SetNumberSeries(fNumberSeries,errorVar);
}

void Serials::SetNumberSeries(int lNumberSeries, bool&errorVar) {
    if(viewVar) {cout << "// SetYear" << endl;}
    if(lNumberSeries > 0) {
        numberSeries = lNumberSeries;
        errorVar = false;
    }
    else {
        errorVar = true;
    }
}
int Serials::GetNumberSeries() {
    if(viewVar) {cout << "// GetYear" << endl;}
    return numberSeries;
}
