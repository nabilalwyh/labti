#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *kiri;
    struct Node *kanan;
};

void tambah(struct Node **root, int databaru) {
    if ((*root) == NULL) {
        struct Node *baru = (struct Node *)malloc(sizeof(struct Node));
        baru->data = databaru;
        baru->kiri = NULL;
        baru->kanan = NULL;
        *root = baru;
    } else if (databaru < (*root)->data) {
        tambah(&(*root)->kiri, databaru);
    } else if (databaru > (*root)->data) {
        tambah(&(*root)->kanan, databaru);
    } else {
        printf("Data Sudah Ada!\n");
    }
}

void preOrder(struct Node *root) {
    if (root != NULL) {
        printf("%d\n", root->data);
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

void inOrder(struct Node *root) {
    if (root != NULL) {
        inOrder(root->kiri);
        printf("%d\n", root->data);
        inOrder(root->kanan);
    }
}

void postOrder(struct Node *root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        printf("%d\n", root->data);
    }
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

int main() {
    char pil, tny, tny1;
    int terus = 1;
    struct Node *pohon = NULL;
    int data;

    while (terus) {
        system(CLEAR_SCREEN);
        printf("MENU\n");
        printf("1. Tambah\n");
        printf("2. Lihat Pre-Order\n");
        printf("3. Lihat In-Order\n");
        printf("4. Lihat Post-Order\n");
        printf("5. Hapus Semua Data\n");
        printf("6. Exit\n\n");
        printf("\n========================================\n");
        printf("Pilihan Anda [1..6]: ");
        
        pil = ' ';
        while (!(pil >= '1' && pil <= '6')) {
            pil = getchar();
            clearInputBuffer();
        }

        switch (pil) {
            case '1':
                printf("Data Baru : ");
                scanf("%d", &data);
                tambah(&pohon, data);
                break;
            case '2':
                if (pohon != NULL) {
                    printf("Pre-Order Traversal:\n");
                    preOrder(pohon);
                } else {
                    printf("Masuk Kosong!\n");
                }
                break;
            case '3':
                if (pohon != NULL) {
                    printf("In-Order Traversal:\n");
                    inOrder(pohon);
                } else {
                    printf("Masuk Kosong!\n");
                }
                break;
            case '4':
                if (pohon != NULL) {
                    printf("Post-Order Traversal:\n");
                    postOrder(pohon);
                } else {
                    printf("Masuk Kosong!\n");
                }
                break;
            case '5':
                printf("Apakah anda yakin untuk menghapus [y/n] ?");
                scanf(" %c", &tny1);
                if (tny1 == 'y' || tny1 == 'Y') {
                    printf("Data Di Hapus!\n");
                    pohon = NULL;
                }
                break;
            case '6':
                printf("Apakah anda yakin untuk keluar [y/n]: ");
                scanf(" %c", &tny);
                if (tny == 'y' || tny == 'Y') {
                    printf("Anda Keluar Dari Program!\n");
                    exit(0);
                }
                break;
            default:
                terus = 0;
                break;
        }

        clearInputBuffer();
        printf("\nPress Enter to continue...");
        getchar(); 
    }

    return 0;
}
