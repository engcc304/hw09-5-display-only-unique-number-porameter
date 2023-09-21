/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/

#include <stdio.h>

int main() {
    int N ;
    printf( "Input N: " ) ;
    scanf( "%d", &N ) ;

    int arr[N] ;
    printf( "Input:\n" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        scanf( "%d" , &arr[i]) ;
    }

    // ตรวจสอบและแสดงค่าที่ไม่ซ้ำกัน
    printf( "Output:\nUnique value: " ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        int isUnique = 1 ;
        for ( int j = 0 ; j < N ; j++ ) {
            if ( i != j && arr[i] == arr[j] ) {
                isUnique = 0 ;
                break ;
            }
        }
        if ( isUnique ) {
            printf( "%d" , arr[i] ) ;
        }
    }
    printf( "\n" ) ;

    return 0 ;
}
