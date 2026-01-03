# Menaxhimi i Buxhetit Ditor (C++)

Ky projekt është një program i thjeshtë në **C++** që ndihmon përdoruesin të menaxhojë shpenzimet ditore dhe të kontrollojë nëse ka qëndruar brenda buxhetit të caktuar.

Programi merr si input buxhetin ditor dhe shpenzimet individuale, llogarit totalin e tyre dhe jep një mesazh nëse buxheti është tejkaluar ose nëse janë kursyer para.

---

## 🚀 Funksionalitetet

- Vendosja e buxhetit ditor  
- Regjistrimi i disa shpenzimeve  
- Llogaritja automatike e totalit të shpenzimeve  
- Krahasimi i shpenzimeve me buxhetin  
- Paralajmërim nëse buxheti tejkalohet  
- Mesazh pozitiv nëse ka kursime  

---

## 🧮 Si funksionon programi

1. Përdoruesi vendos buxhetin ditor  
2. Përdoruesi vendos numrin e shpenzimeve  
3. Programi merr shpenzimet një nga një  
4. Llogaritet totali i shpenzimeve  
5. Totali krahasohet me buxhetin  

---

## 💻 Kodi

```cpp
#include <iostream>
using namespace std;

int main() {
    int numriShpenzimeve;
    double shpenzim, total = 0;
    double buxheti;

    cout << "Vendos buxhetin ditor: ";
    cin >> buxheti;

    cout << "Sa shpenzime do te regjistrosh? ";
    cin >> numriShpenzimeve;

    for (int i = 1; i <= numriShpenzimeve; i++) {
        cout << "Shpenzimi " << i << ": ";
        cin >> shpenzim;
        total += shpenzim;
    }

    cout << "\nTotali i shpenzimeve: " << total << " euro" << endl;

    if (total > buxheti) {
        cout << "Kujdes! Ke tejkaluar buxhetin me "
             << total - buxheti << " euro." << endl;
    } else {
        cout << "Bravo! Ke kursyer "
             << buxheti - total << " euro." << endl;
    }

    return 0;
}
