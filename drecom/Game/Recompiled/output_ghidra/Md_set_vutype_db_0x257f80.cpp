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

// Function: Md_set_vutype_db
// Address: 0x257f80 - 0x258338
void Md_set_vutype_db_0x257f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_vutype_db_0x257f80");
#endif

    switch (ctx->pc) {
        case 0x257fd4u: goto label_257fd4;
        case 0x258120u: goto label_258120;
        case 0x258180u: goto label_258180;
        case 0x2582a0u: goto label_2582a0;
        default: break;
    }

    ctx->pc = 0x257f80u;

    // 0x257f80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x257f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x257f84: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x257f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x257f88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x257f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x257f8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x257f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x257f90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x257f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x257f94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x257f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x257f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257fa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257fac: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x257facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x257fb0: 0xa3a500c0  sb          $a1, 0xC0($sp)
    ctx->pc = 0x257fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 5));
    // 0x257fb4: 0xa3a600c8  sb          $a2, 0xC8($sp)
    ctx->pc = 0x257fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 6));
    // 0x257fb8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x257fbc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x257fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x257fc0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x257fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x257fc4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x257fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x257fc8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x257fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x257fcc: 0x8c760058  lw          $s6, 0x58($v1)
    ctx->pc = 0x257fccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x257fd0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x257fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_257fd4:
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
            goto label_2580e4;
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
            goto label_258100;
        }
    }
    ctx->pc = 0x2580E4u;
label_2580e4:
    // 0x2580e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580e8: 0xaec30060  sw          $v1, 0x60($s6)
    ctx->pc = 0x2580e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 3));
    // 0x2580ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580f0: 0xaec30064  sw          $v1, 0x64($s6)
    ctx->pc = 0x2580f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 3));
    // 0x2580f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580f8: 0xaec30068  sw          $v1, 0x68($s6)
    ctx->pc = 0x2580f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 3));
    // 0x2580fc: 0x0  nop
    ctx->pc = 0x2580fcu;
    // NOP
label_258100:
    // 0x258100: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x258100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258104: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25810c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x258110: 0x8c730024  lw          $s3, 0x24($v1)
    ctx->pc = 0x258110u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x258114: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x258114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x258118: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25811c: 0x0  nop
    ctx->pc = 0x25811cu;
    // NOP
label_258120:
    // 0x258120: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x258124: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x258124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258128: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25812c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x25812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x258130: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x258130u;
    {
        const bool branch_taken_0x258130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258130) {
            ctx->pc = 0x258158u;
            goto label_258158;
        }
    }
    ctx->pc = 0x258138u;
    // 0x258138: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x258138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x25813c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x25813cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258140: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x258144: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x258144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x258148: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x258148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25814c: 0xfea30010  sd          $v1, 0x10($s5)
    ctx->pc = 0x25814cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 3));
    // 0x258150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258150u;
    {
        const bool branch_taken_0x258150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258150) {
            ctx->pc = 0x258160u;
            goto label_258160;
        }
    }
    ctx->pc = 0x258158u;
label_258158:
    // 0x258158: 0xfea00010  sd          $zero, 0x10($s5)
    ctx->pc = 0x258158u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
    // 0x25815c: 0x0  nop
    ctx->pc = 0x25815cu;
    // NOP
label_258160:
    // 0x258160: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x258160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258164: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25816c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x258170: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258174: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x258178: 0x0  nop
    ctx->pc = 0x258178u;
    // NOP
    // 0x25817c: 0x0  nop
    ctx->pc = 0x25817cu;
    // NOP
