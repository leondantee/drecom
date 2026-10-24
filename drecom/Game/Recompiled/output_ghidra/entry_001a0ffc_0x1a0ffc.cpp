#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a0ffc
// Address: 0x1a0ffc - 0x1a1130
void entry_001a0ffc_0x1a0ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ffc_0x1a0ffc");
#endif

    ctx->pc = 0x1a0ffcu;

    // 0x1a0ffc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1000: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1004: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1008: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a100c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a100cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1010: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1014: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a1014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a1018: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a101c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a101cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1020: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1024: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1028: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a102c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1030: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x1a1030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1034: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1038: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a103c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1040: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1044: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a1044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1048: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a104c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a104cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a1050: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1054: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a1054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1058: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a105c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1060: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1064: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1068: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1a1068u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a106c: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x1a106cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1070: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1074: 0xa0640036  sb          $a0, 0x36($v1)
    ctx->pc = 0x1a1074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 54), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1078: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x1a1078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x1a107c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1080: 0xa0640037  sb          $a0, 0x37($v1)
    ctx->pc = 0x1a1080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 55), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1084: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x1a1084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1a1088: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a108c: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x1a108cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1090: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x1a1090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1a1094: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1098: 0xa0640039  sb          $a0, 0x39($v1)
    ctx->pc = 0x1a1098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a109c: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x1a109cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a10a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10a4: 0xa064003d  sb          $a0, 0x3D($v1)
    ctx->pc = 0x1a10a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 61), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10a8: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x1a10a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1a10ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10b0: 0xa064003c  sb          $a0, 0x3C($v1)
    ctx->pc = 0x1a10b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 60), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10b4: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x1a10b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a10b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10bc: 0xa064003a  sb          $a0, 0x3A($v1)
    ctx->pc = 0x1a10bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10c0: 0x9224000b  lbu         $a0, 0xB($s1)
    ctx->pc = 0x1a10c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1a10c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10c8: 0xa064003b  sb          $a0, 0x3B($v1)
    ctx->pc = 0x1a10c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 59), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10cc: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x1a10ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a10d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10d4: 0xa064003e  sb          $a0, 0x3E($v1)
    ctx->pc = 0x1a10d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 62), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10d8: 0x9224000d  lbu         $a0, 0xD($s1)
    ctx->pc = 0x1a10d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1a10dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10e0: 0xa0640041  sb          $a0, 0x41($v1)
    ctx->pc = 0x1a10e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10e4: 0x9224000e  lbu         $a0, 0xE($s1)
    ctx->pc = 0x1a10e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1a10e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10ec: 0xa064003f  sb          $a0, 0x3F($v1)
    ctx->pc = 0x1a10ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 63), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10f0: 0x9224000f  lbu         $a0, 0xF($s1)
    ctx->pc = 0x1a10f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x1a10f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10f8: 0xa0640040  sb          $a0, 0x40($v1)
    ctx->pc = 0x1a10f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10fc: 0x92240010  lbu         $a0, 0x10($s1)
    ctx->pc = 0x1a10fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a1100: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1104: 0xa0640042  sb          $a0, 0x42($v1)
    ctx->pc = 0x1a1104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1108: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x1a1108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x1a110c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1110: 0xa0640043  sb          $a0, 0x43($v1)
    ctx->pc = 0x1a1110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1114: 0x92240012  lbu         $a0, 0x12($s1)
    ctx->pc = 0x1a1114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1a1118: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a111c: 0xa0640044  sb          $a0, 0x44($v1)
    ctx->pc = 0x1a111cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1120: 0x92240013  lbu         $a0, 0x13($s1)
    ctx->pc = 0x1a1120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x1a1124: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1128: 0xa0640045  sb          $a0, 0x45($v1)
    ctx->pc = 0x1a1128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a112c: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1a1130u;
}
