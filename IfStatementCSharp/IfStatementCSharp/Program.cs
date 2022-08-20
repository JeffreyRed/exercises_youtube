using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IfStatementCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1;
            int num2;
            int result;

            Console.WriteLine("Type a number between 0 & 10");
            num1 = Convert.ToInt32(Console.ReadLine());

            if (!(num1 >= 0 && num1 <= 10))
            {
                Console.WriteLine("Wrong value");
                Console.WriteLine("Type any key to finish");
                Console.ReadKey();
                return;
            }
            else {
                Console.WriteLine("OK");
            }

            Console.WriteLine("Type a number");
            num2 = Convert.ToInt32(Console.ReadLine());

            if (!(num2 >= 0 && num2 <= 10))
            {
                Console.WriteLine("Wrong value");
                Console.WriteLine("Type any key to finish");
                Console.ReadKey();
                return;
            }
            else
            {
                Console.WriteLine("OK");
            }

            result = num1 * num2;

            if (result > 20)
            {
                Console.WriteLine("Value is greater than 20");
            }
            else if (result > 10)
            {
                Console.WriteLine("Value is greater than 10");
            }
            else {
                Console.WriteLine("Other possible values");
            }

            Console.WriteLine("The result is " + result);

            Console.WriteLine("Type any key to finish");
            Console.ReadKey();



        }
    }
}
