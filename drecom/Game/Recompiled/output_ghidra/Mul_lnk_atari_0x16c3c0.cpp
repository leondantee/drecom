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

// Function: Mul_lnk_atari
// Address: 0x16c3c0 - 0x16cc1c
void Mul_lnk_atari_0x16c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_lnk_atari_0x16c3c0");
#endif

    switch (ctx->pc) {
        case 0x16c434u: goto label_16c434;
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c608u: goto label_16c608;
        case 0x16c618u: goto label_16c618;
        case 0x16c628u: goto label_16c628;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c650u: goto label_16c650;
        case 0x16c664u: goto label_16c664;
        case 0x16c678u: goto label_16c678;
        case 0x16c788u: goto label_16c788;
        case 0x16c798u: goto label_16c798;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7b8u: goto label_16c7b8;
        case 0x16cb48u: goto label_16cb48;
        default: break;
    }

    ctx->pc = 0x16c3c0u;

    // 0x16c3c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x16c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x16c3c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x16c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x16c3c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16c3cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16c3d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16c3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16c3d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16c3d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16c3dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16c3e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16c3e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16c3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c3ec: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x16c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x16c3f0: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x16c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x16c3f4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c3f8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16c3fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C3FCu;
    {
        const bool branch_taken_0x16c3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c3fc) {
            ctx->pc = 0x16C410u;
            goto label_16c410;
        }
    }
    ctx->pc = 0x16C404u;
    // 0x16c404: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16c404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16c408: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x16C408u;
    {
        const bool branch_taken_0x16c408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c408) {
            ctx->pc = 0x16CBE8u;
            goto label_16cbe8;
        }
    }
    ctx->pc = 0x16C410u;
label_16c410:
    // 0x16c410: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c414: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x16c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16c418: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16c41c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16c420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C420u;
    {
        const bool branch_taken_0x16c420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c420) {
            ctx->pc = 0x16C440u;
            goto label_16c440;
        }
    }
    ctx->pc = 0x16C428u;
    // 0x16c428: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16c428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c42c: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x16C42Cu;
    SET_GPR_U32(ctx, 31, 0x16C434u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x16C42Cu, 0x16C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C434u;
label_16c434:
    // 0x16c434: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16c434u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16c438: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x16C438u;
    {
        const bool branch_taken_0x16c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c438) {
            ctx->pc = 0x16CBE8u;
            goto label_16cbe8;
        }
    }
    ctx->pc = 0x16C440u;
label_16c440:
    // 0x16c440: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c444: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16c448: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c44c: 0x84620024  lh          $v0, 0x24($v1)
    ctx->pc = 0x16c44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16c450: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c454: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c458: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c45c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c464: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x16c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x16c468: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c46c: 0x84620026  lh          $v0, 0x26($v1)
    ctx->pc = 0x16c46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x16c470: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c474: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c474u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c478: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c47c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c480: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c484: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x16c484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x16c488: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c48c: 0x84620028  lh          $v0, 0x28($v1)
    ctx->pc = 0x16c48cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x16c490: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c494: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c494u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c498: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c49c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c4a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c4a4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x16c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x16c4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c4ac: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x16c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x16c4b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4b4: 0x8444002a  lh          $a0, 0x2A($v0)
    ctx->pc = 0x16c4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x16c4b8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x16c4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16c4bc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x16c4bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x16c4c0: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x16c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4c4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x16c4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16c4c8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16c4cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x16c4d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4d4: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x16c4d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16c4d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c4dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c4dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c4e0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c4e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c4ec: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x16c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x16c4f0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4f4: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x16c4f8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c4fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c4fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c500: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c504: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c508: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c50c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x16c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x16c510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c514: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x16c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x16c518: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c51c: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16c520: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c524: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c524u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c528: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c530: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c534: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16c534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16c538: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c53c: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x16c540: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16c544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16c548: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c54c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c554: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x16c554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x16c558: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c55c: 0x84420034  lh          $v0, 0x34($v0)
    ctx->pc = 0x16c55cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16c560: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c564: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c568: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c56c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c574: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16c574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16c578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c57c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x16c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x16c580: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c584: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x16c584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x16c588: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c58c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c58cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c590: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c598: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c59c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16c5a0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5a4: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x16c5a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c5ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c5acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c5b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c5b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c5bc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16c5c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5c4: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x16c5c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c5cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c5ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c5d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c5d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c5dc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x16c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x16c5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5e4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x16c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x16c5e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c5ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16c5f0: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C5F0u;
    SET_GPR_U32(ctx, 31, 0x16C5F8u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C5F8u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C5F8u) { return; }
    ctx->pc = 0x16C5F8u;
