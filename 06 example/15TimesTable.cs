using System;

namespace Basic
{
    class TimesTable
    {
        static void Main(string[] args)
        {
            for (int y = 1; y <= 9; y++)
            {
                for (int x = 2; x <= 9; x++)
                    Console.Write("{0}x{1}={2,2} ", x, y, x * y);
                Console.WriteLine();
            }

        }
    }
}
