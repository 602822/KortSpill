#pragma once

class Kort {
private:
	const wchar_t* symbol;
	const wchar_t* verdi;

public:
	Kort(const wchar_t* symbol, const wchar_t* verdi);
	const wchar_t* getSymbol();
	void setSymbol(const wchar_t* symbol);
	const wchar_t* getVerdi();
	void setVerdi(const wchar_t* verdi);
};
