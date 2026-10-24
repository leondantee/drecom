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

// Function: entry_00257fd4
// Address: 0x257fd4 - 0x2580e4
void entry_00257fd4_0x257fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257fd4_0x257fd4");
#endif

    ctx->pc = 0x257fd4u;

    // 0x257fd4: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x257fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x257fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257fe0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x257fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x257fe4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x257fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257fe8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x257fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x257fec: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x257fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x257ff0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257ff4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x257ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x257ff8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x257ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x257ffc: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x258000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258004: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x258008: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25800c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x25800cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x258010: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x258010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x258014: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x258014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x258018: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x258018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25801c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258020: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x258020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x258024: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x258028: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x258028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x25802c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x258030: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x258030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258034: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x258034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x258038: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x258038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x25803c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258040: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x258040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x258044: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x258044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258048: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x258048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x25804c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x25804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x258050: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x258050u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x258054: 0x8ed10034  lw          $s1, 0x34($s6)
    ctx->pc = 0x258054u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x258058: 0x8ed50030  lw          $s5, 0x30($s6)
    ctx->pc = 0x258058u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x25805c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x25805cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258060: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x258060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258064: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25806c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x25806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x258070: 0x8c7e0010  lw          $fp, 0x10($v1)
    ctx->pc = 0x258070u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x258074: 0x26c30060  addiu       $v1, $s6, 0x60
    ctx->pc = 0x258074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x258078: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x258078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x25807c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x25807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x258080: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x258080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258084: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x258084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x258088: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25808c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x25808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x258090: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x258090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x258094: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x258094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x258098: 0xffc30010  sd          $v1, 0x10($fp)
    ctx->pc = 0x258098u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 3));
    // 0x25809c: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x25809cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x2580a0: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x2580a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x2580a4: 0x346303fe  ori         $v1, $v1, 0x3FE
    ctx->pc = 0x2580a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1022);
    // 0x2580a8: 0xafc3001c  sw          $v1, 0x1C($fp)
    ctx->pc = 0x2580a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 3));
    // 0x2580ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2580acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2580b0: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2580b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2580b4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2580b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2580b8: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2580b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2580bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2580BCu;
    {
        const bool branch_taken_0x2580bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2580bc) {
            ctx->pc = 0x2580E4u;
            return;
        }
    }
    ctx->pc = 0x2580C4u;
    // 0x2580c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2580c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2580c8: 0xaec30060  sw          $v1, 0x60($s6)
    ctx->pc = 0x2580c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 3));
    // 0x2580cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2580ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2580d0: 0xaec30064  sw          $v1, 0x64($s6)
    ctx->pc = 0x2580d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 3));
    // 0x2580d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2580d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2580d8: 0xaec30068  sw          $v1, 0x68($s6)
    ctx->pc = 0x2580d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 3));
    // 0x2580dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2580DCu;
    {
        const bool branch_taken_0x2580dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2580dc) {
            ctx->pc = 0x258100u;
            return;
        }
    }
    ctx->pc = 0x2580E4u;
}
