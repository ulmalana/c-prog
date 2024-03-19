#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct city_info {
  char *city;
  int miles;
};

int compare_cities(const void *key_ptr, const void *element_ptr);

int main(void) {
  char city_name[81];
  struct city_info *ptr;
  const struct city_info mileage[] = {
      {"Berlin", 3965},   {"Buenos Aires", 5297}, {"Cairo", 5602},
      {"Calcutta", 7918}, {"Cape Town", 7764},    {"Caracas", 2123},
      {"Chicago", 713}};

  printf("Enter a city name: ");
  scanf("%80[^\n]", city_name);
  ptr = bsearch(city_name, mileage, sizeof(mileage) / sizeof(mileage[0]),
                sizeof(mileage[0]), compare_cities);

  if (ptr != NULL)
    printf("%s is %d miles from New york city\n", city_name, ptr->miles);

  else
    printf("%s wasnt found.\n", city_name);

  return 0;
}

int compare_cities(const void *key_ptr, const void *element_ptr) {
  return strcmp((char *)key_ptr, ((struct city_info *)element_ptr)->city);
}
