#include <stdio.h>

struct passengers {
    int ticketNumber, seat, age;
    char date[11], from[15], to[15], schedule[6], name[20]; 
};

void main() {

    int count = 0, i, sumAge = 0, averageAge;
    struct passengers passenger[44]; 

    while (1) {

        scanf("%d", &passenger[count].ticketNumber);

        if (passenger[count].ticketNumber == -1) break;

        scanf("%s", passenger[count].date);
        scanf(" %[^\n]s", passenger[count].from);
        scanf(" %[^\n]s", passenger[count].to);
        scanf("%s", passenger[count].schedule);
        scanf("%d", &passenger[count].seat);
        scanf("%d", &passenger[count].age);
        scanf(" %[^\n]s", passenger[count].name);  
                                    
        sumAge += passenger[count].age;
        count++;
    }

    averageAge = sumAge / count;

    for ( i = 0; i < count; i++) {

        if ((passenger[i].age > averageAge) && (passenger[i].seat % 2) == 0) printf("%s\n", passenger[i].name);        
    } 
}