label_16c5f8:
    // 0x16c5f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c5fc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c600: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C600u;
    SET_GPR_U32(ctx, 31, 0x16C608u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C608u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C608u) { return; }
    ctx->pc = 0x16C608u;
label_16c608:
    // 0x16c608: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c60c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c610: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C610u;
    SET_GPR_U32(ctx, 31, 0x16C618u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C618u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C618u) { return; }
    ctx->pc = 0x16C618u;
label_16c618:
    // 0x16c618: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c61c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c620: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C620u;
    SET_GPR_U32(ctx, 31, 0x16C628u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C628u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C628u) { return; }
    ctx->pc = 0x16C628u;
label_16c628:
    // 0x16c628: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c62c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c62cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c630: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x16c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c634: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C634u;
    SET_GPR_U32(ctx, 31, 0x16C63Cu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C634u, 0x16C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C63Cu;
label_16c63c:
    // 0x16c63c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c640: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c644: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c648: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C648u;
    SET_GPR_U32(ctx, 31, 0x16C650u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C648u, 0x16C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C650u;
label_16c650:
    // 0x16c650: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c654: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c658: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16c658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c65c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C65Cu;
    SET_GPR_U32(ctx, 31, 0x16C664u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C65Cu, 0x16C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C664u;
label_16c664:
    // 0x16c664: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c668: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c66c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c670: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C670u;
    SET_GPR_U32(ctx, 31, 0x16C678u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C670u, 0x16C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C678u;
label_16c678:
    // 0x16c678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c680: 0x0  nop
    ctx->pc = 0x16c680u;
    // NOP
    // 0x16c684: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x16c684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x16c688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c690: 0x0  nop
    ctx->pc = 0x16c690u;
    // NOP
    // 0x16c694: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16c694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x16c698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c6a0: 0x0  nop
    ctx->pc = 0x16c6a0u;
    // NOP
    // 0x16c6a4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x16c6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x16c6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c6b0: 0x0  nop
    ctx->pc = 0x16c6b0u;
    // NOP
    // 0x16c6b4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x16c6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x16c6b8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6bc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6c4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16c6c8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6cc: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x16c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6d4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x16c6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16c6d8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6dc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x16c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6e4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x16c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16c6e8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6ec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x16c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6f4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x16c6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16c6f8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6fc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x16c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c704: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x16c708: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c70c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c714: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16c718: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c71c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x16c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c724: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x16c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x16c728: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c72c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x16c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c734: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x16c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x16c738: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c73c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x16c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c744: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x16c744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x16c748: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c74c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x16c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c754: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x16c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x16c758: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c75c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x16c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c764: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x16c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x16c768: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c76c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x16c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c774: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x16c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x16c778: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16c77c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c780: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C780u;
    SET_GPR_U32(ctx, 31, 0x16C788u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C788u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C788u) { return; }
    ctx->pc = 0x16C788u;
label_16c788:
    // 0x16c788: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16c788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c78c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c790: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C790u;
    SET_GPR_U32(ctx, 31, 0x16C798u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C798u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C798u) { return; }
    ctx->pc = 0x16C798u;
label_16c798:
    // 0x16c798: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c79c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c7a0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C7A0u;
    SET_GPR_U32(ctx, 31, 0x16C7A8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C7A8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C7A8u) { return; }
    ctx->pc = 0x16C7A8u;
label_16c7a8:
    // 0x16c7a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c7ac: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c7b0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C7B0u;
    SET_GPR_U32(ctx, 31, 0x16C7B8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C7B8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C7B8u) { return; }
    ctx->pc = 0x16C7B8u;
label_16c7b8:
    // 0x16c7b8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7c0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c7c4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C7C4u;
    {
        const bool branch_taken_0x16c7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7c4) {
            ctx->pc = 0x16C7DCu;
            goto label_16c7dc;
        }
    }
    ctx->pc = 0x16C7CCu;
    // 0x16c7cc: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7d0: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x16c7d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C7D4u;
    {
        const bool branch_taken_0x16c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7d4) {
            ctx->pc = 0x16C7E8u;
            goto label_16c7e8;
        }
    }
    ctx->pc = 0x16C7DCu;
label_16c7dc:
    // 0x16c7dc: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7e0: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x16c7e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7e4: 0x0  nop
    ctx->pc = 0x16c7e4u;
    // NOP
label_16c7e8:
    // 0x16c7e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c7ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c7f0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c7f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c7f4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C7F4u;
    {
        const bool branch_taken_0x16c7f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7f4) {
            ctx->pc = 0x16C80Cu;
            goto label_16c80c;
        }
    }
    ctx->pc = 0x16C7FCu;
    // 0x16c7fc: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c800: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C804u;
    {
        const bool branch_taken_0x16c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c804) {
            ctx->pc = 0x16C818u;
            goto label_16c818;
        }
    }
    ctx->pc = 0x16C80Cu;
