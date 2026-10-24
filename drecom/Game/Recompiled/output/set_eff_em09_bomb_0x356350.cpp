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

// Function: set_eff_em09_bomb
// Address: 0x356350 - 0x356ff8
void set_eff_em09_bomb_0x356350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em09_bomb_0x356350");
#endif

    switch (ctx->pc) {
        case 0x3563acu: goto label_3563ac;
        case 0x3563b8u: goto label_3563b8;
        case 0x356404u: goto label_356404;
        case 0x356410u: goto label_356410;
        case 0x35643cu: goto label_35643c;
        case 0x356448u: goto label_356448;
        case 0x356494u: goto label_356494;
        case 0x3564a0u: goto label_3564a0;
        case 0x3564c8u: goto label_3564c8;
        case 0x3564d4u: goto label_3564d4;
        case 0x356520u: goto label_356520;
        case 0x35652cu: goto label_35652c;
        case 0x356554u: goto label_356554;
        case 0x356560u: goto label_356560;
        case 0x3565b0u: goto label_3565b0;
        case 0x3565bcu: goto label_3565bc;
        case 0x3565d8u: goto label_3565d8;
        case 0x356624u: goto label_356624;
        case 0x3566c0u: goto label_3566c0;
        case 0x356734u: goto label_356734;
        case 0x3567ccu: goto label_3567cc;
        case 0x35687cu: goto label_35687c;
        case 0x3568a0u: goto label_3568a0;
        case 0x3568c4u: goto label_3568c4;
        case 0x3568e8u: goto label_3568e8;
        case 0x356924u: goto label_356924;
        case 0x356954u: goto label_356954;
        case 0x3569d8u: goto label_3569d8;
        case 0x356a54u: goto label_356a54;
        case 0x356aa0u: goto label_356aa0;
        case 0x356b38u: goto label_356b38;
        case 0x356bbcu: goto label_356bbc;
        case 0x356c58u: goto label_356c58;
        case 0x356d10u: goto label_356d10;
        case 0x356d34u: goto label_356d34;
        case 0x356d58u: goto label_356d58;
        case 0x356d7cu: goto label_356d7c;
        case 0x356df4u: goto label_356df4;
        case 0x356e24u: goto label_356e24;
        case 0x356f64u: goto label_356f64;
        default: break;
    }

    ctx->pc = 0x356350u;

    // 0x356350: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x356350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x356354: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x356354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x356358: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x356358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x35635c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x356360: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x356360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x356364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x356364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x356368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x356368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35636c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x356370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x356374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x356378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x356378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35637c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x35637cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x356380: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x356380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x356384: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x356384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x356388: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x356388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x35638c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35638Cu;
    {
        const bool branch_taken_0x35638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35638c) {
            ctx->pc = 0x3563C4u;
            goto label_3563c4;
        }
    }
    ctx->pc = 0x356394u;
    // 0x356394: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x356394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356398: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35639c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x35639cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3563a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3563a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3563a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3563A4u;
    SET_GPR_U32(ctx, 31, 0x3563ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3563A4u, 0x3563ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563ACu;
label_3563ac:
    // 0x3563ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3563acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3563b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3563B0u;
    SET_GPR_U32(ctx, 31, 0x3563B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3563B0u, 0x3563B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563B8u;
label_3563b8:
    // 0x3563b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3563b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3563bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3563BCu;
    {
        const bool branch_taken_0x3563bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563bc) {
            ctx->pc = 0x356418u;
            goto label_356418;
        }
    }
    ctx->pc = 0x3563C4u;
label_3563c4:
    // 0x3563c4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3563c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3563c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3563c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3563cc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3563d0: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x3563d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3563d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3563d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3563d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3563dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3563dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3563e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3563e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3563e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3563e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3563e8: 0x3475ffff  ori         $s5, $v1, 0xFFFF
    ctx->pc = 0x3563e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3563ec: 0x953824  and         $a3, $a0, $s5
    ctx->pc = 0x3563ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x3563f0: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x3563f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x3563f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3563f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3563f8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3563f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3563fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3563FCu;
    SET_GPR_U32(ctx, 31, 0x356404u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3563FCu, 0x356404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356404u;
label_356404:
    // 0x356404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356408: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356408u;
    SET_GPR_U32(ctx, 31, 0x356410u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356408u, 0x356410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356410u;
label_356410:
    // 0x356410: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356410u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356414: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x356414u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_356418:
    // 0x356418: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x356418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x35641c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35641Cu;
    {
        const bool branch_taken_0x35641c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35641c) {
            ctx->pc = 0x356454u;
            goto label_356454;
        }
    }
    ctx->pc = 0x356424u;
    // 0x356424: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x356424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35642c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x35642cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356430: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356430u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356434: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356434u;
    SET_GPR_U32(ctx, 31, 0x35643Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356434u, 0x35643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35643Cu;
label_35643c:
    // 0x35643c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35643cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356440: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356440u;
    SET_GPR_U32(ctx, 31, 0x356448u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356440u, 0x356448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356448u;
label_356448:
    // 0x356448: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x356448u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35644c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35644Cu;
    {
        const bool branch_taken_0x35644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35644c) {
            ctx->pc = 0x3564A4u;
            goto label_3564a4;
        }
    }
    ctx->pc = 0x356454u;
label_356454:
    // 0x356454: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356458: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35645c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35645cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356460: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356468: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x356468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35646c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x356470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x356470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356474: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x356474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x356478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35647c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35647cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356480: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x356480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356488: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x35648c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35648Cu;
    SET_GPR_U32(ctx, 31, 0x356494u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35648Cu, 0x356494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356494u;
label_356494:
    // 0x356494: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356498: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356498u;
    SET_GPR_U32(ctx, 31, 0x3564A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356498u, 0x3564A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564A0u;
label_3564a0:
    // 0x3564a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3564a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3564a4:
    // 0x3564a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3564a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3564A8u;
    {
        const bool branch_taken_0x3564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3564a8) {
            ctx->pc = 0x3564E0u;
            goto label_3564e0;
        }
    }
    ctx->pc = 0x3564B0u;
    // 0x3564b0: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x3564b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x3564b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3564b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3564b8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3564b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3564bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3564bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3564c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3564C0u;
    SET_GPR_U32(ctx, 31, 0x3564C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3564C0u, 0x3564C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564C8u;
label_3564c8:
    // 0x3564c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3564c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3564cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3564CCu;
    SET_GPR_U32(ctx, 31, 0x3564D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3564CCu, 0x3564D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564D4u;
label_3564d4:
    // 0x3564d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3564d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3564d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3564D8u;
    {
        const bool branch_taken_0x3564d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3564d8) {
            ctx->pc = 0x356530u;
            goto label_356530;
        }
    }
    ctx->pc = 0x3564E0u;
label_3564e0:
    // 0x3564e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3564e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3564e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3564e8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3564e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3564ec: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3564ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3564f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3564f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3564f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3564f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3564f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3564fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3564fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356500: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x356500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x356504: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x356504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x356508: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x356508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35650c: 0x34048300  ori         $a0, $zero, 0x8300
    ctx->pc = 0x35650cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x356510: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356514: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356518: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356518u;
    SET_GPR_U32(ctx, 31, 0x356520u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356518u, 0x356520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356524: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356524u;
    SET_GPR_U32(ctx, 31, 0x35652Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356524u, 0x35652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35652Cu;
label_35652c:
    // 0x35652c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35652cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_356530:
    // 0x356530: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x356530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356534: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x356534u;
    {
        const bool branch_taken_0x356534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356534) {
            ctx->pc = 0x356570u;
            goto label_356570;
        }
    }
    ctx->pc = 0x35653Cu;
    // 0x35653c: 0x24041722  addiu       $a0, $zero, 0x1722
    ctx->pc = 0x35653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5922));
    // 0x356540: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356544: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356548: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356548u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35654c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35654Cu;
    SET_GPR_U32(ctx, 31, 0x356554u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35654Cu, 0x356554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356554u;
label_356554:
    // 0x356554: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356558: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356558u;
    SET_GPR_U32(ctx, 31, 0x356560u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356558u, 0x356560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356560u;
label_356560:
    // 0x356560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356564: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x356564u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x356568: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x356568u;
    {
        const bool branch_taken_0x356568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356568) {
            ctx->pc = 0x3565C0u;
            goto label_3565c0;
        }
    }
    ctx->pc = 0x356570u;
label_356570:
    // 0x356570: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356574: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x356578: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35657c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x35657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356584: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x356584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356588: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x356588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x35658c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35658cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356590: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x356590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x356594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356598: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x356598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35659c: 0x24041722  addiu       $a0, $zero, 0x1722
    ctx->pc = 0x35659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5922));
    // 0x3565a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3565a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3565a4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3565a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3565a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3565A8u;
    SET_GPR_U32(ctx, 31, 0x3565B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3565A8u, 0x3565B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565B0u;
label_3565b0:
    // 0x3565b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3565b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3565b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3565B4u;
    SET_GPR_U32(ctx, 31, 0x3565BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3565B4u, 0x3565BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565BCu;
label_3565bc:
    // 0x3565bc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3565bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3565c0:
    // 0x3565c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3565c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3565c4: 0x0  nop
    ctx->pc = 0x3565c4u;
    // NOP
    // 0x3565c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3565c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3565cc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3565ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3565d0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3565D0u;
    {
        const bool branch_taken_0x3565d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565d0) {
            ctx->pc = 0x356A30u;
            goto label_356a30;
        }
    }
    ctx->pc = 0x3565D8u;
label_3565d8:
    // 0x3565d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3565dc: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3565DCu;
    {
        const bool branch_taken_0x3565dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565dc) {
            ctx->pc = 0x35671Cu;
            goto label_35671c;
        }
    }
    ctx->pc = 0x3565E4u;
    // 0x3565e4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x3565e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3565e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3565ec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3565ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3565f0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3565f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3565f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3565f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3565fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3565fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x356600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x356600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35660c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x35660cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x356610: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356618: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x35661c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35661Cu;
    SET_GPR_U32(ctx, 31, 0x356624u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35661Cu, 0x356624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356624u;
label_356624:
    // 0x356624: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356624u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356628: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35662c: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x35662cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356630: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356634: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356638: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x356638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x35663c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x356640: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356644: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356648: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x356648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x35664c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356650: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356654: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35665c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356660: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356664: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356668: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35666c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356670: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356674: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356678: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x35667c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x35667cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356680: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356684: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356688: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x35668c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356690: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356694: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356698: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35669c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566a0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3566a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3566a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566ac: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3566acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3566b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566b4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3566b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3566B8u;
    SET_GPR_U32(ctx, 31, 0x3566C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3566B8u, 0x3566C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566C0u;
label_3566c0:
    // 0x3566c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566c4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3566c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3566c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566cc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3566ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3566d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3566d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3566d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3566d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3566d8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3566D8u;
    {
        const bool branch_taken_0x3566d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3566d8) {
            ctx->pc = 0x3566ECu;
            goto label_3566ec;
        }
    }
    ctx->pc = 0x3566E0u;
    // 0x3566e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3566e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3566e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3566E4u;
    {
        const bool branch_taken_0x3566e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566e4) {
            ctx->pc = 0x356708u;
            goto label_356708;
        }
    }
    ctx->pc = 0x3566ECu;
label_3566ec:
    // 0x3566ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566f0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3566f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3566f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566f8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3566f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3566fc: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x3566fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x356700: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x356700u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x356704: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x356704u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_356708:
    // 0x356708: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x356708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x35670c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x35670cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x356710: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x356710u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x356714: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x356714u;
    {
        const bool branch_taken_0x356714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356714) {
            ctx->pc = 0x356830u;
            goto label_356830;
        }
    }
    ctx->pc = 0x35671Cu;
label_35671c:
    // 0x35671c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x35671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356720: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356720u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356724: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356728: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356728u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35672c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35672Cu;
    SET_GPR_U32(ctx, 31, 0x356734u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35672Cu, 0x356734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356734u;
label_356734:
    // 0x356734: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356738: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x35673c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356740: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356744: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x356744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x356748: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x356748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35674c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356750: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356754: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x356754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x356758: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35675c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35675cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356760: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356768: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35676c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35676cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356770: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356774: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356778: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x35677c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x35677cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356780: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356784: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356788: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356788u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x35678c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35678cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356790: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356794: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356798: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35679c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35679cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567a0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3567a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567ac: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3567acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3567b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567b8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3567b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567c0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3567c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3567C4u;
    SET_GPR_U32(ctx, 31, 0x3567CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3567C4u, 0x3567CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567CCu;
label_3567cc:
    // 0x3567cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567d0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3567d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3567d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567d8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3567d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3567dc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3567dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3567e0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3567e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3567e4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3567E4u;
    {
        const bool branch_taken_0x3567e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3567e4) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x3567ECu;
    // 0x3567ec: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3567ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3567f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3567F0u;
    {
        const bool branch_taken_0x3567f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567f0) {
            ctx->pc = 0x356818u;
            goto label_356818;
        }
    }
    ctx->pc = 0x3567F8u;
label_3567f8:
    // 0x3567f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567fc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3567fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356804: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356808: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x356808u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x35680c: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x35680cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356810: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x356810u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x356814: 0x0  nop
    ctx->pc = 0x356814u;
    // NOP
label_356818:
    // 0x356818: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x356818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x35681c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x35681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x356820: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x356820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x356824: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x356824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x356828: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x356828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35682c: 0x0  nop
    ctx->pc = 0x35682cu;
    // NOP
label_356830:
    // 0x356830: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356834: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356838: 0x12030073  beq         $s0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x356838u;
    {
        const bool branch_taken_0x356838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x356838) {
            ctx->pc = 0x356A08u;
            goto label_356a08;
        }
    }
    ctx->pc = 0x356840u;
    // 0x356840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356844: 0x0  nop
    ctx->pc = 0x356844u;
    // NOP
    // 0x356848: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x35684c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35684cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356850: 0x0  nop
    ctx->pc = 0x356850u;
    // NOP
    // 0x356854: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35685c: 0x0  nop
    ctx->pc = 0x35685cu;
    // NOP
    // 0x356860: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356864: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x356868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35686c: 0x0  nop
    ctx->pc = 0x35686cu;
    // NOP
    // 0x356870: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356874: 0xc067654  jal         func_19D950
    ctx->pc = 0x356874u;
    SET_GPR_U32(ctx, 31, 0x35687Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356874u, 0x35687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35687Cu;
label_35687c:
    // 0x35687c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356884: 0x0  nop
    ctx->pc = 0x356884u;
    // NOP
    // 0x356888: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35688c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x35688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356894: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356898: 0xc067654  jal         func_19D950
    ctx->pc = 0x356898u;
    SET_GPR_U32(ctx, 31, 0x3568A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356898u, 0x3568A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568A0u;
label_3568a0:
    // 0x3568a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3568a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568a8: 0x0  nop
    ctx->pc = 0x3568a8u;
    // NOP
    // 0x3568ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568b0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3568b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3568b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3568bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x3568BCu;
    SET_GPR_U32(ctx, 31, 0x3568C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3568BCu, 0x3568C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568C4u;
label_3568c4:
    // 0x3568c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3568c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568cc: 0x0  nop
    ctx->pc = 0x3568ccu;
    // NOP
    // 0x3568d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568d4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3568d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3568dc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3568dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3568e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x3568E0u;
    SET_GPR_U32(ctx, 31, 0x3568E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3568E0u, 0x3568E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568E8u;
label_3568e8:
    // 0x3568e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x3568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x3568ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3568ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3568f0: 0x0  nop
    ctx->pc = 0x3568f0u;
    // NOP
    // 0x3568f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3568f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3568f8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x3568f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3568fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3568fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356900: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356904: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x356908: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x356908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x35690c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35690cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356910: 0x0  nop
    ctx->pc = 0x356910u;
    // NOP
    // 0x356914: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x356914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x356918: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35691c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x35691Cu;
    SET_GPR_U32(ctx, 31, 0x356924u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x35691Cu, 0x356924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356924u;
label_356924:
    // 0x356924: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x356928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35692c: 0x0  nop
    ctx->pc = 0x35692cu;
    // NOP
    // 0x356930: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356934: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x356934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x356938: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x35693c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35693cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356940: 0x0  nop
    ctx->pc = 0x356940u;
    // NOP
    // 0x356944: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x356944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x356948: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35694c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x35694Cu;
    SET_GPR_U32(ctx, 31, 0x356954u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x35694Cu, 0x356954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356954u;
label_356954:
    // 0x356954: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x356954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x356958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35695c: 0x0  nop
    ctx->pc = 0x35695cu;
    // NOP
    // 0x356960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356964: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x356964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x356968: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x35696c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356970: 0x0  nop
    ctx->pc = 0x356970u;
    // NOP
    // 0x356974: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x356974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x356978: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x356978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x35697c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35697cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356980: 0x0  nop
    ctx->pc = 0x356980u;
    // NOP
    // 0x356984: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x356984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x356988: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x35698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356990: 0x0  nop
    ctx->pc = 0x356990u;
    // NOP
    // 0x356994: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x356994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x356998: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x356998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x35699c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x35699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3569a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569a4: 0x0  nop
    ctx->pc = 0x3569a4u;
    // NOP
    // 0x3569a8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x3569a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x3569ac: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x3569acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x3569b0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3569b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3569b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569b8: 0x0  nop
    ctx->pc = 0x3569b8u;
    // NOP
    // 0x3569bc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x3569bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x3569c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3569c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3569c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569c8: 0x0  nop
    ctx->pc = 0x3569c8u;
    // NOP
    // 0x3569cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3569ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3569d0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3569D0u;
    SET_GPR_U32(ctx, 31, 0x3569D8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3569D0u, 0x3569D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569D8u;
label_3569d8:
    // 0x3569d8: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x3569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x3569dc: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x3569dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x3569e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3569e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3569e4: 0x0  nop
    ctx->pc = 0x3569e4u;
    // NOP
    // 0x3569e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3569e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3569ec: 0x3c033c4c  lui         $v1, 0x3C4C
    ctx->pc = 0x3569ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15436 << 16));
    // 0x3569f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3569f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3569f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3569f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3569f8: 0x0  nop
    ctx->pc = 0x3569f8u;
    // NOP
    // 0x3569fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3569fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356a00: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x356a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x356a04: 0x0  nop
    ctx->pc = 0x356a04u;
    // NOP
label_356a08:
    // 0x356a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x356a0c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x356a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356a10: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x356a14: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x356a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x356a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356a1c: 0x0  nop
    ctx->pc = 0x356a1cu;
    // NOP
    // 0x356a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x356a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x356a24: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356a28: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x356a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x356a2c: 0x0  nop
    ctx->pc = 0x356a2cu;
    // NOP
label_356a30:
    // 0x356a30: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x356a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x356a34: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x356A34u;
    {
        const bool branch_taken_0x356a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a34) {
            ctx->pc = 0x3565D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3565d8;
        }
    }
    ctx->pc = 0x356A3Cu;
    // 0x356a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356a40: 0x0  nop
    ctx->pc = 0x356a40u;
    // NOP
    // 0x356a44: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356a48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x356a48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356a4c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x356A4Cu;
    {
        const bool branch_taken_0x356a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a4c) {
            ctx->pc = 0x356FB8u;
            goto label_356fb8;
        }
    }
    ctx->pc = 0x356A54u;
label_356a54:
    // 0x356a54: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356a58: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x356A58u;
    {
        const bool branch_taken_0x356a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a58) {
            ctx->pc = 0x356BA4u;
            goto label_356ba4;
        }
    }
    ctx->pc = 0x356A60u;
    // 0x356a60: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356a64: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x356a68: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x356a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356a6c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356a70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356a74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x356a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356a78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x356a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x356a7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x356a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356a80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x356a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x356a84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356a88: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x356a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x356a8c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356a90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356a90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356a94: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356a98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356A98u;
    SET_GPR_U32(ctx, 31, 0x356AA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356A98u, 0x356AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AA0u;
label_356aa0:
    // 0x356aa0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356aa4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356aac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ab0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ab4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x356ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ab8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356abc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ac0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x356ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ac4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ac8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356acc: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ad4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ad8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356adc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ae0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356ae4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356ae8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356af0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356af0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356af4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356af4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356af8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356afc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b00: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b0c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b18: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x356b18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b24: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x356b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b2c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x356b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x356b30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356B30u;
    SET_GPR_U32(ctx, 31, 0x356B38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356B30u, 0x356B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B38u;
label_356b38:
    // 0x356b38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b3c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x356b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x356b40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b44: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356b50: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356B50u;
    {
        const bool branch_taken_0x356b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x356b50) {
            ctx->pc = 0x356B64u;
            goto label_356b64;
        }
    }
    ctx->pc = 0x356B58u;
    // 0x356b58: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x356b58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356b5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356B5Cu;
    {
        const bool branch_taken_0x356b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b5c) {
            ctx->pc = 0x356B88u;
            goto label_356b88;
        }
    }
    ctx->pc = 0x356B64u;
label_356b64:
    // 0x356b64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b68: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356b70: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356b74: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x356b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x356b78: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x356b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x356b7c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x356b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x356b80: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x356b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356b84: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x356b84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_356b88:
    // 0x356b88: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x356b8c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x356b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x356b90: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x356b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x356b94: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x356b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x356b98: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x356b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356b9c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x356B9Cu;
    {
        const bool branch_taken_0x356b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356b9c) {
            ctx->pc = 0x356CC0u;
            goto label_356cc0;
        }
    }
    ctx->pc = 0x356BA4u;
label_356ba4:
    // 0x356ba4: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356ba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356bac: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356bb0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356bb0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356bb4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x356BB4u;
    SET_GPR_U32(ctx, 31, 0x356BBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x356BB4u, 0x356BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356BBCu;
label_356bbc:
    // 0x356bbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bc0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356bc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bcc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bd0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x356bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x356bd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bdc: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x356bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x356be0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356be4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356be4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356be8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356bf0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356bf4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356bf8: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356bfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c00: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c04: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c10: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c1c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c28: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c30: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x356c30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c34: 0xa080013e  sb          $zero, 0x13E($a0)
    ctx->pc = 0x356c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c3c: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x356c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c40: 0xa0c0013f  sb          $zero, 0x13F($a2)
    ctx->pc = 0x356c40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x356c44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356c48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356c4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x356c4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356c50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x356C50u;
    SET_GPR_U32(ctx, 31, 0x356C58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x356C50u, 0x356C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C58u;
label_356c58:
    // 0x356c58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c5c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x356c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x356c60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c64: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x356c64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c68: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x356c6c: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x356c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x356c70: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356C70u;
    {
        const bool branch_taken_0x356c70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x356c70) {
            ctx->pc = 0x356C84u;
            goto label_356c84;
        }
    }
    ctx->pc = 0x356C78u;
    // 0x356c78: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x356c78u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356c7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356C7Cu;
    {
        const bool branch_taken_0x356c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356c7c) {
            ctx->pc = 0x356CA8u;
            goto label_356ca8;
        }
    }
    ctx->pc = 0x356C84u;
label_356c84:
    // 0x356c84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c88: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356c90: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x356c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x356c94: 0x24640118  addiu       $a0, $v1, 0x118
    ctx->pc = 0x356c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x356c98: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x356c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x356c9c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x356c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x356ca0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x356ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356ca4: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x356ca4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_356ca8:
    // 0x356ca8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x356ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x356cac: 0x24e4a610  addiu       $a0, $a3, -0x59F0
    ctx->pc = 0x356cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944272));
    // 0x356cb0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x356cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x356cb4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x356cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x356cb8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x356cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x356cbc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x356cbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_356cc0:
    // 0x356cc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356cc4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356cc8: 0x120300b1  beq         $s0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x356CC8u;
    {
        const bool branch_taken_0x356cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x356cc8) {
            ctx->pc = 0x356F90u;
            goto label_356f90;
        }
    }
    ctx->pc = 0x356CD0u;
    // 0x356cd0: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x356cd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356cd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356cd8: 0x0  nop
    ctx->pc = 0x356cd8u;
    // NOP
    // 0x356cdc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356ce4: 0x0  nop
    ctx->pc = 0x356ce4u;
    // NOP
    // 0x356ce8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356cec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356cf0: 0x0  nop
    ctx->pc = 0x356cf0u;
    // NOP
    // 0x356cf4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356cf8: 0x3c06425c  lui         $a2, 0x425C
    ctx->pc = 0x356cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16988 << 16));
    // 0x356cfc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356cfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356d00: 0x0  nop
    ctx->pc = 0x356d00u;
    // NOP
    // 0x356d04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356d08: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D08u;
    SET_GPR_U32(ctx, 31, 0x356D10u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D08u, 0x356D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D10u;
label_356d10:
    // 0x356d10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x356d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d18: 0x0  nop
    ctx->pc = 0x356d18u;
    // NOP
    // 0x356d1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d20: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x356d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d28: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356d2c: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D2Cu;
    SET_GPR_U32(ctx, 31, 0x356D34u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D2Cu, 0x356D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D34u;
label_356d34:
    // 0x356d34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d3c: 0x0  nop
    ctx->pc = 0x356d3cu;
    // NOP
    // 0x356d40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d44: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x356d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d4c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356d50: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D50u;
    SET_GPR_U32(ctx, 31, 0x356D58u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D50u, 0x356D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D58u;
label_356d58:
    // 0x356d58: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x356d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x356d5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d60: 0x0  nop
    ctx->pc = 0x356d60u;
    // NOP
    // 0x356d64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d68: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x356d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d70: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356d74: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D74u;
    SET_GPR_U32(ctx, 31, 0x356D7Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D74u, 0x356D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D7Cu;
label_356d7c:
    // 0x356d7c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x356d80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d84: 0x0  nop
    ctx->pc = 0x356d84u;
    // NOP
    // 0x356d88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d8c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356d98: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x356d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x356d9c: 0x344370a4  ori         $v1, $v0, 0x70A4
    ctx->pc = 0x356d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x356da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356da4: 0x0  nop
    ctx->pc = 0x356da4u;
    // NOP
    // 0x356da8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x356da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x356dac: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x356db0: 0x346270a4  ori         $v0, $v1, 0x70A4
    ctx->pc = 0x356db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x356db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356db8: 0x0  nop
    ctx->pc = 0x356db8u;
    // NOP
    // 0x356dbc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x356dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x356dc0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x356dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x356dc4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x356dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x356dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356dcc: 0x0  nop
    ctx->pc = 0x356dccu;
    // NOP
    // 0x356dd0: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x356dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x356dd4: 0x3c073f73  lui         $a3, 0x3F73
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16243 << 16));
    // 0x356dd8: 0x34e23333  ori         $v0, $a3, 0x3333
    ctx->pc = 0x356dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13107);
    // 0x356ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356de0: 0x0  nop
    ctx->pc = 0x356de0u;
    // NOP
    // 0x356de4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x356de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x356de8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356dec: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x356DECu;
    SET_GPR_U32(ctx, 31, 0x356DF4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x356DECu, 0x356DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DF4u;
label_356df4:
    // 0x356df4: 0x3c044218  lui         $a0, 0x4218
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16920 << 16));
    // 0x356df8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356dfc: 0x0  nop
    ctx->pc = 0x356dfcu;
    // NOP
    // 0x356e00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356e04: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x356e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x356e08: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x356e0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356e0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e10: 0x0  nop
    ctx->pc = 0x356e10u;
    // NOP
    // 0x356e14: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x356e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x356e18: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356e1c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x356E1Cu;
    SET_GPR_U32(ctx, 31, 0x356E24u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x356E1Cu, 0x356E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E24u;
label_356e24:
    // 0x356e24: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x356e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x356e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356e2c: 0x0  nop
    ctx->pc = 0x356e2cu;
    // NOP
    // 0x356e30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356e34: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x356e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x356e38: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x356e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e40: 0x0  nop
    ctx->pc = 0x356e40u;
    // NOP
    // 0x356e44: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x356e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x356e48: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x356e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e50: 0x0  nop
    ctx->pc = 0x356e50u;
    // NOP
    // 0x356e54: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x356e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x356e58: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x356e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x356e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e60: 0x0  nop
    ctx->pc = 0x356e60u;
    // NOP
    // 0x356e64: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x356e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x356e68: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x356e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x356e6c: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x356e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x356e70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356e70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e74: 0x0  nop
    ctx->pc = 0x356e74u;
    // NOP
    // 0x356e78: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x356e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x356e7c: 0x3c033f75  lui         $v1, 0x3F75
    ctx->pc = 0x356e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16245 << 16));
    // 0x356e80: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x356e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x356e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e88: 0x0  nop
    ctx->pc = 0x356e88u;
    // NOP
    // 0x356e8c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x356e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x356e90: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x356e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x356e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e98: 0x0  nop
    ctx->pc = 0x356e98u;
    // NOP
    // 0x356e9c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x356e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x356ea0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ea4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356ea8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x356ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356eac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x356eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x356eb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x356eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356eb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x356eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x356eb8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x356eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x356ebc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ec0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356ec4: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x356ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356ec8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x356ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x356ecc: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x356eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x356ed0: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x356ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x356ed4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x356ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x356ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356edc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ee0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x356ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x356ee4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x356ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356ee8: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x356ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x356eec: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x356eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x356ef0: 0x9203011a  lbu         $v1, 0x11A($s0)
    ctx->pc = 0x356ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x356ef4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x356ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x356ef8: 0xa204011a  sb          $a0, 0x11A($s0)
    ctx->pc = 0x356ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x356efc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356f04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x356f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356f08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x356f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x356f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356f10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x356f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f14: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x356f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x356f18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356f20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x356f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356f24: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x356f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356f28: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x356f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x356f2c: 0x3086ff00  andi        $a2, $a0, 0xFF00
    ctx->pc = 0x356f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x356f30: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x356f34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356f38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x356f3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x356f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f44: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x356f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x356f48: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x356f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x356f4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x356f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f50: 0x9202011a  lbu         $v0, 0x11A($s0)
    ctx->pc = 0x356f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x356f54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x356f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x356f58: 0xa202011a  sb          $v0, 0x11A($s0)
    ctx->pc = 0x356f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x356f5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x356F5Cu;
    SET_GPR_U32(ctx, 31, 0x356F64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x356F5Cu, 0x356F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F64u;
label_356f64:
    // 0x356f64: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x356f68: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x356f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x356f6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356f70: 0x0  nop
    ctx->pc = 0x356f70u;
    // NOP
    // 0x356f74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356f78: 0x3c033c7d  lui         $v1, 0x3C7D
    ctx->pc = 0x356f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15485 << 16));
    // 0x356f7c: 0x3463f3b6  ori         $v1, $v1, 0xF3B6
    ctx->pc = 0x356f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62390);
    // 0x356f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356f84: 0x0  nop
    ctx->pc = 0x356f84u;
    // NOP
    // 0x356f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356f8c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x356f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_356f90:
    // 0x356f90: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x356f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x356f94: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x356f94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x356f98: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x356f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356f9c: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x356f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
    // 0x356fa0: 0x34c40e56  ori         $a0, $a2, 0xE56
    ctx->pc = 0x356fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3670);
    // 0x356fa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356fa8: 0x0  nop
    ctx->pc = 0x356fa8u;
    // NOP
    // 0x356fac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x356facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x356fb0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356fb4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x356fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_356fb8:
    // 0x356fb8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x356fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x356fbc: 0x1460fea5  bnez        $v1, . + 4 + (-0x15B << 2)
    ctx->pc = 0x356FBCu;
    {
        const bool branch_taken_0x356fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356fbc) {
            ctx->pc = 0x356A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356a54;
        }
    }
    ctx->pc = 0x356FC4u;
    // 0x356fc4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x356fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x356fc8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x356fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x356fcc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x356fccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x356fd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x356fd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x356fd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x356fd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x356fd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356fec: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x356fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x356ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x356FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356FF8u;
}
