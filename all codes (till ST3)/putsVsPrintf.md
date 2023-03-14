### Difference between printf() and puts()

- when we use puts() then control reached to the start of line again, i.e control reaches to next line after printing the string

```c
int main(){
    puts("hello");
}
```

`hello
 <- here is control now `

- when we use printf() to print the string the control stays at the end of the line only
  
  ```c
  int main(){
    puts("hello");
  }
  ```
  

` hello <- here is the control now
`
