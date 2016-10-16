#include <windows.h>
#include <conio.h>
#include <stdio.h>

#include <iostream>
#include <string.h>

#include "vacancy.h"

using namespace std;

#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED

class Movie{
    private:
        Vacancy * objDirectedBy;
        char title[256], country[256], directedBy[256];
        int year;
        char name[256];
        bool viewVar = true;
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

        Movie();
        Movie(char fTitle[256], char fCountry[256], char fDirectedBy[256], int year,bool&errorVar);

};



#endif // MOVIE_H_INCLUDED
