/*Obiettivo:
Definisci una struttura Studente con:
char nome[50]
float voto
int matricola

Leggi 5 studenti, poi:
Trova quello con voto più alto
Trova quello con voto più basso

Calcola la media dei voti

Stampa tutto usando una funzione dedicata*/


#include <stdio.h>

typedef struct{
    char name[20];
    float grade;
    int matricola;
} Student;
//////////////////////////////////////////////////////////////////////////////////
Student InsertStudent(int i){
    Student student;
    
    printf("Insert the name of the student %d",i);
    scanf("%s",student.name);

    printf("Insert the registration number of the student %d",i);
    scanf("%d",&student.matricola);

    printf("Insert the grade of the student %d",i);
    scanf("%f",&student.grade);

    return student;
    
}
Student FindBest(Student student[], int size){
    Student best;
    best = student[0];
    
    for (int i=0; i< size; i++){
        if (student[i].grade > best.grade){
            best = student[i];           
        } 
    }
    return best;    
}
Student FindWorst(Student student[], int size){
    Student worst;
    worst = student[0];
    
    for (int i=0; i < size; i++){
        if (student[i].grade < worst.grade){
            worst = student[i];           
        } 
    }
    return worst;    
}


float fun_mean(Student student[], int size){
    float media = 0.0;
    for (int i=0; i < size; i++){
        media += student[i].grade;
        } 
    media /= size;
    return media;
}



int PrintResult(Student best, Student worst, float media){

    printf("Lo studente migliore è %s\n",best.name);
    printf("Lo studente peggiore è %s\n",worst.name);
    printf("La media è %4.2f\n",media);

    return 0;    
}

////////////////////////////////////////////////////////////////////////////////////
int main() {

    Student student[3], best, worst;
    
    
    // leggi 5 studenti
    for (int i=0;i<5;i++){
        student[i] = InsertStudent(i); 
    }

    // trova quello con il voto più alto e più basso
    best = FindBest(student,5);
    worst = FindWorst(student,5);

    // calcola la media
    float media = fun_mean(student,5);

    // stampa i risultati
    PrintResult(best, worst, media);
    printf("Lo studente migliore è %s",best.name);
    return 0;
}
/*
class Student():
    def __init__(self, name, grade, matricola):
        self.name = name;
        self.grade = grade;
        self.matricola = matricola;
        
students = [];

names = []
grades = []

for i in range(3):
    name = input(f"Insert the name of the student {i+1}:\n")
    grade = input(f"Insert the grade of the student{i+1}:\n")
    matricola = input(f"Insert the matricola of the student{i+1}:\n")
    #students.append(Student(name,grade,matricola))
    grades.append(int(grade))
    names.append(name)
    


import numpy as np

best = grades.index(np.max(grades))
print(names[best])

worst = grades.index(np.min(grades))
print(names[worst])
print(np.mean(grades))
*/
