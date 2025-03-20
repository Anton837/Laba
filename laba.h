#ifndef AUDITORIUM_STRUCT_H
#define AUDITORIUM_STRUCT_H

#define ARR_SIZE 30 // максимальна кількість номерів аудиторії
#define Seat_SIZE 24 // КІЛЬКІСТЬ МІСЦЬ
#define Board_SIZE 8 // наявність дошки
#define COMPUTER_SIZE 10 // кількість комп'ютурів

struct auditorium { // опис структури аудиторії
    unsigned long int id = 0;
    unsigned int seat_size = Seat_SIZE;
    bool board_ = Board_SIZE;
    unsigned int comouter_size = COMPUTER_SIZE;
    unsigned int rating = 0;
};

struct auditorium_list { // опис структури аудиторії
    unsigned int amount = 0;
    auditorium auditorium_list[ARR_SIZE];
};

unsigned long int addauditorium(auditorium_list &lst, const unsigned int seat, const bool board, const unsigned int computer);
void print_auditorium(auditorium &lst);
void print_auditorium_list(auditorium_list &lst);
bool del_auditorium(auditorium_list &lst, unsigned long int id);
int auditorium_by_id(const auditorium_list &lst, const unsigned long int id );
void updata_rating_auditorium(auditorium_list &lst);
void print_rating_auditorium(const auditorium_list &lst);
#endif

