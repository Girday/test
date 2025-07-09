package main

import "fmt"

func main() {
    fmt.Println("Привет, мир!")
    numbers := []int{1, 2, 3, 4, 5}
    squares := make([]int, len(numbers))
    
    for i, n := range numbers {
        squares[i] = n * n
    }
    
    fmt.Printf("Квадраты: %v\n", squares)
}