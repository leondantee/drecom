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

// Function: makebuff_tq
// Address: 0x33a450 - 0x33a608
void makebuff_tq_0x33a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebuff_tq_0x33a450");
#endif

    ctx->pc = 0x33a450u;

    // 0x33a450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a460: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x33a460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x33a464: 0xa3a50038  sb          $a1, 0x38($sp)
    ctx->pc = 0x33a464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 5));
    // 0x33a468: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x33a468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x33a46c: 0xa7a70048  sh          $a3, 0x48($sp)
    ctx->pc = 0x33a46cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 7));
    // 0x33a470: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a474: 0x29602  srl         $s2, $v0, 24
    ctx->pc = 0x33a474u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x33a478: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33a478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a47c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x33a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x33a480: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A480u;
    {
        const bool branch_taken_0x33a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a480) {
            ctx->pc = 0x33A48Cu;
            goto label_33a48c;
        }
    }
    ctx->pc = 0x33A488u;
    // 0x33a488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33a488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33a48c:
    // 0x33a48c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x33a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x33a490: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A490u;
    {
        const bool branch_taken_0x33a490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a490) {
            ctx->pc = 0x33A49Cu;
            goto label_33a49c;
        }
    }
    ctx->pc = 0x33A498u;
    // 0x33a498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33a498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33a49c:
    // 0x33a49c: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x33a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x33a4a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A4A0u;
    {
        const bool branch_taken_0x33a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a4a0) {
            ctx->pc = 0x33A4ACu;
            goto label_33a4ac;
        }
    }
    ctx->pc = 0x33A4A8u;
    // 0x33a4a8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_33a4ac:
    // 0x33a4ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a4b0: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a4b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33a4b8: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A4BCu;
    {
        const bool branch_taken_0x33a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a4bc) {
            ctx->pc = 0x33A4D0u;
            goto label_33a4d0;
        }
    }
    ctx->pc = 0x33A4C4u;
    // 0x33a4c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a4c8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x33A4C8u;
    {
        const bool branch_taken_0x33a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a4c8) {
            ctx->pc = 0x33A5F0u;
            goto label_33a5f0;
        }
    }
    ctx->pc = 0x33A4D0u;
label_33a4d0:
    // 0x33a4d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a4d4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a4d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a4dc: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a4e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33a4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a4e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a4e8: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x33a4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a4f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a4f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a4f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a4f8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a4fc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a500: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a504: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x33a504u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x33a508: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a50c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a510: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a510u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a514: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a518: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a51c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a520: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33a520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33a524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a52c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a52cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a530: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a534: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a538: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a53c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a544: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a544u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a548: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a54c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a550: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x33a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x33a554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A554u;
    {
        const bool branch_taken_0x33a554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a554) {
            ctx->pc = 0x33A56Cu;
            goto label_33a56c;
        }
    }
    ctx->pc = 0x33A55Cu;
    // 0x33a55c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x33a55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33a560: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a560u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a564: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a568: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_33a56c:
    // 0x33a56c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x33a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x33a570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A570u;
    {
        const bool branch_taken_0x33a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a570) {
            ctx->pc = 0x33A588u;
            goto label_33a588;
        }
    }
    ctx->pc = 0x33A578u;
    // 0x33a578: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x33a578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a57c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a57cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a580: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a584: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_33a588:
    // 0x33a588: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x33a588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x33a58c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33A58Cu;
    {
        const bool branch_taken_0x33a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a58c) {
            ctx->pc = 0x33A5D0u;
            goto label_33a5d0;
        }
    }
    ctx->pc = 0x33A594u;
    // 0x33a594: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x33a594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a598: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33a59c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x33a59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33a5a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5a8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a5a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a5ac: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a5b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a5b4: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x33a5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a5b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33a5bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5c4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a5c4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a5c8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a5cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_33a5d0:
    // 0x33a5d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a5d4: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a5d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33a5dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a5e0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a5e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a5e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a5e8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x33a5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a5ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a5ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a5f0:
    // 0x33a5f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a5fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33a5fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33a600: 0x3e00008  jr          $ra
    ctx->pc = 0x33A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A608u;
}
