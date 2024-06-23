using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Projekt2_v._1
{
    class Obchody
    {
        //TRIEDY
        Info I = new Info();

        public void Obchod1(Info I)
        {
            //PREMENNE
            int koncit = 0;
            int zvolit;
            int Ch = 5;
            int R = 10;
            int K = 15;
            int S = 20;
            int najest;

            while (koncit != 1)
            {
                Console.Clear();
                Console.WriteLine("Hlad: " + I.hlad + "");
                Console.WriteLine("Peniaze: " + I.peniaze + "$");
                Console.WriteLine("Čo si chceš dať na jedenie?");
                Console.WriteLine("1.)Chleba [+5 Hladu, -10$]");
                Console.WriteLine("2.)Rožok [+10 Hladu, -15$]");
                Console.WriteLine("3.)Klobáska [+15 Hladu, -20$]");
                Console.WriteLine("4.)Slanina [+20 Hladu, -25$]");
                Console.WriteLine("5.)Nič...");
                zvolit = int.Parse(Console.ReadLine());
                switch (zvolit)
                {
                    case 1: //CHLEBA
                        najest = I.hlad + Ch;
                        if (I.peniaze < 10)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš toľko peňazí!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (I.peniaze >= 10 && najest <= 100)
                        {
                            Console.Clear();
                            Console.WriteLine("Kúpil si si chleba!");
                            Console.WriteLine("Doplnil si si tak 5 hladu!");
                            Console.WriteLine("Stálo ťa to 10$!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.hlad = I.hlad + 5;
                            I.peniaze = I.peniaze - 10;
                        }
                        else
                        {
                            Console.WriteLine("Toľko nezješ!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        break;

                    case 2: //ROZOK
                        najest = I.hlad + R;
                        if (I.peniaze < 15)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš toľko peňazí!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (I.peniaze >= 15 && najest <= 100)
                        {
                            Console.Clear();
                            Console.WriteLine("Kúpil si si rožok!");
                            Console.WriteLine("Doplnil si si tak 10 hladu!");
                            Console.WriteLine("Stálo ťa to 15$!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.hlad = I.hlad + 10;
                            I.peniaze = I.peniaze - 15;
                        }
                        else
                        {
                            Console.WriteLine("Toľko nezješ!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        break;

                    case 3: //KLOBASKA
                        najest = I.hlad + K;
                        if (I.peniaze < 20)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš toľko peňazí!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (I.peniaze >= 20 && najest <= 100)
                        {
                            Console.Clear();
                            Console.WriteLine("Kúpil si si klobásku!");
                            Console.WriteLine("Doplnil si si tak 15 hladu!");
                            Console.WriteLine("Stálo ťa to 20$!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.hlad = I.hlad + 15;
                            I.peniaze = I.peniaze - 20;
                        }
                        else
                        {
                            Console.WriteLine("Toľko nezješ!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        break;

                    case 4: //SLANINA
                        najest = I.hlad + S;
                        if (I.peniaze < 25)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš toľko peňazí!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (I.peniaze >= 25 && najest <= 100)
                        {
                            Console.Clear();
                            Console.WriteLine("Kúpil si si slaninu!");
                            Console.WriteLine("Doplnil si si tak 20 hladu!");
                            Console.WriteLine("Stálo ťa to 25$!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.hlad = I.hlad + 20;
                            I.peniaze = I.peniaze - 25;
                        }
                        else
                        {
                            Console.WriteLine("Toľko nezješ!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        break;

                    case 5:
                        koncit = 1;
                        break;

                    default:
                        Console.Clear();
                        Console.WriteLine("Zadaná možnosť nie je dostupná!");
                        Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                        Console.ReadKey();
                        break;
                }
            }
        }
        //BAR
        public void bar(Info I)
        {
            int zvolit;
            int koniec = 0;

            while(koniec != 1)
            {
                if (I.opilost >= 50)
                {
                    Console.Clear();
                    Console.WriteLine("Už si moc opitý! Vyhodili ťa z baru!");
                    Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                    koniec = 1;
                    Console.ReadKey();
                }
                if (I.opilost < 50)
                {
                    Console.Clear();
                    Console.WriteLine("Hlad: " + I.hlad + "");
                    Console.WriteLine("Peniaze: " + I.peniaze + "$");
                    Console.WriteLine("1.) Pivo [-8$ +5 Opilosti -2 Hladu]");
                    Console.WriteLine("2.) Rum [-15$ +20 Opilosti -10 Hladu]");
                    Console.WriteLine("3.) Cola [-4$]");
                    Console.WriteLine("4.) Tonic [-6$]");
                    Console.WriteLine("5.) Odísť");
                    zvolit = int.Parse(Console.ReadLine());

                    switch (zvolit)
                    {
                        case 1:
                            if (I.peniaze >= 8)
                            {
                                Console.Clear();
                                Console.WriteLine("Vypil si pivo!");
                                I.peniaze -= 8;
                                I.hlad -= 2;
                                I.opilost += 5;
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            if (I.peniaze < 8)
                            {
                                Console.Clear();
                                Console.WriteLine("Nemáš toľko peňazí!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            break;

                        case 2:
                            if (I.peniaze >= 15)
                            {
                                Console.Clear();
                                Console.WriteLine("Vypil si rum!");
                                I.peniaze -= 15;
                                I.hlad -= 10;
                                I.opilost += 20;
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            if (I.peniaze < 15)
                            {
                                Console.Clear();
                                Console.WriteLine("Nemáš toľko peňazí!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            break;

                        case 3:
                            if (I.peniaze >= 4)
                            {
                                Console.Clear();
                                Console.WriteLine("Vypil si Colu!");
                                I.peniaze -= 4;
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            if (I.peniaze < 4)
                            {
                                Console.Clear();
                                Console.WriteLine("Nemáš toľko peňazí!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            break;

                        case 4:
                            if (I.peniaze >= 6)
                            {
                                Console.Clear();
                                Console.WriteLine("Vypil si Tonic!");
                                I.peniaze -= 6;
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            if (I.peniaze < 6)
                            {
                                Console.Clear();
                                Console.WriteLine("Nemáš toľko peňazí!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }
                            break;

                        case 5:
                            koniec = 1;
                            break;

                        case 215:

                            break;

                        default:
                            Console.Clear();
                            Console.WriteLine("Zadaná možnosť nie je dostupná!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            break;
                    }
                }
            }
        }
    }
}
