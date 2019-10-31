<!-- Addition of Odd and Even numbers of Given number -->

<?php
    $n = 10;
    $oddSum = 0;
    $evenSum = 0;
    $i = 1;
    while($i <= $n){
        if($i % 2 == 0){
            $evenSum = $evenSum + $i;
        }else{
            $oddSum = $oddSum + $i;
        }
        $i++;
    }

    echo 'Given number: '.$n.'<br>';
    echo 'Sum of even numbers: '.$evenSum.'<br>';
    echo 'Sum of odd numbers: '.$oddSum;
?>

<!-- Output

    Given number: 10
    Sum of even numbers: 30
    Sum of odd numbers: 25
    
 -->