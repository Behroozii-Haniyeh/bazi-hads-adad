/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>  // برای rand() و srand()
#include <ctime>    // برای time()

using namespace std;


// تابع اصلی بازی حدس عدد

int main() {
    // راه‌اندازی تولید اعداد تصادفی
    srand(static_cast<unsigned int>(time(0)));  // استفاده از زمان سیستم به عنوان seed
    int secretNumber = rand() % 100 + 1;        // عدد تصادفی بین 1 تا 100

    int userGuess = 0;  // متغیر برای نگه داشتن حدس کاربر
    int talashkarbar = 0;   // تعداد تلاش‌های کاربر

    // خوش آمدگویی و توضیح بازی
    cout << "-----------------------------------------" << endl;
    cout << "bazi hads adad!" << endl;
    cout << "yek adad beyne 1 ta 100 dar nazar gerefte shode." << endl;
    cout << "talash konid onra hads bezanid!" << endl;
    cout << "-----------------------------------------" << endl;

    
    // حلقه اصلی بازی
    
    while (true) {
        cout << "adad khod ra vared konid : ";
        cin >> userGuess;

        // بررسی ورودی نامعتبر
        if (cin.fail()) {
            cin.clear();             // پاک کردن وضعیت خطا
            cin.ignore(1000, '\n');  // نادیده گرفتن ورودی اشتباه
            cout <<"lotfan faghatadad vared konid !" << endl;
            continue;
        }

        talashkarbar++;  // افزایش تعداد تلاش‌ها

        // بررسی حدس کاربر
        if (userGuess < secretNumber) {
            cout << "adad shoma kochektar ast. dobare talash konid" << endl;
        } else if (userGuess > secretNumber) {
            cout << "adad shoma bozorgtar ast. dobare talash konid" << endl;
        } else {
            // حدس صحیح
            cout << "afarin shoma adad" << secretNumber << "dorost hads zadid" << endl;
            cout << "tedad talash ha: " << talashkarbar << endl;
            break;  // خروج از حلقه
        }
    }

    cout << " ba tashakor az bazi shoma!" << endl;

    return 0;
}
