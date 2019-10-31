<!-- Sum of prime numbers between 1 and 100 -->

<?php
    function prime($n){
        $flag = 0;
        for($i = 1; $i <= $n; $i++){
            if($n % $i == 0){
                $flag++;
            }
        }

        if($flag == 2){
            return 1;
        }
        return 0;
    }

    $num = 100;
    $primeNum = array();
    $j = 1;
    while($j <= $num){
        if(prime($j)){
            $primeNum[] = $j;
        }
        $j++;
    }

    $primeSum = array_sum($primeNum);
    echo 'Sum of prime numbers between 1 and '.$num.' is '.$primeSum;
?>

<!-- 
    Output:
    Sum of prime numbers between 1 and 100 is 1060
 -->