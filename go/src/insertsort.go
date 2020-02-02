package main
import (
	"fmt"
)

func insert_sort(p *[]int, s int) {
	for i:=1; i < s; i++ {
		insert_to_right_place(p, i)
	}
}

func insert_to_right_place(p *[]int, i int) {
	for j := i-1; j >= 0; j-- {
		if (*p)[j] > (*p)[j+1] {
			exchange(p, j)
		}
	}
}

func exchange(p *[]int, j int) {
	temp := (*p)[j+1]
	(*p)[j+1] = (*p)[j]
	(*p)[j] = temp
}

func main() {
	fmt.Println("Hello world")
	var arr []int =[]int { 7,3,9,8,10}
	insert_sort(&arr, len(arr))
	fmt.Println("%p", arr)
}
