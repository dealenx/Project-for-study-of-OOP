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
    objDirectedBy -> SetFullName(lDirectedBy, errorVar);
    errorVar = false;
}
char * Movie::GetDirectedBy() {
    if(viewVar) {cout << "// GetDirectedBy" << endl;}
    strcpy(directedBy,objDirectedBy -> GetFullName());
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


void Movie::SetVoteRating(int* lVotes, int lNum) {
    if(viewVar) {cout << "// Movie::SetVoteRating" << endl;}
    objVote -> SetVotes(lVotes, lNum);
}
float Movie::GetVoteRating() {
    if(viewVar) {cout << "// Movie::GetVoteRating()" << endl;}
    rating = objVote -> GetRating();
    return rating;
}
void Movie::SetAbout(float lRating) {
    if(viewVar) {cout << "// Movie::SetAbout()" << endl;}
    if( (lRating > 0)&&(lRating < 4) ) {
        strcpy(about, "Very Bad!");
    }
    if( (lRating > 3)&&(lRating < 6) ) {
        strcpy(about, "Bad!");
    }
    if( (lRating > 3)&&(lRating < 6) ) {
        strcpy(about, "Bad!");
    }
    if( (lRating > 5)&&(lRating < 8) ) {
        strcpy(about, "Normal!");
    }
    if (lRating > 7) {
        strcpy(about, "Excellent!");
    }
    if (lRating == 0) {
        strcpy(about, "Nothing. . .");
    }
}
char * Movie::GetAbout() {
    if(viewVar) {cout << "// GetAbout()" << endl;}
    return about;
}


void Movie::Init(char fTitle[256], char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar) {
  if(viewVar) {cout << "// Movie::Init" << endl;}
  objDirectedBy = new Vacancy("Directed By", "<noname>",errorVar);
  SetTitle(fTitle,errorVar); if(errorVar != 0) {return;}
  SetCountry(fCountry,errorVar); if(errorVar != 0) {return;}
  SetDirectedBy(fDirectedBy,errorVar); if(errorVar != 0) {return;}
  SetYear(fYear,errorVar); if(errorVar != 0) {return;}
  rating = 0;
  objVote = new Vote(this);
  strcpy(about, "Nothing. . .");

}

Movie::Movie() {
    bool errorVar = false;
    if(viewVar) {cout << "// Movie::Movie Default" << endl;}
    Init("<TITLE>", "<COUNTRY>", "<noname>", 1895,errorVar);


}

Movie::Movie(char fTitle[256], char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar) {
    if(viewVar) {cout << "// Movie::Movie SETTER" << endl;}
    Init(fTitle, fCountry, fDirectedBy, fYear,errorVar);
}
Movie::~Movie() {
    delete objDirectedBy;
    delete objVote;
}
