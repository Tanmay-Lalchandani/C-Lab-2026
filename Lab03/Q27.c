#include <stdio.h>
struct student {
    int roll;
    char name[50];
    int marks;
}; struct student *p, s[10];

void greater(int n) {
    int j=0;
    struct student *q[10];
    p=&s[0];
    for(int i=0; i<n; i++) {
        scanf("%d %s %d", &p->roll, p->name, &p->marks);
        if(p->marks>500) {
            q[j]=p;
            j++;

        }
        p++;
        
    }
    printf("\n");
    
    printf("Students with marks greater than 500:\n");
    for(int i=0; i<j; i++)  {
        printf("%d %s %d", q[i]->roll, q[i]->name, q[i]->marks);
        printf("\n");
    }
    
}

int main() {
    int n;
    printf("How many students? (max 10)\n");
    scanf("%d", &n);
    printf("Enter roll number, name and total marks out of 1000 for %d students\n", n);
    greater(n);
    return 0;
}