label_258180:
    // 0x258180: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x258184: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x258184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258188: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25818c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x25818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x258190: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x258190u;
    {
        const bool branch_taken_0x258190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258190) {
            ctx->pc = 0x25824Cu;
            goto label_25824c;
        }
    }
    ctx->pc = 0x258198u;
    // 0x258198: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25819c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x25819cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2581a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2581a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2581a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2581a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2581a8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2581A8u;
    {
        const bool branch_taken_0x2581a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581a8) {
            ctx->pc = 0x2581FCu;
            goto label_2581fc;
        }
    }
    ctx->pc = 0x2581B0u;
    // 0x2581b0: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x2581b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2581b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2581b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2581b8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2581B8u;
    {
        const bool branch_taken_0x2581b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2581b8) {
            ctx->pc = 0x2581DCu;
            goto label_2581dc;
        }
    }
    ctx->pc = 0x2581C0u;
    // 0x2581c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2581c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2581c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2581c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2581c8: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2581c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2581cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2581ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2581d0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2581d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2581d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2581D4u;
    {
        const bool branch_taken_0x2581d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581d4) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x2581DCu;
label_2581dc:
    // 0x2581dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2581dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2581e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2581e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2581e4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2581e8: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x2581e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x2581ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2581ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2581f0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2581f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2581f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2581F4u;
    {
        const bool branch_taken_0x2581f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581f4) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x2581FCu;
label_2581fc:
    // 0x2581fc: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x2581fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x258200: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x258200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x258204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258208: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x258208u;
    {
        const bool branch_taken_0x258208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x258208) {
            ctx->pc = 0x25822Cu;
            goto label_25822c;
        }
    }
    ctx->pc = 0x258210u;
    // 0x258210: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x258210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x258214: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258218: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x25821c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x258220: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x258220u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x258224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x258224u;
    {
        const bool branch_taken_0x258224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258224) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x25822Cu;
label_25822c:
    // 0x25822c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x258230: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258234: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x258234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x258238: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x258238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x25823c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25823cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x258240: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x258240u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x258244: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x258244u;
    {
        const bool branch_taken_0x258244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258244) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x25824Cu;
label_25824c:
    // 0x25824c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x25824cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258250: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x258250u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x258254: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x258254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258258: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x258258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25825c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x25825cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258260: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x258260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x258264: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x258264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x258268: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x258268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x25826c: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x25826cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x258270: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x258270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x258274: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x258274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x258278: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x258278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x25827c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x25827cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x258280: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x258280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x258284: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x258284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x258288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x258288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25828c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x25828cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x258290: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x258290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x258294: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x258294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x258298: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x258298u;
    SET_GPR_U32(ctx, 31, 0x2582A0u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x258298u, 0x2582A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582A0u;
label_2582a0:
    // 0x2582a0: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2582a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2582a4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2582a8: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2582A8u;
    {
        const bool branch_taken_0x2582a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582a8) {
            ctx->pc = 0x258180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258180;
        }
    }
    ctx->pc = 0x2582B0u;
    // 0x2582b0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2582b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2582b4: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2582b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2582b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2582bc: 0x92c30001  lbu         $v1, 0x1($s6)
    ctx->pc = 0x2582bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x2582c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2582c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2582c4: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x2582c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2582c8: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2582C8u;
    {
        const bool branch_taken_0x2582c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582c8) {
            ctx->pc = 0x258120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258120;
        }
    }
    ctx->pc = 0x2582D0u;
    // 0x2582d0: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x2582d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2582d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2582dc: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x2582dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x2582e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2582e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2582e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2582e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2582e8: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x2582e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x2582ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2582ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2582f0: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x2582f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x2582f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2582f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2582f8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2582f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2582fc: 0x1460ff35  bnez        $v1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x2582FCu;
    {
        const bool branch_taken_0x2582fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582fc) {
            ctx->pc = 0x257FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257fd4;
        }
    }
    ctx->pc = 0x258304u;
    // 0x258304: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x258304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258308: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x258308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25830c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25830cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258310: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x258310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258314: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258318: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25831c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25831cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25832c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x25832cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x258330: 0x3e00008  jr          $ra
    ctx->pc = 0x258330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258338u;
}
