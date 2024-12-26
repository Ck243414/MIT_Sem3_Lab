#include <stdio.h>



// Define the structure time

struct Time {

    int hour;

    int min;

    int sec;

};



// Function to read time from the user

void readTime(struct Time *t) {

    printf("Enter time (hh:mm:ss): ");

    scanf("%d:%d:%d", &t->hour, &t->min, &t->sec);

}



// Function to display time

void displayTime(const struct Time *t) {

    printf("Time: %02d:%02d:%02d\n", t->hour, t->min, t->sec);

}



// Function to add two time objects

struct Time addTime(const struct Time *t1, const struct Time *t2) {

    struct Time result;



    result.sec = t1->sec + t2->sec;

    result.min = t1->min + t2->min;

    result.hour = t1->hour + t2->hour;



    if (result.sec >= 60) {

        result.sec -= 60;

        result.min++;

    }



    if (result.min >= 60) {

        result.min -= 60;

        result.hour++;

    }



    if (result.hour >= 24) {

        result.hour -= 24;

    }



    return result;

}



// Function to find the difference between two time objects

struct Time differenceTime(const struct Time *t1, const struct Time *t2) {

    struct Time result;



    int t1_seconds = t1->sec + t1->min * 60 + t1->hour * 3600;

    int t2_seconds = t2->sec + t2->min * 60 + t2->hour * 3600;

    int diff_seconds = t1_seconds - t2_seconds;



    if (diff_seconds < 0) {

        diff_seconds += 86400; // 86400 seconds in a day

    }



    result.sec = diff_seconds % 60;

    result.min = (diff_seconds / 60) % 60;

    result.hour = diff_seconds / 3600;



    return result;

}



int main() {

    struct Time time1, time2, result;



    // Read two times from the user

    readTime(&time1);

    readTime(&time2);



    // Add two times

    result = addTime(&time1, &time2);

    printf("Sum of times:\n");

    displayTime(&result);



    // Find the difference between two times

    result = differenceTime(&time1, &time2);

    printf("Difference of times:\n");

    displayTime(&result);



    return 0;

}


