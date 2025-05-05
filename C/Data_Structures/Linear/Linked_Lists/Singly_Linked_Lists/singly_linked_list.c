#include "singly_linked_list.h"

struct Node *singly_list_node_new() {
    struct Node *new_node = malloc(sizeof(struct Node));
    if (new_node == NULL) {
        return NULL;
    }
    key = 0;
    next = NULL;

    return new_node;
}

struct SinglyLinkedList *singly_list_new() {
    struct SinglyLinkedList *new_list = malloc(sizeof(struct SinglyLinkedList));
    if (new_list == NULL) {
        return NULL;
    }

    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->length = 0;

    return new_list;
}

int singly_list_initialize(struct SinglyLinkedList *list, struct Node *node) {
    if (list == NULL || node == NULL || list->head != NULL ||
        list->tail != NULL || list->length != 0) {
        return -1;
    }
    list->head = node;

    return 1;
}

int singly_list_node_initialize(struct Node *node, int key) {
    if (node == NULL) {
        return -1;
    }

    node->key = key;

    return 1;
}

int singly_list_insert_last(struct SinglyLinkedList *list, struct Node *node) {
    if (list == NULL || node == NULL) {
        return -1;
    }

    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
        list->length++;
    }

    struct Node *current;
    for (current = list->head; current->next != NULL; current = current->next) {
    }

    current->next = node;

    return 1;
}

int singly_list_insert_index(struct SinglyLinkedList *list, struct Node *node,
                             size_t index) {
    if (list == NULL || node == NULL || list->head == NULL) {
        return -1;
    }

    unsigned int i;
    struct Node *current;
    for (current = head->head, i = 0; current->next != NULL;
         i++, current = current->next) {
        if (i == index) {
            node->next = current->next;
            current->next = node;
            list->length++;

            return 1;
        }
    }

    return -1;
}

int singly_list_insert_node_next(struct SinglyLinkedList *list, int key,
                                 struct Node *node) {
    if (list == NULL || node == NULL || list->head == NULL) {
        return -1;
    }

    struct Node *current;
    for (current = list->head; current->next != NULL; current = current->next) {
        if (current->key == key) {
            node->next = current->next;
            current->next = node;

            list->length++;

            return 1;
        }
    }

    return -1;
}

int singly_list_delete_next(struct SinglyLinkedList *list, int key) {
    if (list == NULL || list->head == NULL) {
        return -1;
    }

    struct Node *current;
    for (current = list->head; current->next != NULL; current = current->next) {
        if (current->key == key) {
            if (current->next == NULL) {
                return 0;
            }
            struct Node *temp = current->next;
            current->next = current->next->next;
            free(temp);

            list->length--;

            return 1;
        }
    }

    return -1;
}

#define PRINT_VAR_NAME(var) printf(#var)

void singly_list_print(struct SinglyLinkedList *list) {
    if (list == NULL || list->head == NULL) {
        printf("NULL\n");
        return;
    }

    printf("{ ");
    PRINT_VAR_NAME(list);
    printf("\n|\n");
    printf("`-> ");

    struct Node *current;
    for (current = list->head; current->next != NULL; current = current->next) {
        printf("| %p :: key=%d | -> ", current, current->key);
    }
    printf("NULL;");
}

void singly_list_node_print(struct Node *node) {
    if (node == NULL) {
        return;
    }

    printf("| %p :: key=%d |\n", node, current->key);
}

int singly_list_print_index(struct SinglyLinkedList *list, size_t index) {
    if (list == NULL || list->head == NULL) {
        return -1;
    }

    unsigned int i;
    struct Node *current;
    for (current = list->head, i = 0; current->next != NULL;
         current = current->next, i++) {
        if (i == index) {
            singly_list_node_print(current);
            return 1;
        }
    }

    return 0;
}

int singly_list_delete_index(struct SinglyLinkedList *list, size_t index) {
    if (list == NULL || list->head == NULL) {
        return -1;
    }

    struct Node *current;
    struct Node *prev = list->head;
    unsigned int i;
    for (i = 0, current = list->head; current->next != NULL;
         i++, current = current->next) {

        if (i == index) {
            prev->next = current->next;
            free(current);

            list->length--;

            return 1;
        }

        prev = current;
    }

    return 0;
}

int singly_list_delete_key(struct SinglyLinkedList *list, int key) {
    if (list == NULL || list->head == NULL) {
        return -1;
    }

    struct Node *prev = list->head;
    struct Node *current;
    for (current = list->head; current->next != NULL; current = current->next) {
        if (current->key == key) {
            prev->next = current->next;
            free(current);

            list->length--;

            return 1;
        }

        prev = current;
    }
}

int singly_list_length(struct SinglyLinkedList *list) {
    if (list == NULL) {
        return -1;
    }

    return list->length;
}

struct Node *singly_list_index(struct SinglyLinkedList *list, size_t index) {
    if (list == NULL || list->head == NULL) {
        return NULL;
    }

    unsigned int i;
    struct Node *current;
    for (i = 0, currnet = list->head; current->next != NULL;
         i++, current = current->next) {
        if (i == index) {
            return current;
        }
    }

    return NULL;
}
