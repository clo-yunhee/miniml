let rec fact n = if n = 0 then 1 else n * (fact (n - 1));;
let rec g x = g x ;;

let (a, b) = (1, 2);;
let (x, y) = (a, a * b);;
let iftype = if true then 1;;

let scope = 123.;;
let f x y = x + (int_of_float y);;

let f x y = () in f 1.;;

(+) 1 2;;
