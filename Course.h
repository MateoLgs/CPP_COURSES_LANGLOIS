#include <iostream>
#include <string>
using namespace std;

class Course{
    public:
        Course();
        Course(int idCourse, std::string coureur1, float temps1, std::string coureur2, float temps2,std::string courer3, float temps3);
        void numeroCourse();
        void moyenneTemps();
        void meilleurTemps();
        void ajouterTemps();
        void meilleurCoureur();


    private:
        int id;
        float temps1;
        std::string nom1;
        float temps2;
        std::string nom2;
        float temps3;
        std::string nom3;
};