#ifndef SERIALS_H_INCLUDED
#define SERIALS_H_INCLUDED

#include "movie.h"

class Serials: public Movie {
    private:
        int numberSeries;
        void Init(int lNumberSeries,bool&errorVar);
    public:
        Serials();
        Serials(char fTitle[256],int fNumberSeries, char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar);

        void SetNumberSeries(int lNumberSeries, bool&errorVar);
        int GetNumberSeries();
};

#endif // SERIALS_H_INCLUDED
