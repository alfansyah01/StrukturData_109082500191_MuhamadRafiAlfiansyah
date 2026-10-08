package main

import "fmt"

func main() {
	var x [10]string
	var y [5]string
	var c [5]int
	var n, m int

	// Input jumlah x
	fmt.Scan(&n)

	// Input x
	for i := 0; i < n; i++ {
		fmt.Scan(&x[i])
	}

	// Jumlah y = setengah x, dibulatkan ke atas
	m = (n + 1) / 2

	// Input y
	for i := 0; i < m; i++ {
		fmt.Scan(&y[i])
	}

	// Output wajib
	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {

			if y[i] == x[j] {
				fmt.Printf("%s[%d]", x[j], j)

				if i < m-1 {
					fmt.Print(" + ")
				}

				break
			}
		}
	}

	fmt.Println()

	// Output bonus
	i := 0

	for i < m {

		if c[i] < i {

			if i%2 == 0 {
				y[0], y[i] = y[i], y[0]
			} else {
				y[c[i]], y[i] = y[i], y[c[i]]
			}

			for j := 0; j < m; j++ {
				for k := 0; k < n; k++ {

					if y[j] == x[k] {
						fmt.Printf("%s[%d]", x[k], k)

						if j < m-1 {
							fmt.Print(" + ")
						}

						break
					}
				}
			}

			fmt.Println()

			c[i]++
			i = 0

		} else {
			c[i] = 0
			i++
		}
	}
}