
(* Lists *)

[];;
1 :: [];;
[1];;
[1; 3];;

let l = [];;
let l = [1;2;3;4;5;6];;

let rec map f lst =
    if lst = [] then []
    else  f (hd lst) :: map f (tl lst)
;;

 map (function x -> 2 * x * x)  l;;

(map (function x -> 2 * x * x)) l;;

