<!-- Maximum Integer of given number -->

<?php
    $n = 123;
    $temp = $n;
    $max = 0;

    while($temp > 0){
        $rem = $temp % 10;
        if($max < $rem){
            $max = $rem;
        }
        $temp = $temp / 10;
    }

    echo 'Greatest integer of '.$n.' is '.$max;
?>