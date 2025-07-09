[<EntryPoint>]
let main argv =
    printfn "Привет, мир!"
    let numbers = [1; 2; 3; 4; 5]
    let squares = List.map (fun x -> x * x) numbers
    printfn "Квадраты: %A" squares
    0