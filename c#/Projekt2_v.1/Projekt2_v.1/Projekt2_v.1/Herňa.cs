using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Projekt2_v._1
{
    class Herna
    {
        //TRIEDY
        Info I = new Info();

        public void HraciAutomat(Info I)
        {
            //PREMENNE
            int stavka = 0;
            int vyhra = 0;
            int vyhrat;
            int volbaHraca;
            int TotalVyhra = 0;
            int koniec = 0;
            //RANDOM
            Random random = new Random();
            //PROGRAM
            while (koniec != 1 || I.energia <= 0)
            {
                Console.Clear();
                Console.WriteLine("Informácie");
                Console.WriteLine("Peniaze: " + I.peniaze + "$\tVýška stávky:" + stavka + "$");
                Console.WriteLine("Posledná výhra: " + TotalVyhra + "$\tEnergia: " + I.energia);
                HerneMenu(1);
                volbaHraca = int.Parse(Console.ReadLine());
                switch (volbaHraca)
                //AUTOMAT HORE
                {
                    case 1: //VYSKA STAVKY
                        Console.WriteLine("Zadaj výšku vstávky");
                        stavka = int.Parse(Console.ReadLine());
                        while (stavka > I.peniaze)
                        {
                            Console.WriteLine("Nemôžeš vsadiť viac, než máš!");
                            stavka = int.Parse(Console.ReadLine());
                        }
                        break;

                    case 2: //HRAT

                        if (I.peniaze <= 0)
                        {
                            Console.WriteLine("Nemáš toľko peňazí ako si stavil!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        vyhrat = random.Next(1, 12);
                        if (I.peniaze > 0 && vyhrat == 1)
                        {
                            vyhra = random.Next(2, 6);
                            Console.WriteLine("Gratulujem! Vyhral si " + vyhra + " násobok.");
                            TotalVyhra = vyhra * stavka;
                            Console.WriteLine("Vyhral si " + TotalVyhra + "$");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.peniaze = I.peniaze + TotalVyhra;
                        }
                        else if (I.peniaze > 0)
                        {
                            Console.WriteLine("Prehral si" + stavka + " $");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.peniaze = I.peniaze - stavka;
                        }
                        I.hlad = I.hlad - 2;
                        break;

                    case 3: //KONIEC
                        koniec = 1;
                        break;

                    default:
                        Console.Clear();
                        Console.WriteLine("Zadaná možnosť nie je dostupná!");
                        Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                        Console.ReadKey();
                        break;
                }
                //AUTOMAT DOLE
            }
        }
        //FUNKCIE
        static void HerneMenu(int HerneMenu)
        {
            Console.WriteLine("-------------------");
            Console.WriteLine("**Menu automatu**");
            Console.WriteLine("1.) Zmeniť stávku.");
            Console.WriteLine("2.) Hrať.");
            Console.WriteLine("*******************");
            Console.WriteLine("3.) Odísť.");
        }
    }
}
