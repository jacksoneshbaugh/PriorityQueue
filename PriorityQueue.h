// An implementation of a min priority queue in raw C.
// Created by Jackson Eshbaugh on 20.07.2024.

#ifndef PRIORITYQUEUE_PRIORITYQUEUE_H
#define PRIORITYQUEUE_PRIORITYQUEUE_H

#include "ArrayList.h"
#include <stdbool.h>


typedef struct {
    int elementSize;
    ArrayList list;
} PriorityQueue;

/**
 * Creates a new PriorityQueue.
 * @param size the size of each element in the queue (in bytes)
 * @return the newly created PriorityQueue, or NULL if an error occurs.
 */
PriorityQueue priorityQueueCreate(int size);

/**
 * Adds an object to the specified priority queue.
 * @param queue the queue to add to
 * @param obj the object to add to the priority queue
 * @param priority the priority to add the object to the queue with.
 * @return true if successful, otherwise false
 */
bool add(PriorityQueue queue, void *obj, int priority);

/**
 * Polls the specified priority queue, pulling out the smallest key value in the queue.
 * @param queue the queue to poll
 * @return the topmost element, or NULL if the list is empty
 */
void* poll(PriorityQueue queue);

/**
* Polls the specified priority queue, pulling out the smallest key value in the queue.
* @param queue the queue to poll
* @return the topmost element, or NULL if the list is empty
*/
void* peek(PriorityQueue queue);

// TODO: Add decreaseKey() and figure out how to find specific items in the queue. Perhaps use memory address?

#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
