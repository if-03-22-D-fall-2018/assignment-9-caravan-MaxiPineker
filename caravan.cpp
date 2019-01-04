
/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Kowatschek Samuel
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include "pack_animal.h"
#include "pack_animal.cpp"
#include <stdlib.h>


#define COUNT_CARAVANS 5

//created the Node

struct CaravanImplementation{
    int length;
    PackAnimal animal;
    struct CaravanImplementation* next;
    struct PackAnimalImplementation* PackAnimal;
};

//the head from the list
Caravan head = (Caravan)malloc(sizeof(struct CaravanImplementation));

//crates a new caravan

Caravan new_caravan()
{
    head -> animal = 0;
    head -> next = 0;
    head -> length = 0;
    return head;
}

//returns the length of the caravan

int get_length(Caravan caravan)
{
    return caravan -> length;
}


//Deletes a caravan

void delete_caravan(Caravan caravan)
{
    Caravan current = head;
    while (current != 0)
    {
        if(caravan == current->next) {
            current -> next = caravan -> next;
            free(caravan);
            return;
        }
       current = current->next;
    }
}


void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  Caravan current = head;

  if (head == 0) {
    head->animal = animal;
    caravan->length++;
    return;
  }
  else{
    while (current != 0) {
      current = current->next;
    }
    current = caravan;
    current->next = 0;
    caravan->animal = animal;
    //caravan->length++;
  }

}


void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  /*
  Caravan current = head;
  if (head == 0) {
    return;
  }
  while (current != 0 && current->animal != animal) {
    current = current->next;
  }
  if (current->animal == animal) {
    current = 0;
  }
  */
}


int get_caravan_load(Caravan caravan)
{
  return 0;
    //eturn caravan->PackAnimal->load;
}



void unload(Caravan caravan)
{
  //caravan->PackAnimal->load = 0;
}


int get_caravan_speed(Caravan caravan)
{
    return 0;
}


void optimize_load(Caravan caravan){

}
