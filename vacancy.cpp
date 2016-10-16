#include "vacancy.h"
#include "movie.h"

using namespace std;


void Vacancy::SetTitle(char lTitle[256], bool&errorVar) {
    if(viewVar) {cout << "// SetTitle" << endl;}
    strcpy(title, lTitle);
    errorVar = false;
}
char * Vacancy::GetTitle() {
    if(viewVar) {cout << "// GetTitle" << endl;}
    return title;
}

void Vacancy::SetFullName(char lFullName[256], bool&errorVar) {
    if(viewVar) {cout << "// SetFullName" << endl;}
    strcpy(fullName, lFullName);
    errorVar = false;
}
char * Vacancy::GetFullName() {
    if(viewVar) {cout << "// Vacancy::GetFullName" << endl;}
    return fullName;
}

void Vacancy::Init(char fTitle[256],char fFullName[256],bool&errorVar) {
  if(viewVar) {cout << "// Movie::Init" << endl;}
  SetTitle(fTitle,errorVar); if(errorVar != 0) {return;}
  SetFullName(fFullName,errorVar); if(errorVar != 0) {return;}

}


Vacancy::Vacancy() {
    bool errorVar = false;
    if(viewVar) {cout << "// Vacancy::Vacancy() Default" << endl;}
    Init("<TITLE>", "<FULLNAME>", errorVar);
}

Vacancy::Vacancy(char lTitle[256],char lFullname[256],bool&errorVar) {
    if(viewVar) {cout << "// Vacancy::Vacancy SETTER" << endl;}
    Init(lTitle, lFullname, errorVar);
}
