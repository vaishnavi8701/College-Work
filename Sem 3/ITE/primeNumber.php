<!-- Check whether the given number is prime number or not -->

<?php
    $n = 10;
    $flag = 0;
    $i = 1;
    while($i <= $n){
        if($n % $i == 0){
            $flag++;
        }
        $i++;
    }

    echo 'Input: '.$n.'<br>';
    if($flag == 2){
        echo 'Given Number is a Prime number';
    }else{
        echo 'Not a Prime number';
    }
?>

<!--
    Output:
    
    Input: 10
    Not a Prime number

 -->