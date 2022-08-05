#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

struct student {
    int id ;
    char code[13] ;
    char name[30] ;
    int age ;
};

struct BOOK
{
    int id;
    char name[20];
    char Author[20];
    float Price;
    char *cat;
};

int main_screen(void) ;
void add_student(void) ;
void add_student_to_list(struct student student) ;
void print_stu (int i) ;
void print_all () ;
int get_last_sudent_index () ;
void save_students_data_on_files (void) ;
void load_students_data_from_files();
void get_student_by_code() ;
void delete_student_by_code();


struct student std[100];
int students_size  = 0 ;

void main()
{
    int continue_fill = 1;
    struct student student ;
    int op ;


    load_students_data_from_files();

    do
    {

        system ("cls");

        printf("press any key to start");
        getch();
        int op = 0 ;

        op = main_screen();

        if (op == 1){
             add_student();
            }
        if (op == 2){
            get_student_by_code();
            }
        if (op == 3){
            delete_student_by_code();
            }
         if (op == 4){
            print_all();
            }
        if (op == 5){
            save_students_data_on_files();
            printf("\n Data saved Good bye \n");
            exit(0);
            }

        }while(1);


        system ("cls");

        printf("\n\n\n\n\n\n");


}
int main_screen(void)
{
        char ch ;
        system ("cls");

        printf("you can make some operation on the data for [%d] students\n" , students_size);
        printf("Press Number From Below:\n");
        printf(" [1] add student\n");
        printf(" [2] student data by code \n");
        printf(" [3] delete student by code \n");
        printf(" [4] print all student data \n");
        printf(" [5] Exit and save\n");


        ch = getch();
        if (ch == 49 )
        {
        return 1 ;
        }
        if (ch == 50 )
        {
        return 2 ;
        }
        if (ch == 51 )
        {
        return 3 ;
        }
        if (ch == 52 )
        {
        return 4 ;
        }
        if (ch == 53 )
        {
        return 5 ;
        }

}
void add_student(void)
{
            struct student std;
            int i = 0 ;
            char ch ;
            int continue_fill = 1 ;
            while (continue_fill == 1)
            {
            printf("\n\nAdd information for students[%d]\n", students_size+1);
            std.id = get_last_sudent_index()+1 ;
            printf("please code:");
            scanf("%s",std.code);
            printf("please name:");
            fflush(stdin);
            gets(std.name);
            printf("please age:");
            scanf("%d",&std.age);

            add_student_to_list(std);
            printf("Press y to enter the data of another student / any key for exit \n");
                ch = getch();
                if (ch != 121 ){
                    continue_fill = 0 ;
                    break ;
                }




            }


}
void add_student_to_list(struct student student)
{
    std[students_size]=student;
    students_size++;
}
int get_last_sudent_index ()
{       int max = 0 ;
        int i ;
        for (i = 0 ; i < students_size ; i++)
            if (std[i].id > max) max = std[i].id ;
        return (max) ;
}
void save_students_data_on_files (void)
{
        FILE * students_file ;
        int i ;

        students_file=fopen("student.dat","wb");

        if (students_size > 0 )
            for (i = 0 ; i < students_size ; i++)
                fwrite(&std[i],sizeof(std[i]),1,students_file);
        fclose(students_file);


}
void load_students_data_from_files (void)
{

        FILE *students_file ;
        struct student student ;
        int i = 0 ;
        students_file=fopen("student.dat","rb");
        if( students_file != NULL)
            while(fread(&student,sizeof(struct student),1,students_file))
                {
                    add_student_to_list(student);
                    i++ ;
                }
        students_size = i ;

}
void get_student_by_code ()
{
    char code[10] ;
    int count = 0 ;
    system("cls");
    printf("Find student with his code \n Enter student code :");
    scanf("%s" , &code);


    for (int i = 0 ; i < students_size ; i++ ) if (strcmp(std[i].code, code) == 0)count++ ;


     if (count > 0 ){
        printf("%-30s%-30s%-30s%-30s\n" ,"Id","Code","Name","Age") ;
        for (int i = 0 ; i < students_size ; i++ ) if (strcmp(std[i].code, code) == 0) print_stu(i);
        }else
            printf("\n [no student found ]");
    printf("\n press any key to back for menu");
    getch();


}
void delete_student_by_code ()
{
    char code[10] ;
    int position = -1 ;
    char ch ;
    system("cls");
    printf("Delete student with his code \n Enter student code :");
    scanf("%s" , &code);


    for (int i = 0 ; i < students_size ; i++ ) if (strcmp(std[i].code, code) == 0) {position = i ;  break ;}


     if (position != -1 ){
        printf("we found the student \n");
        printf("%-30s%-30s%-30s%-30s\n" ,"No.","Code","Name","Age") ;
        print_stu(position);
        printf("Are you sure you want to delete ? y/n");
        ch = getch();
        if (ch == 121)
            for (int i = position ; i < students_size-1 ; i++ ) std[i] = std[i+1]  ;
            students_size-- ;

            printf("\nStudent deleted successfully");
        }else
            printf("\n[no student found ]");
    printf("\npress any key to back for menu");
    getch();
}

void print_stu (int i) {
    printf("%-30d%-30s%-30s%-30d\n", std[i].id,std[i].code,std[i].name,std[i].age);

}
void print_all (){
    int i ;
    system("cls");
    printf("This info for all students  \n") ;


    if(students_size > 0){
        printf("%-30s%-30s%-30s%-30s\n" ,"No.","Code","Name","Age") ;
        for (i = 0 ; i < students_size ; i++)
            print_stu (i);
    }
    else
        printf("\n[no data yet ! ]\n");

    printf("\n press any key to back for menu");
    getch();


}
