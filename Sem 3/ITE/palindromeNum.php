<!-- Check whether the given number is palindrome or not -->

<?php
    $n = 123;
    $temp = $n;
    $sum = 0;
    while($temp > 0){
        $rem = $temp % 10;
        $sum = ($sum * 10) + $rem;
        $temp = (int)($temp / 10);
    }

    echo 'Input: '.$n.'<br>';
    if($sum == $n){
        echo 'Given number is Palindrome';
    }else{
        echo 'Not a Palindrome';
    }
?>

<!-- 
    Output:
    
    Input: 123
    Not a Palindrome
 -->