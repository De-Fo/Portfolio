using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Projekt2_v._1
{
    class Posilka
    {

        //TRIEDY
        Info I = new Info();


        public void posilka(Info I)
        {
            //INT
            int koniec = 0;
            int volba;
            int cas;
            int cvicit;


            while (koniec != 1)
            {
                Console.Clear();
                Console.WriteLine("Informácie");
                Console.WriteLine("Peniaze: " + I.peniaze + "$");
                Console.WriteLine("Atletické schopnosti: " + I.atletika);
                Console.WriteLine("Energia: " + I.energia);
                Console.WriteLine("1.) Posilovať.");
                Console.WriteLine("2.) Odísť.");
                volba = int.Parse(Console.ReadLine());

                switch (volba)
                {
                    case 1:
                        Console.Clear();
                        Console.WriteLine("Koľko hodín chceš cvičiť (1-4)");
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
                            Console.WriteLine("Cvičíš ...");
                            Thread.Sleep(cas * 1000);
                            Console.Clear();
                            cvicit = cas * 2;
                            I.energia -= cas;
                            I.atletika += cvicit;
                            Console.WriteLine("Cvičil si " + cas + " hodín");
                            Console.WriteLine("Získal si " + cvicit + " atletických schopností\n");
                            Console.WriteLine("Spolu máš " + I.atletika + " atletických schopností");
                            Console.ReadKey();
                        }

                        break;

                    case 2:
                        Console.Clear();
                        Console.WriteLine("EXIT");
                        koniec = 1;
                        break;


                }
            }

        }

    }
}
