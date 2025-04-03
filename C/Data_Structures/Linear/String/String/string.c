#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct String {
	int length;
	int alloc; /* the length of the data */
	char* data;
};

struct String* string_new() {
	struct String* string = (struct String*)malloc(sizeof(struct String));
	if (string == NULL) {
		printf("\x1b[31m" "string_new: malloc for string failed"); // colorized output: red
		return NULL;
	}

	string->length = 0;
	string->alloc = 10;
	string->data = malloc(string->alloc);
	string->data[0] = '\0';

	return string;
}

void string_delete(struct String* string) {
	if (string == NULL || string->data == NULL) {
		printf("\x1b[31m" "string_delete: deleting string failed. String is NULL\n");
	}

	free((void*)string->data);
	free((void*)string);
}

void string_dump(const struct String* string) {
	printf("String length = %u alloc = %d data = %s\n", string->length, string->alloc, string->data);
}

unsigned int string_lengh(const struct String* string) {
	return string->length;
}

char* string_str(const struct String* string) {
	return string->data;
}

int string_init(struct String* string, char* data) {
	if (string == NULL) {
		string = (struct String*)malloc(sizeof(string));
		if (string == NULL) {
			printf("\x1b[31m" "string_init: allocating memory for string failed\n");
			return -1;
		}
	}

	string->length = strlen(data);
	string->alloc = strlen(data);
	strcpy(string->data, data);

	return 1;
}

unsigned int compute_new_alloc(unsigned int alloc_len, unsigned int data_len, unsigned int extension_len) {
	if (alloc_len >= (data_len + extension_len + 1)) {
		return 0;
	}

	unsigned int new_alloc = data_len * 2 + extension_len + 1;

	return new_alloc;
}

void string_append(struct String* string, char ch) {
	if (string == NULL || (void *)ch == NULL) {
		printf("\x1b[32m" "error: string or ch null\n");
		printf("aborting operation...\n");
		return;
	}

	unsigned int new_alloc = compute_new_alloc(string->alloc, string->length, 1);
	if (new_alloc != 0) {
		string->data = realloc(string->data, new_alloc);
	}
	strncat(string->data, &ch, 1);
	string->length++;
}

// ToDo: realloc
void string_appends(struct String* string, char* str) {
	if (string == NULL || str == NULL) {
		printf("\x1b[32m" "error: string or str null\n");
		printf("aborting operation...\n");
		return;
	}

	unsigned int new_alloc = compute_new_alloc(string->alloc, string->length, strlen(str));
	if (new_alloc != 0) {
		string->data = realloc(string->data, new_alloc);
	}

	strcat(string->data, str);
	string->length = string->length + strlen(str);
}

void string_assign(struct String* string, char* str) {
	if (string == NULL || str == NULL) {
		printf("\x1b[32m" "string_assign: string or str null\n");
		printf("aborting operation...\n");
		return;
	}

	free(string->data);
	string->data = str;
	string->length = strlen(string->data);
	string->alloc = string->length;
}

int main() {
	struct String* x = string_new();
	string_append(x, 'H');
	string_append(x, 'e');
	string_append(x, 'l');
	string_append(x, 'l');
	string_dump(x);

	string_appends(x, "o, world");
	string_dump(x);

	string_assign(x, "A completely new string");
	string_dump(x);

	string_appends(x, " found here");
	string_dump(x);


	return 0;
}