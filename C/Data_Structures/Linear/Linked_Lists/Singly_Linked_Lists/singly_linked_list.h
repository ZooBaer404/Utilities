#ifndef _SINGLY_LINKED_LIST_
#define _SINGLY_LINKED_LIST_

struct Node {
    int key;
    struct Node *next;
};

struct SinglyLinkedList {
    struct Node *head;
    struct Node *tail;
    size_t length;
};

struct Node *singly_list_node_new();
struct SinglyLinkedList *singly_list_new();

int singly_list_initialize(struct SinglyLinkedList *, struct Node *);
int singly_list_node_initialize(struct Node *, int key);
int singly_list_insert_last(struct SinglyLinkedList *, struct Node *);
int singly_list_insert_index(struct SinglyLinkedList *, struct Node *, size_t);
int singly_list_insert_node_next(struct SinglyLinkedList *, int, struct Node *);
int singly_list_delete_next(struct SinglyLinkedList *, int);
void singly_list_print(struct SinglyLinkedList *);
void singly_list_node_print(struct Node *);
int singly_list_print_index(struct SinglyLinkedList *, size_t);
int singly_list_delete_index(struct SinglyLinkedList *, size_t);
int singly_list_delete_key(struct SinglyLinkedList *, int);
int singly_list_length(struct SinglyLinkedList *);
struct Node *singly_list_index(struct SinglyLinkedList *, size_t);

#endif
