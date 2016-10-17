#include "vote.h"
#include "movie.h"

using namespace std;

void Vote::Init(int *lVotes, int lNum) {
    if(viewVar) {cout << "// Vote::Init" << endl;}
    num = lNum;
    SetVotes(lVotes,num);

}


Vote::Vote() {
    if(viewVar) {cout << "// Vote::Vote()  default" << endl;}
    num = 1;
    int * fVotes =  new int[num];
    fVotes[0] = 0;
    Init(fVotes,num);
}

Vote::Vote(Movie * fObj) {
    if(viewVar) {cout << "// Vote::Vote()  with Movie" << endl;}
    num = 1;
    int * fVotes =  new int[num];
    fVotes[0] = 0;
    objMovie = fObj;
    Init(fVotes,num);

}
Vote::Vote(int *fVotes, int fNum) {
    if(viewVar) {cout << "// Vote::Vote setter" << endl;}
    Init(fVotes,fNum);
}
Vote::~Vote() {
    if(viewVar) {cout << "// Vote::~Vote()" << endl;}
    delete[] votes;

}

void Vote::SetVotes(int* lVotes, int lNum) {
    if(viewVar) {cout << "// Vote::SetVotes" << endl;}
    votes = new int[lNum];
    for(int i = 0; i < lNum; i++) {
        votes[i] = lVotes[i];
    }
}

void Vote::GetVotes(int* lVotes, int& lNum) {
    if(viewVar) {cout << "// Vote::GetVotes" << endl;}
    for(int i = 0; i < num; i++) {
        lVotes[i] = votes[i];
    }
    lNum = num;
}

float Vote::GetRating() {
    if(viewVar) {cout << "// Vote::GetRating()" << endl;}
    int sum = 0;
    for(int i = 0; i < num; i++) {
        sum += votes[i];
    }
    float rating = sum/num;
    objMovie -> SetAbout(rating);
    return rating;
}