label_16c80c:
    // 0x16c80c: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c810: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c814: 0x0  nop
    ctx->pc = 0x16c814u;
    // NOP
label_16c818:
    // 0x16c818: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x16c818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c81c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C81Cu;
    {
        const bool branch_taken_0x16c81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c81c) {
            ctx->pc = 0x16C828u;
            goto label_16c828;
        }
    }
    ctx->pc = 0x16C824u;
    // 0x16c824: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x16c824u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16c828:
    // 0x16c828: 0x256082a  slt         $at, $s2, $s6
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16c82c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C82Cu;
    {
        const bool branch_taken_0x16c82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c82c) {
            ctx->pc = 0x16C838u;
            goto label_16c838;
        }
    }
    ctx->pc = 0x16C834u;
    // 0x16c834: 0x7240b628  paddub      $s6, $s2, $zero
    ctx->pc = 0x16c834u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16c838:
    // 0x16c838: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16c83c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c83cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c840: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c844: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16c844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16c848: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c84c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c850: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16c854: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c858: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c85c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c860: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c864: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c868: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c86c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C86Cu;
    {
        const bool branch_taken_0x16c86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c86c) {
            ctx->pc = 0x16C884u;
            goto label_16c884;
        }
    }
    ctx->pc = 0x16C874u;
    // 0x16c874: 0x8fb400a4  lw          $s4, 0xA4($sp)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c878: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c87c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C87Cu;
    {
        const bool branch_taken_0x16c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c87c) {
            ctx->pc = 0x16C890u;
            goto label_16c890;
        }
    }
    ctx->pc = 0x16C884u;
label_16c884:
    // 0x16c884: 0x8fb400b4  lw          $s4, 0xB4($sp)
    ctx->pc = 0x16c884u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c888: 0x8fb700a4  lw          $s7, 0xA4($sp)
    ctx->pc = 0x16c888u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c88c: 0x0  nop
    ctx->pc = 0x16c88cu;
    // NOP
label_16c890:
    // 0x16c890: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x16c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c894: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c898: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c89c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C89Cu;
    {
        const bool branch_taken_0x16c89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c89c) {
            ctx->pc = 0x16C8B4u;
            goto label_16c8b4;
        }
    }
    ctx->pc = 0x16C8A4u;
    // 0x16c8a4: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c8a8: 0x8fb200d4  lw          $s2, 0xD4($sp)
    ctx->pc = 0x16c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C8ACu;
    {
        const bool branch_taken_0x16c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8ac) {
            ctx->pc = 0x16C8C0u;
            goto label_16c8c0;
        }
    }
    ctx->pc = 0x16C8B4u;
label_16c8b4:
    // 0x16c8b4: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c8b8: 0x8fb200c4  lw          $s2, 0xC4($sp)
    ctx->pc = 0x16c8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c8bc: 0x0  nop
    ctx->pc = 0x16c8bcu;
    // NOP
label_16c8c0:
    // 0x16c8c0: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x16c8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c8c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C8C4u;
    {
        const bool branch_taken_0x16c8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8c4) {
            ctx->pc = 0x16C8D0u;
            goto label_16c8d0;
        }
    }
    ctx->pc = 0x16C8CCu;
    // 0x16c8cc: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x16c8ccu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16c8d0:
    // 0x16c8d0: 0x257082a  slt         $at, $s2, $s7
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16c8d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C8E0u;
            goto label_16c8e0;
        }
    }
    ctx->pc = 0x16C8DCu;
    // 0x16c8dc: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x16c8dcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16c8e0:
    // 0x16c8e0: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16c8e4: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c8e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c8e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c8ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16c8f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c8f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c8f8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16c8fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c900: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c904: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16c904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c908: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c90c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c910: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c914: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C914u;
    {
        const bool branch_taken_0x16c914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c914) {
            ctx->pc = 0x16C92Cu;
            goto label_16c92c;
        }
    }
    ctx->pc = 0x16C91Cu;
    // 0x16c91c: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c920: 0x8fbe00b8  lw          $fp, 0xB8($sp)
    ctx->pc = 0x16c920u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C924u;
    {
        const bool branch_taken_0x16c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c924) {
            ctx->pc = 0x16C938u;
            goto label_16c938;
        }
    }
    ctx->pc = 0x16C92Cu;
