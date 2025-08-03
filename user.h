#ifndef USER_H
#define USER_H

#include "book.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_USERS 1000
#define MAX_NAME_LEN 100
#define NATIONAL_ID_LEN 15

// User structure for national ID management
typedef struct {
    char national_id[NATIONAL_ID_LEN];
    char name[MAX_NAME_LEN];
    char phone[20];
    char email[50];
    int books_borrowed;
    int borrowed_book_ids[10]; // Maximum 10 books per user
} User;

// Function declarations only (no definitions in header)
void viewAvailableBooks();
void borrowBook();
void returnBook();
void searchByTitle();
void filterByAuthor();
void filterByYear();
void toLowerStr(char *str);
void init_user_pointers();

// National ID functions
int find_user_by_national_id(const char *national_id);
void add_new_user();
void search_user_by_national_id();
void display_user_info(const User *user);
void save_users_to_file();
void load_users_from_file();

#endif