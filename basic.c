/* Basic example */
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

// Typedef
typedef struct Customer *CustomerPtr;

// Age, we are going to use it
int age;

/**
 * Customer struct
 */
struct Customer {
  char	name;
  int	age;
};

/**
 * createCustomer
 * returns a customer pointer
 *
 * # Example
 *
 * ```c
 * CustomerPtr Peti = createCustomer("Peti", 30);
 * ```
 */
CustomerPtr createCustomer(char *name, int age) {
  CustomerPtr customer = malloc(sizeof * customer);
  if (customer) {
    struct Customer asd = {*name, age};
    *customer = asd;
  }
  return customer;
}

/**
 * print_customer_details
 * Get a customer pointer and prints out its details
 *
 * #Example
 *
 * ```c
 * CustomerPtr customer = createCustomer("Peti", 30);	// Create a customer
 * print_customer_details(customer);			// Print its details
 * ```
 */
void print_customer_details(CustomerPtr customer) {
  printf("Customer name is: %s, age is: %d\n",
	 &customer->name, customer->age);
}

/**
 * destroy_customer
 * by a given customer pointer
 */
void destroy_customer(CustomerPtr customer) {
  free(customer);
}

/**
 * say_hello demo function
 */
void say_hello(void) {
  printf("Hello World\n");
}

int main() {
  CustomerPtr Peti = createCustomer("Peti", 30);
  print_customer_details(Peti);
  destroy_customer(Peti);
  print_customer_details(Peti);
  say_hello();
  return 0;
}
