#include <stdio.h>
#define MAX 5

int queue_arr[MAX];
int rear = -1;
int front = -1;

void insert();
void display();
void del();

int main() {
    int choice;
    while (1) {
        printf("\n");
        printf("+===================+\n");
        printf("|     Menu Utama    |\n");
        printf("+===================+\n");
        printf("| 1. Insert Queue   |\n");
        printf("| 2. Display Queue  |\n");
        printf("| 3. Delete Queue   |\n");
        printf("| 4. Quit           |\n");
        printf("+===================+\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                del();
                break;
            case 4:
                return 0;
            default:
                printf("Salah Memasukkan Pilihan!\n");
                break;
        }
    }
}

void del() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Elemen deleted from Queue is: %d\n", queue_arr[front]);
        front = front + 1;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void insert() {
    int added_item;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        printf("Masukkan Elemen ke Dalam Queue: ");
        scanf("%d", &added_item);
        rear = rear + 1;
        queue_arr[rear] = added_item;
    }
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue kosong!\n");
    } else {
        printf("Queue:\n");
        for (i = front; i <= rear; i++) {
            printf("%d\n", queue_arr[i]);
        }
    }
}
