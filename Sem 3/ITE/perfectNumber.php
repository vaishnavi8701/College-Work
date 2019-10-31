<!--  Perfect number is a positive integer 
      that is equal to the sum of its positive divisors -->

<?php
    $n = 6;
    $divisors = array();
    for($i=1; $i<=$n; $i++){

        //Condition: n should be divisible by i but n is not equal to i;
        if($n % $i == 0 && $i != $n){
            
            //Adding elements to empty array
            $divisors[] = $i;
        }
    }

    $divisorSum = array_sum($divisors);

    if($divisorSum == $n){
        echo 'Given number is Perfect number';
    }else{
        echo 'Not a Perfect Number';
    }
?>