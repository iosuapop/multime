#pragma once

class Multime;
typedef int TElem;

class IteratorMultime
{
	friend class Multime;
private:

	//constructorul primeste o referinta catre Container
	//iteratorul va referi primul element din container

	//complexitate theta(1)
	IteratorMultime(const Multime& m);

	//contine o referinta catre containerul pe care il itereaza
	const Multime& multime;
	/* aici e reprezentarea  specifica a iteratorului */
	TElem* actual;


public:

	//reseteaza pozitia iteratorului la inceputul containerului

	//complexitate theta(1)
	void prim();

	//muta iteratorul in container
	// arunca exceptie daca iteratorul nu e valid

	//complexitate theta(1)
	void urmator();

	//verifica daca iteratorul e valid (indica un element al containerului)

	//complexitate theta(1)
	bool valid() const;

	//returneaza valoarea elementului din container referit de iterator
	//arunca exceptie daca iteratorul nu e valid

	//complexitate theta(1)
	TElem element() const;
};
