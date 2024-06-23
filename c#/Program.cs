using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OnlineApp
{
    class Program
    {
        static void Main(string[] args)
        {

            // vytvoření
            Kostka sestistenna = new Kostka();
            Kostka desetistenna = new Kostka(10);

            // hod šestistěnnou
            Console.WriteLine(sestistenna);
            for (int i = 0; i < 10; i++)
                Console.Write(sestistenna.hod() + " ");

            // hod desetistěnnou
            Console.WriteLine("\n\n" + desetistenna);
            for (int i = 0; i < 10; i++)
                Console.Write(desetistenna.hod() + " ");

            Console.ReadKey();
            // Pokud budete spouštět kód přes náš online kompiler, výsledek
            // je udržován v mezipaměti a budou padat stále ta samá čísla.
            // S jakoukoli změnou v kódu (např. i přidání komentáře) vyvoláte
            // novou kompilace a tedy i vygenerování nových čísel.
        }
    }
}
