#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Pessoa{
    private:
    string nome;
    int rg, dia, mes, ano;

    public:
    
    string get_nome() { return nome; };
    void set_nome(string n) { nome = n;};
    
    int get_rg() {return rg;};
    void set_rg(int registro_geral) { rg = registro_geral;};
    
    int get_dia(){return dia;};
    void set_dia(int d){ dia = d;};
    
    int get_mes(){return mes;};
    void set_mes(int m){ mes = m;};
    
    int get_ano(){return ano;};
    void set_ano(int a){ ano = a;};
    
    
    int idade(){return 2020 - ano;};

};

class Treinador : public Pessoa{
    private:
    string esporte;
    float salario;
    public:
    float irpf(float perc){ return salario * perc; };
    
    string get_esporte() { return esporte; };
    void set_esporte(string esp) { esporte = esp; };
    
    float get_salario() { return salario; };
    void set_salario(float sal) { salario = sal;};
};

class Atleta: public Pessoa{
    private:
    string tipo_sangue;
    float peso, altura;
    
    public:
    float imc() { return peso / (altura * altura); };
    
    string get_sangue() { return tipo_sangue; };
    void set_sangue(string sangue) { tipo_sangue = sangue; };
    
    float get_peso() {return peso;};
    void set_peso(float p) { peso = p ;};
    
    float get_altura() {return altura;};
    void set_altura(float alt) { altura = alt; };
};

int main()
{
    
    Treinador *t1 = new Treinador();
    Atleta *a1 = new Atleta();
    
    a1->set_nome("Roberto");
    a1->set_rg(1923791234);
    a1->set_dia(25);
    a1->set_mes(2);
    a1->set_ano(1980);
    
    
    t1->set_nome("Ronaldinho");
    t1->set_rg(1298312);
    t1->set_dia(15);
    t1->set_mes(12);
    t1->set_ano(1924);

    int idade = a1->idade();
    cout << idade << endl;
    
    int idade2 = t1->idade();
    cout << idade2 << endl;
    
    t1->set_esporte("Badminton");
    t1->set_salario(12459.99);
    
    string e = t1->get_esporte();
    cout << e << endl;
    float s = t1->get_salario();
    cout << s << endl;
    
    float irpf = t1->irpf(0.25);
    cout << irpf << endl;
    
    a1->set_sangue("O+");
    a1->set_peso(50.5);
    a1->set_altura(1.74);
    
    string sangue = a1->get_sangue();
    cout << sangue << endl;
    
    float imc = a1->imc();
    cout << imc << endl;
}
