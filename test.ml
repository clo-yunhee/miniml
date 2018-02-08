let x = 1;;
let x = 2 in x * x;;
x;;
(let x = 2 in x * x) + x;;
(let x = 2 in let y = 3 in x + y) + x;;
(let x = 2 in let y = 3 in x + y) + x + (let x = 5 in x * x);;
let y = 2 in let z = y in let y = 3 in x + y + z;;

let rec fact n = if n = 0 then 1 else n * (fact (n - 1));;
fact 5;;
(function x -> x +1) (fact x);;
