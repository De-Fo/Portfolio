using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;

namespace Projekt2_v._1
{
    class Program
    {
        static void Main(string[] args)
        {
            //PREMENNE 
            int vratit;
            int volba;

            int koniec = 0;
            int koniecP;

            //RANDOM
            Random random = new Random();

            //TRIEDY
            Info I = new Info();
            Obchody obchody = new Obchody();
            Herna H = new Herna();
            Knihy K = new Knihy();
            Posilka P = new Posilka();
            
            //PROGRAM
            Navod(1);
            I.energia = I.energiaMax;
            while (koniec != 1)
            {
                Console.Clear();
                Console.WriteLine("***INFORMÁCIE***");
                Console.WriteLine("Hlad: " + I.hlad + "");
                Console.WriteLine("Peniaze: " + I.peniaze + "$ \tDlh: " + I.dlh + "$");
                Console.WriteLine("Deň: " + I.den + "\tEnergia: " + I.energia + "");
                HerneMenu(1);
                volba = int.Parse(Console.ReadLine());
                switch (volba)
                //MENU HORE
                {
                  /*  case 1: //PRACA                        
                        if (I.energia <= 0)
                        {
                            EnergiaN(1);
                        }
                        else
                            P.praca(I);
                        break;      */
                                    
                    case 2: //HERNA
                        Console.Clear();
                        if (I.energia > 0)
                        {
                            if (I.peniaze <= 0)
                            {
                                Console.WriteLine("Bez peňazí ťa do herne nepustili!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                            }

                            if (I.peniaze > 0)
                            {
                                H.HraciAutomat(I);
                                I.energia = I.energia - 1;
                            }
                        }
                        if (I.energia <= 0)
                        {
                            EnergiaN(1);
                        }
                        break;

                    case 3: //JEDLO
                        if (I.hlad == 100)
                        {
                            Console.WriteLine("Nemôžeš sa najesť keď si najedený!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        else
                        {
                            obchody.Obchod1(I);
                        }
                        break;

                    /*case 4: //POZICAT
                        Console.Clear();
                        if (I.dlh > 0)
                        {
                            Console.WriteLine("Najprv vráť to čo si si už požičal!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (I.dlh == 0)
                        {
                            Console.WriteLine("Zadaj koľko si chceš požičiať!");
                            I.dlh = int.Parse(Console.ReadLine());
                            if (I.dlh > vyplata * 15)
                            {
                                Console.WriteLine("Nemôžeš si požičať, tak veľa!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                                I.dlh = 0;
                            }       
                            else
                            {
                                Console.WriteLine("Požičal si si " + I.dlh + "$!");
                                Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                                Console.ReadKey();
                                I.peniaze = I.peniaze + I.dlh;
                            }
                        }
                        break; */

                    case 5: //VRATIT
                        Console.Clear();
                        Console.WriteLine("Koľko peňazí chceš vrátiť?");
                        vratit = int.Parse(Console.ReadLine());
                        if (vratit > I.peniaze)
                        {
                            Console.WriteLine("Nemôžeš vrátiť viac ako máš pri sebe!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        if (vratit > I.dlh)
                        {
                            Console.WriteLine("Toľko si si nepožičal!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        else
                        {
                            Console.WriteLine("Vratil si " + vratit + "$");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                            I.peniaze = I.peniaze - vratit;
                            I.dlh = I.dlh - vratit;
                        }
                        break;

                    case 6:
                        if (I.opilost >= 50)
                        {
                            Console.WriteLine("Nepustili ťa do baru, pretože si príliš opitý!");
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                            Console.ReadKey();
                        }
                        
                        if (I.energia <= 0)
                        {
                            EnergiaN(1);
                        }

                        if (I.energia > 0 && I.opilost < 50)
                        {
                            obchody.bar(I);
                            I.energia -= 1;
                        }
                        break;

                    case 7:
              
                       if (I.energia <= 0)
                       {
                            Console.Clear();
                            Console.WriteLine("Nemáš dosť energie, choď spať.");
                            Console.ReadKey();

                       }
                       if (I.energia > 0)
                        {
                            Console.Clear();
                            K.knihy(I);
                        }
                     
                        break;

                    case 8:

                        if (I.energia <= 0)
                        {
                            Console.Clear();
                            Console.WriteLine("Nemáš dosť energie, choď spať.");
                            Console.ReadKey();

                        }
                        if (I.energia > 0)
                        {
                            Console.Clear();
                            P.posilka(I);
                        }

                        break;

                    case 9: //DEN
                        Console.Clear();
                        Console.WriteLine("Skončil si tento deň!");
                        Console.WriteLine("Počet akcii sa ti obnovil!");
                        Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                        Console.ReadKey();
                        I.energia = I.energiaMax;
                        I.den = I.den + 1;
                        I.opilost = 0;
                        break;

                    case 10: //NAVOD
                        Console.Clear();
                        Navod(1);
                        Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                        Console.ReadKey();
                        break;

                    case 11: //KONIEC
                        Console.Clear();
                        Console.WriteLine("Naozaj chceš odísť?");
                        Console.WriteLine("1.)Áno \n2.)Nie");
                        koniecP = int.Parse(Console.ReadLine());
                        if (koniecP == 1)
                        {
                            koniec = 1;
                        }
                        if (koniecP == 2)
                        {
                            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu! :)");
                            Console.ReadKey();
                        }
                        break;

                    default:
                        Console.Clear();
                        Console.WriteLine("Zadaná možnosť nie je dostupná!");
                        Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
                        Console.ReadKey();
                        break;

                        case 1998:
                        
                        Console.Clear();
                        Console.WriteLine("HACKING SUCCESFULL");
                        I.peniaze =+ 99999;
                        I.den =+ 37;
                        I.vedomosti =+ 50;
                        I.atletika = +50;
                        Console.ReadKey();
                        break;
                        
                }
            }
        }
        //TEXTY
        static void HerneMenu(int HerneMenu)
        {
            Console.WriteLine("------------------");
            Console.WriteLine("1.)Ísť do roboty [-1 Energia, -20 Hladu]");
            Console.WriteLine("2.)Ísť do herne [-1 Energia -X Hladu]");
            Console.WriteLine("3.)Najesť sa");
            Console.WriteLine("4.)Požičať si");
            Console.WriteLine("5.)Vrátiť peniaze");
            Console.WriteLine("6.)Ísť do baru [-1 Energia -X Hladu +X Opilosti]");
            Console.WriteLine("7.)Knihy");
            Console.WriteLine("8.)Posilka");
            Console.WriteLine("9.)Preskočiť deň");
            Console.WriteLine("******************");
            Console.WriteLine("10.)Návod");
            Console.WriteLine("11.)Koniec");
        }

        static void Navod(int Navod)
        {
            Console.Clear();
            Console.WriteLine("***Návod***");
            Console.WriteLine("\nKeď si prečítate Menu, tak máte pri každej možnosti číslo.");
            Console.WriteLine("Možnosť si vyberiete tým že napíšete číslo možnosti a stlač Enter.");
            Console.WriteLine("\nPre pokračovanie stlačte ľubovoľnú klávesu. :)");
            Console.ReadKey();
        }
        
        static void EnergiaN(int EnergiaN)
        {
            Console.Clear();
            Console.WriteLine("Už nemáš žiadnu energiu!");
            Console.WriteLine("Preskoč deň pre obnovenie energie!");
            Console.WriteLine("Pre pokračovanie stlač ľubovoľnú klávesu!");
            Console.ReadKey();
        }
    }
}
