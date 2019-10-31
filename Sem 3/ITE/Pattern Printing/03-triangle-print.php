<?php
    $n = 3;
    for($cols = 0; $cols < $n; $cols++){
        // printing space
        for($space = 0; $space <= $n - $cols; $space++){
            echo "&nbsp;&nbsp;";
        }

        // &nbsp; - used for adding whitespacs(space character: ' ')

        //printing stars
        for($row = 0; $row <= $cols; $row++){
            echo "&nbsp;*&nbsp;&nbsp;";
        }
        echo "<br>";
    }
    /*
        Output:
                 *  
               *   *  
             *   *   *  
    */
?>