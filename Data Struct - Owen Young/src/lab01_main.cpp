#include <person.h>
#include <person_database.h>

int main(int argc, char** argv)
{
	int on = 0;
	std::string x;
	unsigned int i, i_n, f_n, l_n;


	example::PersonDatabase PD("..\\..\\media\\persondb.txt");
	while (on == 0) {
		std::cout << "Type 1 to quit, Type 2 to add a person to the database, Type 3 to remove a person from the database";
		std::cin >> x;

		if (x == "1") {
			on++;
		}
		
	}
	// In this constructor, you'll read in the contents of the
	// text file into an array of Person objects.  DO NOT use any
	// container types (std::vector, std::list, etc.)
	
}