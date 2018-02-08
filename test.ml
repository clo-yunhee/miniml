(* simple comment *)
(* nested (* comment let a = *) *)

(* top-level let *)
let x = 1;; (* integer *)
let y = 5.;; (* float *)
let yf = 3.14;;
let z = "String with escape\n \" characters in it";;

(* simple let-in *)
let x = 2 in x * x;;

(* using let as an expression *)
(let x = 2 in x * x) + x;;
(* and with nested let-ins *)
(let x = 2 in let y = 3 in x + y) + x;;
(let x = 2 in let y = 3 in x + y) + x + (let x = 5 in x * x);;

let y = 2 in let z = y in let y = 3 in x + y + z;;

(* if-else *)
let a = 5 in if a < 1 then 0 else 3;;

(* basic function declaration *)
let f x = 2 * x;;
(* multi-param function declaration *)
let g x y z = x + y * z;;

(* recursive function *)
let rec fact n = if n = 0 then 1 else n * (fact (n - 1));;

(* anonymous functions *)
(function x -> x + 1) (fact a);;

(* using operator as a name *)
(*let ( + ) x y = x - y;;*)
