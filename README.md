# Abstrakcja w programowaniu obiektowym (C++)

## Co to jest abstrakcja?

Abstrakcja to jeden z podstawowych filarów programowania obiektowego. Polega na ukrywaniu szczegółów implementacji i udostępnianiu jedynie istotnych funkcji obiektu.

Użytkownik klasy nie musi wiedzieć, jak coś działa "pod maską" — wystarczy, że wie, jak z tego korzystać.

## Dlaczego używamy abstrakcji?

- upraszcza korzystanie z kodu
- oddziela interfejs od implementacji
- ułatwia rozwój i utrzymanie projektu
- pozwala zmieniać implementację bez wpływu na resztę programu

## Jak wygląda abstrakcja w C++?

W C++ abstrakcję najczęściej realizuje się za pomocą:
- klas abstrakcyjnych
- metod wirtualnych (virtual)
- metod czysto wirtualnych (= 0)

## Przykład

Przykład z życia: samochód

Kierowca korzysta z samochodu poprzez prosty interfejs:
- pedał gazu → samochód przyspiesza
- hamulec → samochód zwalnia lub się zatrzymuje
- kierownica → zmienia kierunek jazdy

Nie musi wiedzieć, jak działa silnik, układ hamulcowy czy skrzynia biegów.  
Te szczegóły są ukryte — i to właśnie jest abstrakcja.
