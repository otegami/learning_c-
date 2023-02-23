#include "dog.h"

void some_function()
{
  Dog *p_dog = new Dog("Fluffly", "Shepherd", 2);

  delete p_dog;
}

int main()
{
  // The order is reverse beacause it is depending on some objects
  // Dog constructor called for: Doggy1
  // Dog constructor called for: Doggy2
  // Dog constructor called for: Doggy3
  // Dog constructor called for: Doggy4
  // Done!
  // Dog destructor called for: Doggy4
  // Dog destructor called for: Doggy3
  // Dog destructor called for: Doggy2
  // Dog destructor called for: Doggy1

  // Dog dog1("Doggy1", "Shepherd", 1);
  // Dog dog2("Doggy2", "Shepherd", 2);
  // Dog dog3("Doggy3", "Shepherd", 3);
  // Dog dog4("Doggy4", "Shepherd", 4);

  Dog dog1("Doggy1", "Shepherd", 1);
  dog1.print_info();

  // dog1.set_name("NewDoggy");
  // dog1.set_breed("Puppy");
  // dog1.set_age(0);
  // dog1.print_info();

  // dog1.set_name("NewDoggy")->set_breed("Puppy")->set_age(0);
  dog1.set_name("NewDoggy").set_breed("Puppy").set_age(0);
  dog1.print_info();

  std::cout << "Done!" << std::endl;
  return 0;
}
