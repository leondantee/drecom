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

// Function: Md_parts_lnk_mir_db
// Address: 0x257540 - 0x2577b8
void Md_parts_lnk_mir_db_0x257540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_lnk_mir_db_0x257540");
#endif

    switch (ctx->pc) {
        case 0x2575b8u: goto label_2575b8;
        case 0x257654u: goto label_257654;
        case 0x2576f4u: goto label_2576f4;
        default: break;
    }

    ctx->pc = 0x257540u;

    // 0x257540: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x257540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x257544: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x257544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x257548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x257548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25754c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x257550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x257550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25755c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257560: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x257560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x257564: 0xa7a50078  sh          $a1, 0x78($sp)
    ctx->pc = 0x257564u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 5));
    // 0x257568: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x257568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25756c: 0x8c74000c  lw          $s4, 0xC($v1)
    ctx->pc = 0x25756cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x257570: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x257574: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257574u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257578: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x257578u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25757c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x25757cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x257580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257584: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x257584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x257588: 0x263a821  addu        $s5, $s3, $v1
    ctx->pc = 0x257588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25758c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257590: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x257590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257594: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257594u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257598: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25759c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25759cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2575a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2575a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2575a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2575a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2575a8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2575a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2575ac: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2575acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2575b0: 0x3913c  dsll32      $s2, $v1, 4
    ctx->pc = 0x2575b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2575b4: 0x12913e  dsrl32      $s2, $s2, 4
    ctx->pc = 0x2575b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 4));
label_2575b8:
    // 0x2575b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2575b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2575bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2575bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2575c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2575c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2575c4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2575C4u;
    {
        const bool branch_taken_0x2575c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575c4) {
            ctx->pc = 0x257620u;
            goto label_257620;
        }
    }
    ctx->pc = 0x2575CCu;
    // 0x2575cc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2575ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2575d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2575d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2575d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2575d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2575d8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2575D8u;
    {
        const bool branch_taken_0x2575d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2575d8) {
            ctx->pc = 0x257620u;
            goto label_257620;
        }
    }
    ctx->pc = 0x2575E0u;
    // 0x2575e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2575e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2575e4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2575e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2575e8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2575E8u;
    {
        const bool branch_taken_0x2575e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2575e8) {
            ctx->pc = 0x257620u;
            goto label_257620;
        }
    }
    ctx->pc = 0x2575F0u;
    // 0x2575f0: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x2575f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2575f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2575f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2575f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2575fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2575fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257600: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x257600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x257604: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257608: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25760c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257614: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257618: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x257618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25761c: 0x0  nop
    ctx->pc = 0x25761cu;
    // NOP
label_257620:
    // 0x257620: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257624: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25762c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257630: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257634: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257638: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25763c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x25763Cu;
    {
        const bool branch_taken_0x25763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25763c) {
            ctx->pc = 0x2575B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2575b8;
        }
    }
    ctx->pc = 0x257644u;
    // 0x257644: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257644u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257648: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x257648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25764c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x25764cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x257650: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_257654:
    // 0x257654: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257658: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25765c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257660: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x257660u;
    {
        const bool branch_taken_0x257660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257660) {
            ctx->pc = 0x2576C0u;
            goto label_2576c0;
        }
    }
    ctx->pc = 0x257668u;
    // 0x257668: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25766c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25766cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257674: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x257674u;
    {
        const bool branch_taken_0x257674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257674) {
            ctx->pc = 0x2576C0u;
            goto label_2576c0;
        }
    }
    ctx->pc = 0x25767Cu;
    // 0x25767c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x25767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x257680: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x257684: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257684u;
    {
        const bool branch_taken_0x257684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257684) {
            ctx->pc = 0x2576C0u;
            goto label_2576c0;
        }
    }
    ctx->pc = 0x25768Cu;
    // 0x25768c: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x25768cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257690: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257698: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25769c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x25769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2576a0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2576a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2576a4: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x2576a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2576a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2576a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2576ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2576b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2576b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2576b4: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2576b8: 0x0  nop
    ctx->pc = 0x2576b8u;
    // NOP
    // 0x2576bc: 0x0  nop
    ctx->pc = 0x2576bcu;
    // NOP
label_2576c0:
    // 0x2576c0: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2576c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2576c4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2576c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2576c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2576c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2576cc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2576ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2576d0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x2576d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2576d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2576d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2576d8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2576d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2576dc: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2576DCu;
    {
        const bool branch_taken_0x2576dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2576dc) {
            ctx->pc = 0x257654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257654;
        }
    }
    ctx->pc = 0x2576E4u;
    // 0x2576e4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2576e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2576e8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2576e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2576ec: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x2576ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2576f0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x2576f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2576f4:
    // 0x2576f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2576f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2576f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2576f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2576fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2576fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257700: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257700u;
    {
        const bool branch_taken_0x257700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257700) {
            ctx->pc = 0x257750u;
            goto label_257750;
        }
    }
    ctx->pc = 0x257708u;
    // 0x257708: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25770c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257710: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257714: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257714u;
    {
        const bool branch_taken_0x257714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257714) {
            ctx->pc = 0x257750u;
            goto label_257750;
        }
    }
    ctx->pc = 0x25771Cu;
    // 0x25771c: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x25771cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257720: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257728: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25772c: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x25772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x257730: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257734: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257738: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25773c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257740: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257744: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x257744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x257748: 0x0  nop
    ctx->pc = 0x257748u;
    // NOP
    // 0x25774c: 0x0  nop
    ctx->pc = 0x25774cu;
    // NOP
label_257750:
    // 0x257750: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257754: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25775c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257760: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x257760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x257764: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257768: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x257768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25776c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25776Cu;
    {
        const bool branch_taken_0x25776c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25776c) {
            ctx->pc = 0x2576F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2576f4;
        }
    }
    ctx->pc = 0x257774u;
    // 0x257774: 0x97a30078  lhu         $v1, 0x78($sp)
    ctx->pc = 0x257774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x257778: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25777c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257780: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257788: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25778c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x25778cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257790: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x257790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257794: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x257794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25779c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25779cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2577a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2577a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2577a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2577a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2577a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2577a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2577ac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2577acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2577b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2577B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577B8u;
}
