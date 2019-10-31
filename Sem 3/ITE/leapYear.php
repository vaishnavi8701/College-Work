<!-- Check Whether the given number is leap year or not -->

<?php
    $year = 2000;
    $flag = 0;

    if($year % 400 == 0 || ($year % 100 == 0) && ($year % 4 != 0)){
        $flag = 1;
    }

    echo 'Input: '.$year.'<br>';
    if($flag == 1){
        echo 'Given year is a Leap year';
    }else{
        echo 'Not a leap year';
    }
?>

<!-- Output:

    Input: 2000
    Given year is a Leap year

 -->