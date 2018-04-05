let x=1;;
let x=2 in x*x;;
x;;
(let x=2 in x*x)+x;;
(let x=2 in let y=3 in x+y)+x;;
(let x=2 in let y=3 in x+y)+x+(let x=5 in x*x);;
let y=2 in let z=y in let y=3 in x+y+z;;
let rec fact n = if n=0 then 1 else n*(fact (n-1));;
fact 5;;
(function x -> x+1) (fact x);;

print_string "Hello!!\n";;

(* expected output:
val x : int = 1
- : int = 4
- : int = 1
- : int = 5
- : int = 6
- : int = 31
- : int = 6
val fact : int -> int = <fun>
- : int = 120
- : int = 2
Hello!!
- : unit = ()
*)
