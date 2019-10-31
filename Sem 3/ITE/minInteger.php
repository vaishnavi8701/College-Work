<!-- Minimum Integer of given number -->

<?php
    $n = 123;
    $temp = $n;
    $min = 1;

    while($temp > 0){
        $rem = $temp % 10;
        if($min > $rem){
            $min = $rem;
        }

        // (int) is used to convert the resultant float value of $temp into integer
        $temp = (int)($temp / 10);
    }

    echo 'Smallest integer of '.$n.' is '.$min;
?>