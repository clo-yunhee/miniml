let rec fact n = if n = 0 then 1 else n * (fact (n - 1));;
let rec f x = f x ;;

let (a, b) = (1, 2);;
let (x, y) = (a, a * b);;
let iftype = if true then 1;;
