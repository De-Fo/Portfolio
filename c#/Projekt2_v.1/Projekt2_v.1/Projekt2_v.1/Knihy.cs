using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Projekt2_v._1
{
    class Knihy
    {
        
            //TRIEDY
            Info I = new Info();


        public void knihy(Info I)
        {
            //INT
            int koniec = 0;
            int volba;
            int cas;
            int naucit;

            while (koniec != 1)
            {
                Console.Clear();
                Console.WriteLine("Informácie");
                Console.WriteLine("Peniaze: " + I.peniaze + "$");
                Console.WriteLine("Vedomosti: " + I.vedomosti);
                Console.WriteLine("Energia: " + I.energia);
                Console.WriteLine("1.) Učiť sa.");
                Console.WriteLine("2.) Odísť.");
                volba = int.Parse(Console.ReadLine());

                switch (volba)
                {
                    case 1:
                        Console.Clear();
                        Console.WriteLine("Koľko hodín sa chceš učiť? (1-10)");
                        cas = int.Parse(Console.ReadLine());
                        if (cas > I.energia)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš dosť energie!");
                            koniec = 1;
                            Console.ReadKey();
                        }
                        if (cas <= I.energia)
                        {
                            Console.Clear();
                            Console.WriteLine("Učíš sa...");
                            Thread.Sleep(cas * 1000);
                            Console.Clear();
                            naucit = cas * 2;
                            I.energia = I.energia - cas;
                            I.vedomosti += naucit;
                            Console.WriteLine("Učil si sa " + cas + " hodín");
                            Console.WriteLine("Získal si " + naucit + " vedomosti\n");
                            Console.WriteLine("Spolu máš " + I.vedomosti + " vedomosti");
                            Console.ReadKey();
                        }

                    break;

                    case 2:
                        Console.Clear();
                        Console.WriteLine("EXIT");
                        koniec = 1;
                        break;


            }   }
                
        }







    }
}