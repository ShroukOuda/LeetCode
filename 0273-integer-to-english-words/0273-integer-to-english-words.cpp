class Solution {
public:
     const string ones[20] = {
            "", 
            "One", 
            "Two", 
            "Three", 
            "Four", 
            "Five", 
            "Six", 
            "Seven", 
            "Eight", 
            "Nine",
            "Ten",
            "Eleven", 
            "Twelve", 
            "Thirteen", 
            "Fourteen", 
            "Fifteen", 
            "Sixteen", 
            "Seventeen",
            "Eighteen", 
            "Nineteen"
        };
        
       const string tens[10] = {
            "", 
            "Ten", 
            "Twenty", 
            "Thirty", 
            "Forty", 
            "Fifty", 
            "Sixty",
            "Seventy", "Eighty", "Ninety"
        };
        string convert(int num) {
            if (num == 0)
                return "";
            if (num >= 1 && num <= 19)
            return ones[num];
            if (num >= 20 && num <= 99)
                return tens[num / 10] + (num % 10 == 0 ? "" : " " + ones[num % 10]);
            if (num >= 100 && num <= 999)
                return numberToWords(num / 100) + " Hundred" + (num % 100 == 0 ? "" : " " + convert(num % 100));
            if (num >= 1000 && num <= 999999)
                return numberToWords(num / 1000) + " Thousand" + (num % 1000 == 0 ? "" : " " + convert(num % 1000));
            if (num >= 1000000 && num <= 999999999)
                return numberToWords(num / 1000000) + " Million" + (num % 1000000 == 0 ? "" : " " + convert(num % 1000000));
            if (num >= 1000000000)
                return numberToWords(num / 1000000000) + " Billion" + (num % 1000000000 == 0 ? "" : " " + convert(num % 1000000000));
            return "";
        }
        
    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        return convert(num);
    }
};
