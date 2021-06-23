# Theorie-Aufgaben zu Bäumen
## Binäre Suchbäume aufbauen
Erzeugen Sie aus jeder der folgenden Zahlenreihen einen binären Suchbaum, indem Sie die Elemente nacheinander einfügen. Zeichnen Sie den resultierenden Baum:

* `42 23 15 35 77 105 21`
	* [Lösung](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%2042%20--%2023%0A%20%2042%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%2042%20--%2077%0A%20%2023%20--%2015%0A%20%2023%20--%2035%0A%20%2077%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%2077%20--%20105%0A%20%2015%20--%20D3%5Bstyle%3Dinvis%5D%0A%20%2015%20--%2021%0A%20%20%0A%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20D2%5Bstyle%3Dinvis%5D%0A%20%20D3%5Bstyle%3Dinvis%5D%0A%7D)
* `25 15 77 85 17 25 103`
	* [Lösung](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%23%2025%2015%2077%2085%2017%2025%20103%0A%20%20%0A%20%2025%20--%2015%0A%20%2025%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%2025%20--%2077%0A%20%2077%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%2077%20--%2085%0A%20%2015%20--%20D3%5Bstyle%3Dinvis%5D%0A%20%2015%20--%2017%0A%20%2017%20--%20D4%5Bstyle%3Dinvis%5D%0A%20%2017%20--%20D25%0A%20%2085%20--%20D5%5Bstyle%3Dinvis%5D%0A%20%2085%20--%20103%0A%20%20%0A%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20D2%5Bstyle%3Dinvis%5D%0A%20%20D3%5Bstyle%3Dinvis%5D%0A%20%20D4%5Bstyle%3Dinvis%5D%0A%20%20D5%5Bstyle%3Dinvis%5D%0A%20%20D25%5Blabel%3D25%5D%0A%7D)
* `17 22 3 -5 17 38 42 3`
	* [Lösung](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%23%2017%2022%203%20-5%2017%2038%2042%203%0A%20%20%0A%20%2017%20--%203%0A%20%2017%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%2017%20--%2022%0A%20%203%20--%20-5%0A%20%203%20--%20D17%0A%20%2022%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%2022%20--%2038%0A%20%2038%20--%20D3%5Bstyle%3Dinvis%5D%0A%20%2038%20--%2042%0A%20%20-5%20--%20D4%5Bstyle%3Dinvis%5D%0A%20%20-5%20--%20DD3%0A%20%20%0A%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20D2%5Bstyle%3Dinvis%5D%0A%20%20D3%5Bstyle%3Dinvis%5D%0A%20%20D4%5Bstyle%3Dinvis%5D%0A%20%20DD3%5Blabel%3D3%5D%0A%20%20D17%5Blabel%3D17%5D%0A%7D)

## Struktur binärer Suchbäume
Die folgenden beiden Zahlenreihen repräsentieren den selben binären Suchbaum, einmal in **Pre-Order-Darstellung** und einmal in **In-Order-Darstellung**. Zeichnen Sie den Baum:

* Pre-Order: `42 15 3 12 87 53 118`
* In-Order: `3 12 15 42 53 87 118`
* [Lösung](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%2042%20--%2015%0A%20%2042%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%2042%20--%2087%0A%20%2015%20--%203%0A%20%2015%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%2087%20--%2053%0A%20%2087%20--%20118%0A%20%203%20--%20D3%5Bstyle%3Dinvis%5D%0A%20%203%20--%2012%0A%20%20%0A%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20D2%5Bstyle%3Dinvis%5D%0A%20%20D3%5Bstyle%3Dinvis%5D%0A%7D)

