#include "Course.cpp"
#include<iostream>

using namespace std;

//Le meilleur temps est 
int main(){
    int joueur1[4] ;
    int joueur2[4] ;
    int joueur3[4] ;
    joueur1[0] = 6;
    joueur1[1] = 8;
    joueur1[2] = 4;
    joueur1[3] = 7;
    joueur1[4] = 9;
    joueur2[0] = 11;
    joueur2[1] = 4;
    joueur2[2] = 5;
    joueur2[3] = 10;
    joueur2[4] = 6;
    joueur3[0] = 4;
    joueur3[1] = 5;
    joueur3[2] = 11;
    joueur3[3] = 7;
    joueur3[4] = 12;
    int bestScoreJoueur1=0;
    int bestScoreJoueur2=0;
    int bestScoreJoueur3=0;
    for(int i=0;i<4;i++){
        if(joueur1[i]>bestScoreJoueur1){
            bestScoreJoueur1=joueur1[i];
        }
    }
        for(int i=0;i<4;i++){
        if(joueur2[i]>bestScoreJoueur2){
            bestScoreJoueur2=joueur2[i];
        }
    }
        for(int i=0;i<4;i++){
        if(joueur3[i]>bestScoreJoueur3){
            bestScoreJoueur3=joueur3[i];
        }
    }
    Course course1(1,"Coureur1",bestScoreJoueur1,"Coureur2",bestScoreJoueur2,"Coureur3",bestScoreJoueur3);
    Course course2(2,"Coureur1",bestScoreJoueur1,"Coureur2",bestScoreJoueur2,"Coureur3",bestScoreJoueur1);
    course1.numeroCourse();
    course1.meilleurTemps();
    course1.moyenneTemps();
    course1.meilleurCoureur();
}