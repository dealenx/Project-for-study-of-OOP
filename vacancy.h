#ifndef VACANCY_H_INCLUDED
#define VACANCY_H_INCLUDED


class Vacancy {
    private:
        char title[256];
        char fullName[256];
        bool viewVar = true;

        void Init(char fTitle[256],char fFullname[256],bool&errorVar);
    public:
        void SetTitle(char lTitle[256], bool&errorVar);
        char * GetTitle();

        void SetFullName(char lFullName[256], bool&errorVar);
        char * GetFullName();

        Vacancy();
        Vacancy(char lTitle[256],char lFullname[256],bool&errorVar);
};

#endif // VACANCY_H_INCLUDED
