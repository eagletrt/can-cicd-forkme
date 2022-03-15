#include <string.h>

void bms_msgname_from_id(uint32_t msg_id, char buffer[static 15]) {
    /*
    *       Returns a string containing the name of the message having the specified id
    *           Parameters:
    *               msg_id: the id of the message
    *               buffer: the pre allocated buffer where the message name will be returned
    */
    switch (msg_id) {
        case 1536:
            strcpy(buffer, "BOARD_STATUS_0");
            break;
        case 1568:
            strcpy(buffer, "BOARD_STATUS_1");
            break;
        case 1600:
            strcpy(buffer, "BOARD_STATUS_2");
            break;
        case 1632:
            strcpy(buffer, "BOARD_STATUS_3");
            break;
        case 1664:
            strcpy(buffer, "BOARD_STATUS_4");
            break;
        case 1696:
            strcpy(buffer, "BOARD_STATUS_5");
            break;
        case 1281:
            strcpy(buffer, "TEMPERATURES_0");
            break;
        case 1313:
            strcpy(buffer, "TEMPERATURES_1");
            break;
        case 1345:
            strcpy(buffer, "TEMPERATURES_2");
            break;
        case 1377:
            strcpy(buffer, "TEMPERATURES_3");
            break;
        case 1409:
            strcpy(buffer, "TEMPERATURES_4");
            break;
        case 1441:
            strcpy(buffer, "TEMPERATURES_5");
            break;
        case 514:
            strcpy(buffer, "VOLTAGES_0");
            break;
        case 546:
            strcpy(buffer, "VOLTAGES_1");
            break;
        case 578:
            strcpy(buffer, "VOLTAGES_2");
            break;
        case 610:
            strcpy(buffer, "VOLTAGES_3");
            break;
        case 642:
            strcpy(buffer, "VOLTAGES_4");
            break;
        case 674:
            strcpy(buffer, "VOLTAGES_5");
            break;
        case 515:
            strcpy(buffer, "BALANCING");
            break;
        case 260:
            strcpy(buffer, "FW_UPDATE");
            break;
        default:
            strcpy(buffer, ""); // Unknown message
    }
}
