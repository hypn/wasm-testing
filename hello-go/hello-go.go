// docker run -ti --rm -v $PWD:/src golang bash -c "cd /src && go build hello-go.go && ./hello-go"

package main

import "fmt"

func main() {
  fmt.Println("Hello from Go!")
}
