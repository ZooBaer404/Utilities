#ifndef _DEBUGGER_
#define _DEBUGGER_

#include "colors.h"


void *_memory_debugger_malloc(size_t size, char *file, int line, char *time) {

    printf(YELLOW "malloc: %zu, %s::%d, %s: ", size, file, line, time);

    void *memory = malloc(size);
    if (memory == NULL) {
        printf(RED "failed!!\n");
    } else {
        printf(GREEN "success->%p\n", memory);
    }

    printf(RESET);

    return memory;
}

void _memory_debugger_free(void *memory, char *file, int line, char *time) {
    printf(YELLOW "free: %p, %s::%d, %s: ", memory, file, line, time);
    if (memory == NULL) {
        printf(RED "failed! memory NULL!!!\n");
    } else {
        free(memory);
        printf(GREEN "done\n");
    }

    printf(RESET);

}

void *_memory_debugger_realloc(void *memory, size_t size, char *file, int line, char *time) {
    printf(YELLOW "realloc: %p, %zu, %s::%d, %s: ", memory, size, file, line, time);

    void *new_memory = realloc(memory, size);
    if (new_memory == NULL) {
        printf(RED "failed\n");
    } else {
        printf(GREEN "success->%p\n", new_memory);
    }

    printf(RESET);

    return new_memory;
}

void *_memory_debugger_calloc(size_t length, size_t chunk_size, char *file, int line, char *time) {
    printf(YELLOW "calloc: %zu, %zu, %s::%d, %s: ", length, chunk_size, file, line, time);

    void *new_memory = calloc(length, chunk_size);
    if (new_memory == NULL) {
        printf(RED "failed!!\n");
    } else {
        printf(GREEN "success->%p\n", new_memory);
    }

    printf(RESET);

    return new_memory;
}


#define malloc(w) _memory_debugger_malloc(w, __FILE__, __LINE__, __TIME__)
#define realloc(p, s) _memory_debugger_realloc(p, s, __FILE__, __LINE__, __TIME__)
#define free(p) _memory_debugger_free(p, __FILE__, __LINE__, __TIME__)
#define calloc(s, c_s) _memory_debugger_calloc(s, c_s, __FILE__, __LINE__, __TIME__)



#endif
