#include "movie.h"

using namespace std;

void Movie::SetTitle(char lTitle[256], bool&errorVar) {
    if(viewVar) {cout << "// SetTitle" << endl;}
    strcpy(title, lTitle);
    errorVar = false;
}
char * Movie::GetTitle() {
    if(viewVar) {cout << "// GetTitle" << endl;}
    return title;
}

void Movie::SetCountry(char lCountry[256], bool&errorVar) {
    if(viewVar) {cout << "// SetCountry" << endl;}
    strcpy(country, lCountry);
    errorVar = false;
}
char * Movie::GetCountry() {
    if(viewVar) {cout << "// GetCountry" << endl;}
    return country;
}

void Movie::SetDirectedBy(char lDirectedBy[256], bool&errorVar) {
    if(viewVar) {cout << "// SetDirectedBy" << endl;}
    strcpy(directedBy, lDirectedBy);
    errorVar = false;
}
char * Movie::GetDirectedBy() {
    if(viewVar) {cout << "// GetDirectedBy" << endl;}
    return directedBy;
}

void Movie::SetYear(int lYear, bool&errorVar) {
    if(viewVar) {cout << "// SetYear" << endl;}
    year = lYear;
}
char Movie::GetYear() {
    if(viewVar) {cout << "// GetYear" << endl;}
    return year;
}


Movie::Movie(bool fViewVar) {
    viewVar = fViewVar; if(viewVar) {cout << "// Movie::Movie Default" << endl;}
    strcpy(title, "<TITLE>");
    strcpy(country, "<COUNTRY>");
    strcpy(directedBy, "<DIRECTEDBY>");
    year = 1895;
}

Movie::Movie(char fTitle[256], char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar,bool fViewVar) {
    viewVar = fViewVar; if(viewVar) {cout << "// Movie::Movie SETTER" << endl;}
    SetTitle(fTitle,errorVar); if(errorVar != 0) {return;}
    SetCountry(fCountry,errorVar); if(errorVar != 0) {return;}
    SetDirectedBy(fDirectedBy,errorVar); if(errorVar != 0) {return;}
    SetYear(fYear,errorVar); if(errorVar != 0) {return;}

}
