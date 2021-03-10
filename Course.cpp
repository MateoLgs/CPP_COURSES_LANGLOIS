#include "Course.h"

using namespace std;

Course::Course(int idCourse, std::string coureur1, float tempsUn, std::string coureur2, float tempsDeux,std::string coureur3, float tempsTrois)
{
    id = idCourse;
    nom1=coureur1;
    temps1= tempsUn;
    nom2=coureur2;
    temps2=tempsDeux;
    nom3=coureur3;
    temps3=tempsTrois;
}


void Course::numeroCourse(){
    cout << "Course :" << id << endl;
}

void Course::moyenneTemps(){
    int moyenneTemps;
    moyenneTemps = (temps1 + temps2 + temps3 )/3;
    cout << "Moyenne des temps :" << moyenneTemps << endl;
}

void Course::meilleurTemps(){

    if(temps1>temps2 && temps1>temps3){
        cout << "Meilleur temps : " << temps1 << endl;
    }
    if(temps2>temps1 && temps2>temps3){
        cout << "Meilleur temps : " << temps2 << endl;
    }
    if(temps3>temps2 && temps3>temps1){
        cout << "Meilleur temps : " << temps2 << endl;
    }
}

void Course::ajouterTemps(){
   //
}

void Course::meilleurCoureur(){
    std::string meilleurCoureur;
    if(temps1>temps2 && temps1>temps3){
        meilleurCoureur = nom1;
    }
    if(temps2>temps1 && temps2>temps3){
        meilleurCoureur = nom2;    
    }    
    if(temps3>temps2 && temps3>temps1){
        meilleurCoureur = nom3;
    }
    cout << "Meilleur coureur : " << meilleurCoureur << endl;
}