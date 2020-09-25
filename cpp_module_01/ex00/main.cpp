#include "Pony.Class.hpp"

void ponyOnTheStack(void)
{
	Pony Stack("Stack Pony", "Red", "12 pound");
	std::cout << GREEN << "\n\\|/" << RED << "          (__)\n     `\\------(oo)\n       ||    (__)\n       ||w--||     " << GREEN << "\\|/\n   \\|/\n" << RESET;
	Stack.status();
}

void ponyOnTheHeap(void)
{
	Pony *Heap;

	Heap = new Pony("Heap Pony", "Cyan", "123 pound");
	std::cout << CYAN << "\n           __n__n__\n    .------`-\\00/-'\n   /  ##  ## (oo)\n  / \\## __   ./\n     |//YY \\|/\n     |||   |||\n" << RESET;
	Heap->status();
	delete Heap;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
    return (0);
}