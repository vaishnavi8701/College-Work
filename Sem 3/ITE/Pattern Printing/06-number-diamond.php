<?php
    $n = 3;

    /*Printing first half of the diamond*/
    for($cols = 0; $cols < $n; $cols++){
        // printing space
        for($space = 0; $space <= $n - $cols; $space++){
            echo "&nbsp;&nbsp;";
        }

        // &nbsp; - used for adding whitespaces(space character: ' ')

        //printing stars
        for($row = 0; $row <= $cols; $row++){
            echo "&nbsp;*&nbsp;&nbsp;";
        }
        echo "<br>";
    }

     /*Printing second half of the diamond*/
    for($cols = $n; $cols >= 0; $cols--){
        // printing space
        for($space = 0; $space <= $n - $cols; $space++){
            echo "&nbsp;&nbsp;";
        }

        // &nbsp; - used for adding whitespaces(space character: ' ')

        //printing stars
        for($row = $cols; $row >= 0; $row--){
            echo "&nbsp;*&nbsp;&nbsp;";
        }
        echo "<br>";
    }

    /*
        Output:
                 *  
               *   *  
             *   *   *  
           *   *   *   *  
             *   *   *  
               *   *  
                 *  
    */
?>