// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_BTN1 &mkp MB1
#define U_BTN2 &mkp MB2
#define U_BTN3 &mkp MB3

/ {
    macros {
        U_NUDT: U_NUDT {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <5>;
            wait-ms = <100>;
            bindings
                = <&kp KP_NUM &kp KP_NUM>
                , <&macro_pause_for_release>
                , <&kp KP_NUM &kp KP_NUM>
                ;
        };
    };
};



#define U_MS_D &kp KP_N2
#define U_MS_L &kp KP_N4
#define U_MS_R &kp KP_N6
#define U_MS_U &kp KP_N8
#define U_WH_D U_NU
#define U_WH_L U_NU
#define U_WH_R U_NU
#define U_WH_U U_NU
