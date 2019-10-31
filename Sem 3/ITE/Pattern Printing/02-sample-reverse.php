<?php
    $n = 5;
    for($i=0; $i<$n; $i++){
        for($j=5; $j>$i; $j--){
            echo "{$j} ";
        }
        echo "<br>";
    }

    /*
        Output:
        5 4 3 2 1
        5 4 3 2
        5 4 3
        5 4
        5
    */
?>

