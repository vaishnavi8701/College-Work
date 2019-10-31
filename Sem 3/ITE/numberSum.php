<!-- Sum of given number -->

<?php
    $n = 123;
    $temp = $n;
    $sum = 0;
    while($temp > 0){
        $rem = $temp % 10;
        $sum = $sum + $rem;
        $temp = $temp / 10;
    }

    echo 'Sum of '.$n.' is '.$sum;
?>

<!-- 
    Output:
    Sum of 123 is 6
 -->