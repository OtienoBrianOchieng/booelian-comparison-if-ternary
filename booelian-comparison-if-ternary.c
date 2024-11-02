#include <stdio.h>
//import bool
#include <stdbool.h>

int main() {

    // bool kids = true;
    // bool adults = false;
    // //case sensitive

    // printf("\n%d", kids);
    // printf("\n%d", adults); //print as integers

    // //>, <, <=, >=, !=, ==

    // bool age = (34 < 55);
    // int brian = 34;
    // int jeff = 8;
    // int habert = 10;

    // bool comp1 = (brian <= jeff);
    // bool comp2 = (brian != jeff);
    // bool comp3 = (habert >= jeff);
    // bool comp4 = !(brian == habert);

    // printf("\n%d", comp1);
    // printf("\n%d", comp2);
    // printf("\n%d", comp3);
    // printf("\n%d", comp4);

    // printf("\n%d", age);

    // //&&, ||, !

    // bool comp6 = (brian > jeff )&& (jeff <= brian);
    // bool comp7 = (brian>habert) || (jeff < habert);

    // printf("\n%d", comp6);
    // printf("\n%d", comp7);

    //if statements

    int age;

    printf("Enter your age ");
    scanf("%d", &age);

    if(age == 18) {

        printf("You are qualified to vie");

    }
    else if (age < 18 || age == 0) {
        printf("Wait till you are 18 or above");
    }
    else {
        printf("Did you enter a value?");
    };



    return 0;
}