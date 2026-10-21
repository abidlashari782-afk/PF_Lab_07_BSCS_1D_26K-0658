#include <stdio.h>

int main() {
    int temp[3][3][3];
    float avg_layer[3] = {0.0};
    int sum_layer[3] = {0};
    
    int max_layer = 0;
    
    int max_temp;
    int max_x = 0, max_y = 0, max_z = 0;

    printf("--- Enter Temperature Data for Greenhouse (3x3x3) ---\n");
    for(int z = 0; z < 3; z++) {
        printf("\n--- Layer %d ---\n", z + 1);
        for(int x = 0; x < 3; x++) {
            for(int y = 0; y < 3; y++) {    
                printf("Enter temp at (x=%d, y=%d, z=%d): ", x + 1, y + 1, z + 1);
                scanf("%d", &temp[x][y][z]);
            }
        }
    }

    max_temp = temp[0][0][0];

    for(int z = 0; z < 3; z++) {
        for(int x = 0; x < 3; x++) {
            for(int y = 0; y < 3; y++) {
                sum_layer[z] += temp[x][y][z];
            }
        }
        avg_layer[z] = sum_layer[z] / 9.0;
    }

    for(int z = 0; z < 3; z++) {
        if(avg_layer[z] > avg_layer[max_layer]) {
            max_layer = z;
        }
    }

    for(int z = 0; z < 3; z++) {
        for(int x = 0; x < 3; x++) {
            for(int y = 0; y < 3; y++) {
                if(temp[x][y][z] > max_temp) {
                    max_temp = temp[x][y][z];
                    max_x = x;
                    max_y = y;
                    max_z = z;
                }
            }
        }
    }
    printf("\n=================== GREENHOUSE TEMPERATURE SUMMARY ===================\n");
    
    printf("\n[1] Average Temperature per Layer:\n");
    for(int z = 0; z < 3; z++) {
        printf("   - Layer %d (z = %d): %.2f C\n", z + 1, z + 1, avg_layer[z]);
    }

    printf("\n[2] Hottest Layer:\n");
    printf("   - Layer %d is the hottest with an average temperature of %.2f C\n", 
           max_layer + 1, avg_layer[max_layer]);

    printf("\n[3] Maximum Temperature Point:\n");
    printf("   - Highest Temperature recorded: %d C\n", max_temp);
    printf("   - Coordinates: (x = %d, y = %d, z = %d)\n", 
           max_x + 1, max_y + 1, max_z + 1);

    printf("======================================================================\n");

    return 0;
}