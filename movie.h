#include <windows.h>
#include <conio.h>
#include <stdio.h>

#include <iostream>
#include <string.h>

#include "vacancy.h"
#include "vote.h"
#include "serials.h"
#include "docmovie.h"

using namespace std;

#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED

class Movie{
    private:
        Vacancy * objDirectedBy;
        Vote * objVote;
        char title[256], country[256], directedBy[256];
        int year;
        float rating;
        char about[256];
        char name[256];
        void Init(char fTitle[256], char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar);

    public:
        void SetTitle(char lTitle[256], bool&errorVar);
        char * GetTitle();

        void SetCountry(char lCountry[256], bool&errorVar);
        char * GetCountry();

        void SetDirectedBy(char lDirectedBy[256], bool&errorVar);
        char * GetDirectedBy();

        void SetYear(int lYear, bool&errorVar);
        char GetYear();

        void SetVoteRating(int* , int );
        float GetVoteRating();

        void SetAbout(float);
        char * GetAbout();

        Movie();
        Movie(char fTitle[256], char fCountry[256], char fDirectedBy[256], int year,bool&errorVar);
        ~Movie();

    protected:
        bool viewVar = true;

};



#endif // MOVIE_H_INCLUDED