label_16c92c:
    // 0x16c92c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x16c92cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c930: 0x8fbe00a8  lw          $fp, 0xA8($sp)
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c934: 0x0  nop
    ctx->pc = 0x16c934u;
    // NOP
label_16c938:
    // 0x16c938: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c93c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c940: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c944: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C944u;
    {
        const bool branch_taken_0x16c944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c944) {
            ctx->pc = 0x16C95Cu;
            goto label_16c95c;
        }
    }
    ctx->pc = 0x16C94Cu;
    // 0x16c94c: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c950: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x16c950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C954u;
    {
        const bool branch_taken_0x16c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c954) {
            ctx->pc = 0x16C968u;
            goto label_16c968;
        }
    }
    ctx->pc = 0x16C95Cu;
label_16c95c:
    // 0x16c95c: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x16c95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16c960: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x16c960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16c964: 0x0  nop
    ctx->pc = 0x16c964u;
    // NOP
label_16c968:
    // 0x16c968: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x16c968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c96c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C96Cu;
    {
        const bool branch_taken_0x16c96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c96c) {
            ctx->pc = 0x16C978u;
            goto label_16c978;
        }
    }
    ctx->pc = 0x16C974u;
    // 0x16c974: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16c974u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16c978:
    // 0x16c978: 0x25e082a  slt         $at, $s2, $fp
    ctx->pc = 0x16c978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x16c97c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C97Cu;
    {
        const bool branch_taken_0x16c97c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c97c) {
            ctx->pc = 0x16C988u;
            goto label_16c988;
        }
    }
    ctx->pc = 0x16C984u;
    // 0x16c984: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x16c984u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_16c988:
    // 0x16c988: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x16c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x16c98c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c98cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c990: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c994: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16c994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16c998: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c99c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c9a0: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x16c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16c9a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c9a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9ac: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16c9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9b0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c9b4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c9bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c9c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c9c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c9c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c9c8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9cc: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16c9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c9d8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c9dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c9e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c9e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c9e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c9e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9ec: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c9f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c9fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca08: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca0c: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16ca0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca10: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ca14: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ca1c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca2c: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16ca2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ca38: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ca3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca40: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca48: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca4c: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca50: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ca58: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16ca5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca60: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca68: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca6c: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16ca6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ca74: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ca7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca80: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca8c: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ca98: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ca9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16caa0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16caa4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16caa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16caa8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caac: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16caacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cab0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cab4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16cab8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16cabc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cac0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x16cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16cac4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cac8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cacc: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16caccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cad0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16cad4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cae0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cae8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caec: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16caecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16caf0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16caf8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16cafc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16cb00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cb04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cb04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cb08: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb0c: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16cb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cb10: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16cb18: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16cb1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16cb20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cb24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cb24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cb28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb2c: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16cb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cb30: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16cb34: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16cb38: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16cb3c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16cb40: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16CB40u;
    SET_GPR_U32(ctx, 31, 0x16CB48u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16CB40u, 0x16CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB48u;
label_16cb48:
    // 0x16cb48: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb4c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb50: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16cb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16cb54: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb58: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb5c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16cb60: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb68: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16cb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16cb6c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb70: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16cb78: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb7c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb80: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16cb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16cb84: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb88: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb8c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x16cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x16cb90: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb94: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16cb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16cb98: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb9c: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x16cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x16cba0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cba4: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x16cba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16cba8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbac: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x16cbacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cbb0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbb4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x16cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16cbb8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbbc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x16cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x16cbc0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbc4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x16cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x16cbc8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbcc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16cbd0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbd4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x16cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16cbd8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbdc: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16cbe0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbe4: 0x0  nop
    ctx->pc = 0x16cbe4u;
    // NOP
label_16cbe8:
    // 0x16cbe8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16cbe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16cbec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16cbecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16cbf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16cbf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16cbf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16cbf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16cbf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16cbf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cbfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16cbfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cc00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16cc00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cc04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16cc04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16cc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16cc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc10: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x16cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x16cc14: 0x3e00008  jr          $ra
    ctx->pc = 0x16CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC1Cu;
}
