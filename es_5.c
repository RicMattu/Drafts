// Obiettivo: definire una struttura Studente con nome e voto.
// Leggere 3 studenti, trovarne il voto più alto e stamparne i dati. 

#include <stdio.h>

typedef struct{
    char name[20];
    int  grade;
} Student;


// Definisco una funzione per inserire gli studenti
Student InsertStudent(){
    Student stud;
    
    printf("Insert the name and the grade of the student\n");
    scanf("%19s", stud.name);
    scanf("%d",&stud.grade);

    return stud;
}



// Definisco una funzione che seleziona il miglior studente
Student FindStudent(Student stud[], int size){
    
    Student best_stud = stud[0];
    
    for (int i=0; i<size;i++){
        if (stud[i].grade > best_stud.grade){
            best_stud = stud[i];
        }
    }
    return best_stud;
}



int main() {
    Student stud[3];

    // inseting students   
    for (int i=0; i<3; i++){
        stud[i] = InsertStudent();
    }

    // finding the best_stud
    Student best_stud = FindStudent(stud,3);

    // printing the result
    printf("The name of the best student is %s\t", best_stud.name);
    return 0;
}



