#include "movie.h"

using namespace std;

void DocMovie::Init(char fSubject[256],bool&errorVar) {
    if(viewVar) {cout << "// DocMovie:Init" << endl;}
    SetSubject(fSubject,errorVar);  if(errorVar != 0) {return;}

}

DocMovie::DocMovie():Movie() {
    if(viewVar) {cout << "// Serials::Serials DEFAULT" << endl;}
    bool errorVar=false;
    Init("<noname>",errorVar);

}


DocMovie::DocMovie(char fTitle[256], char fSubject[256],char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar):Movie(fTitle, fCountry, fDirectedBy, fYear,errorVar) {
    if(viewVar) {cout << "// Serials::Serials SETTER" << endl;}
    Init(fSubject,errorVar);
}

void DocMovie::SetSubject(char lSubject[256], bool&errorVar) {
    if(viewVar) {cout << "// DocMovie::SetSubject" << endl;}
    strcpy(subject, lSubject);
    errorVar = false;
}
char * DocMovie::GetSubject() {
    if(viewVar) {cout << "// DocMovie::GetSubject" << endl;}
    return subject;
}
