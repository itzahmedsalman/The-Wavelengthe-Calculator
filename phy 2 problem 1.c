
 if (wave_length >= 380 && wave_length < 450)

        printf("Violet");

    else if (wave_length >= 450 && wave_length < 485)
        printf("Blue");
    else if (wave_length >= 485 && wave_length < 500)
        printf("Cyan");
    else if (wave_length >= 500 && wave_length < 565)
        printf("Green");
    else if (wave_length >= 565 && wave_length < 590)
        printf("Yellow");
    else if (wave_length >= 590 && wave_length < 625)
        printf("Orange");
    else if (wave_length >= 625 && wave_length <= 750)
        printf("Red");
    else
        printf("Out of visible range");

        return 0;
