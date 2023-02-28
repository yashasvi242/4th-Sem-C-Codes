# Recursion in C

when a function call itself again and again, its called recursion.

### Recursion Rules :-

    - function must call itself again and again

    - function must contain parameters

    - parameter must be changed

    - recursive function takes more time as compared to the iterative functions

### Operator

`.` dot operator

`::` scope resolution operator

`->` array access operator

### Types of Recursion

- direct recursion

        when function a call itself.

- indirect recrusion

          when fun a calls fun b and fun b calls fun a

- head recursion

    when fun call for a is at the end of fun a

- tail recursion

    when fun call is not at the end, but somewhere in the middle or top

- linear

```cpp
a(int x){

        ...

        a(x+1)

        ...

}
```

- tree recursion

```cpp
a(int x){

        ...

        a(x+1) + a(x-1)

        ...

}
```

   
