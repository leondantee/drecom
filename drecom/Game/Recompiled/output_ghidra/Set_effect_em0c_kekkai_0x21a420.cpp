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

// Function: Set_effect_em0c_kekkai
// Address: 0x21a420 - 0x21a5bc
void Set_effect_em0c_kekkai_0x21a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em0c_kekkai_0x21a420");
#endif

    switch (ctx->pc) {
        case 0x21a56cu: goto label_21a56c;
        case 0x21a578u: goto label_21a578;
        default: break;
    }

    ctx->pc = 0x21a420u;

    // 0x21a420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21a424: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x21a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21a428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a434: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x21a434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x21a438: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x21a438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x21a43c: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x21a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x21a440: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x21a440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x21a444: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x21a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x21a448: 0xafa90070  sw          $t1, 0x70($sp)
    ctx->pc = 0x21a448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    // 0x21a44c: 0xa3aa0078  sb          $t2, 0x78($sp)
    ctx->pc = 0x21a44cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 10));
    // 0x21a450: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21a454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A454u;
    {
        const bool branch_taken_0x21a454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a454) {
            ctx->pc = 0x21A468u;
            goto label_21a468;
        }
    }
    ctx->pc = 0x21A45Cu;
    // 0x21a45c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21a45cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a460: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A460u;
    {
        const bool branch_taken_0x21a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a460) {
            ctx->pc = 0x21A47Cu;
            goto label_21a47c;
        }
    }
    ctx->pc = 0x21A468u;
label_21a468:
    // 0x21a468: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21a46c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x21a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a470: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a474: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a478: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x21a478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a47c:
    // 0x21a47c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a480: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A480u;
    {
        const bool branch_taken_0x21a480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a480) {
            ctx->pc = 0x21A494u;
            goto label_21a494;
        }
    }
    ctx->pc = 0x21A488u;
    // 0x21a488: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21a488u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a48c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A48Cu;
    {
        const bool branch_taken_0x21a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a48c) {
            ctx->pc = 0x21A4A8u;
            goto label_21a4a8;
        }
    }
    ctx->pc = 0x21A494u;
label_21a494:
    // 0x21a494: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x21a494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21a49c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a4a0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a4a4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x21a4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a4a8:
    // 0x21a4a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x21a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21a4ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a4b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a4b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a4b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a4bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a4c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a4c4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a4c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a4cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a4d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a4d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a4d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a4dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a4e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a4e4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x21a4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21a4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21a4ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a4f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a4f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a4f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a4fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a500: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a504: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21a504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a508: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a50c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a510: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a514: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a518: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a51c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a520: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a524: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x21a524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21a528: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x21a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x21a52c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a530: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a534: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a53c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a540: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21a540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a544: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x21a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x21a548: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a54c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a550: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a55c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x21a55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21a560: 0x24041a00  addiu       $a0, $zero, 0x1A00
    ctx->pc = 0x21a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
    // 0x21a564: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x21A564u;
    SET_GPR_U32(ctx, 31, 0x21A56Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x21A564u, 0x21A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A56Cu;
label_21a56c:
    // 0x21a56c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21a56cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a570: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x21A570u;
    SET_GPR_U32(ctx, 31, 0x21A578u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x21A570u, 0x21A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A578u;
label_21a578:
    // 0x21a578: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21a578u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a57c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a580: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a584: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A5A0u;
            goto label_21a5a0;
        }
    }
    ctx->pc = 0x21A58Cu;
    // 0x21a58c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x21a590: 0x346386a0  ori         $v1, $v1, 0x86A0
    ctx->pc = 0x21a590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
    // 0x21a594: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x21a594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x21a598: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x21a598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21a59c: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x21a59cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
label_21a5a0:
    // 0x21a5a0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21a5a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a5b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21a5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A5BCu;
}
