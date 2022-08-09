using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataTypeCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            sbyte smallbyte = 127;
            byte byteVal = 255;
            short shortVal = 32767;
            long longVal = 232432423;
            int intVal = 2147483647;
            uint unsignedIntVal = (uint)intVal * 2;
            float floatVal = 0.01f;
            double doubleVal = 0.00001;
            decimal decVal = 359.5m;
            bool flag = false;
            DayOfWeek day = DayOfWeek.Friday;

            Console.WriteLine("sbyte {0}", smallbyte);
            Console.WriteLine("byte {0}", byteVal);
            Console.WriteLine("short {0}", shortVal);
            Console.WriteLine("long {0}", longVal);
            Console.WriteLine("int {0}", intVal);
            Console.WriteLine("uint {0}", unsignedIntVal);
            Console.WriteLine("float {0}", floatVal);
            Console.WriteLine("double {0}", doubleVal);
            Console.WriteLine("decimal {0}", decVal);
            Console.WriteLine("bool {0}", flag);
            Console.WriteLine("enum {0}", day);
            Console.ReadKey();

        }
    }
}
