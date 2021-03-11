#include "Course.cpp"
#include<iostream>

using namespace std;

//Le meilleur temps est 
int main(){
    int course1joueur1[4] ;
    int course1joueur2[4] ;
    int course1joueur3[4] ;
    course1joueur1[0] = 6;
    course1joueur1[1] = 8;
    course1joueur1[2] = 4;
    course1joueur1[3] = 7;
    course1joueur1[4] = 9;

    course1joueur2[0] = 11;
    course1joueur2[1] = 4;
    course1joueur2[2] = 5;
    course1joueur2[3] = 10;
    course1joueur2[4] = 6;

    course1joueur3[0] = 4;
    course1joueur3[1] = 5;
    course1joueur3[2] = 11;
    course1joueur3[3] = 7;
    course1joueur3[4] = 12;
    int course1bestScoreJoueur1=0;
    int course1bestScoreJoueur2=0;
    int course1bestScoreJoueur3=0;
    for(int i=0;i<4;i++){
        if(course1joueur1[i]>course1bestScoreJoueur1){
            course1bestScoreJoueur1=course1joueur1[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course1joueur2[i]>course1bestScoreJoueur2){
            course1bestScoreJoueur2=course1joueur2[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course1joueur3[i]>course1bestScoreJoueur3){
            course1bestScoreJoueur3=course1joueur3[i];
        }
    }

    int course2joueur1[4] ;
    int course2joueur2[4] ;
    int course2joueur3[4] ;
    course2joueur1[0] = 6;
    course2joueur1[1] = 8;
    course2joueur1[2] = 4;
    course2joueur1[3] = 7;
    course2joueur1[4] = 9;

    course2joueur2[0] = 11;
    course2joueur2[1] = 4;
    course2joueur2[2] = 5;
    course2joueur2[3] = 10;
    course2joueur2[4] = 6;

    course2joueur3[0] = 4;
    course2joueur3[1] = 5;
    course2joueur3[2] = 11;
    course2joueur3[3] = 7;
    course2joueur3[4] = 12;
    int course2bestScoreJoueur1=0;
    int course2bestScoreJoueur2=0;
    int course2bestScoreJoueur3=0;
    for(int i=0;i<4;i++){
        if(course2joueur1[i]>course2bestScoreJoueur1){
            course2bestScoreJoueur1=course2joueur1[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course2joueur2[i]>course2bestScoreJoueur2){
            course2bestScoreJoueur2=course2joueur2[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course2joueur3[i]>course2bestScoreJoueur3){
            course2bestScoreJoueur3=course2joueur3[i];
        }
    }

    int course3joueur1[4] ;
    int course3joueur2[4] ;
    int course3joueur3[4] ;
    course3joueur1[0] = 6;
    course3joueur1[2] = 4;
    course3joueur1[3] = 7;
    course3joueur1[4] = 9;

    course3joueur2[0] = 11;
    course3joueur2[1] = 4;
    course3joueur2[2] = 5;
    course3joueur2[3] = 10;
    course3joueur2[4] = 6;

    course3joueur3[0] = 4;
    course3joueur3[1] = 5;
    course3joueur3[2] = 11;
    course3joueur3[3] = 7;
    course3joueur3[4] = 12;
    int course3bestScoreJoueur1=0;
    int course3bestScoreJoueur2=0;
    int course3bestScoreJoueur3=0;
    for(int i=0;i<4;i++){
        if(course3joueur1[i]>course3bestScoreJoueur1){
            course3bestScoreJoueur1=course3joueur1[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course3joueur2[i]>course3bestScoreJoueur2){
            course3bestScoreJoueur2=course3joueur2[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course3joueur3[i]>course3bestScoreJoueur3){
            course3bestScoreJoueur3=course3joueur3[i];
        }
    }

    int course4joueur1[4] ;
    int course4joueur2[4] ;
    int course4joueur3[4] ;
    course4joueur1[0] = 6;
    course4joueur1[1] = 8;
    course4joueur1[2] = 4;
    course4joueur1[3] = 7;
    course4joueur1[4] = 9;

    course4joueur2[0] = 11;
    course4joueur2[1] = 4;
    course4joueur2[2] = 5;
    course4joueur2[3] = 10;
    course4joueur2[4] = 6;

    course4joueur3[0] = 4;
    course4joueur3[1] = 5;
    course4joueur3[2] = 11;
    course4joueur3[3] = 7;
    course4joueur3[4] = 12;
    int course4bestScoreJoueur1=0;
    int course4bestScoreJoueur2=0;
    int course4bestScoreJoueur3=0;
    for(int i=0;i<4;i++){
        if(course4joueur1[i]>course4bestScoreJoueur1){
            course4bestScoreJoueur1=course4joueur1[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course4joueur2[i]>course4bestScoreJoueur2){
            course4bestScoreJoueur2=course4joueur2[i];
        }
    }
        for(int i=0;i<4;i++){
        if(course4joueur3[i]>course4bestScoreJoueur3){
            course4bestScoreJoueur3=course4joueur3[i];
        }
    }
    Course course1(1,"Coureur1",course1bestScoreJoueur1,"Coureur2",course1bestScoreJoueur2,"Coureur3",course1bestScoreJoueur3);
    Course course2(2,"Coureur1",course2bestScoreJoueur1,"Coureur2",course2bestScoreJoueur2,"Coureur3",course2bestScoreJoueur1);
    Course course3(3,"Coureur1",course3bestScoreJoueur1,"Coureur2",course3bestScoreJoueur2,"Coureur3",course3bestScoreJoueur1);
    Course course4(4,"Coureur1",course4bestScoreJoueur1,"Coureur2",course4bestScoreJoueur2,"Coureur3",course4bestScoreJoueur1);
    course1.numeroCourse();
    course1.meilleurTemps();
    course1.moyenneTemps();
    course1.meilleurCoureur();

    course2.numeroCourse();
    course2.meilleurTemps();
    course2.moyenneTemps();
    course2.meilleurCoureur();

    course3.numeroCourse();
    course3.meilleurTemps();
    course3.moyenneTemps();
    course3.meilleurCoureur();

    course4.numeroCourse();
    course4.meilleurTemps();
    course4.moyenneTemps();
    course4.meilleurCoureur();
}