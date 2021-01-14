# 0x1A. C - Hash tables

---

## Learning Objectives for this project:

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

---

### [0. >>> ht = {}](./0-hash_table_create.c)
* Write a function that creates a hash table.


### [1. djb2](./1-djb2.c)
* Write a hash function implementing the djb2 algorithm.


### [2. key -> index](./2-key_index.c)
* Write a function that gives you the index of a key.


### [3. >>> ht['betty'] = 'holberton'](./3-hash_table_set.c)
* Write a function that adds an element to the hash table.


### [4. >>> ht['betty']](./4-hash_table_get.c)
* Write a function that retrieves a value associated with a key.


### [5. >>> print(ht)](./5-hash_table_print.c)
* Write a function that prints a hash table.


### [6. >>> del ht](./6-hash_table_delete.c)
* Write a function that deletes a hash table.


### [7. $ht['Betty'] = 'Holberton'](./100-sorted_hash_table.c)
* Rewrite the previous functions using these data structures:
  * shash_table_t *shash_table_create(unsigned long int size)
  * int shash_table_set(shash_table_t *ht, const char *key, const char *value)
  * The key/value pair should be inserted in the sorted list at the right place
  * char *shash_table_get(const shash_table_t *ht, const char *key)
  * void shash_table_print(const shash_table_t *ht)
  * Should print the hash table using the sorted linked list
  * void shash_table_print_rev(const shash_table_t *ht)
  * Should print the hash tables key/value pairs in reverse order using the sorted linked list
  * void shash_table_delete(shash_table_t *ht)
  * You are allowed to have more than 5 functions in your file

---

## Author
* **Amilcar Armmand** - [AmilcarArmmand](https://github.com/AmilcarArmmand)
