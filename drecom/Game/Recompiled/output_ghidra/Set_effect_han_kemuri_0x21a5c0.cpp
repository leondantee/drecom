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

// Function: Set_effect_han_kemuri
// Address: 0x21a5c0 - 0x21a8dc
void Set_effect_han_kemuri_0x21a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_han_kemuri_0x21a5c0");
#endif

    switch (ctx->pc) {
        case 0x21a654u: goto label_21a654;
        case 0x21a6ecu: goto label_21a6ec;
        case 0x21a760u: goto label_21a760;
        case 0x21a7f8u: goto label_21a7f8;
        default: break;
    }

    ctx->pc = 0x21a5c0u;

    // 0x21a5c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21a5c4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x21a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x21a5c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21a5cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21a5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21a5d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21a5d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21a5d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a5e4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x21a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x21a5e8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x21a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x21a5ec: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x21a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x21a5f0: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x21a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x21a5f4: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x21a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x21a5f8: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x21a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
    // 0x21a5fc: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x21a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
    // 0x21a600: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x21a600u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x21a604: 0xe7ad00c8  swc1        $f13, 0xC8($sp)
    ctx->pc = 0x21a604u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x21a608: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21a60c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x21A60Cu;
    {
        const bool branch_taken_0x21a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a60c) {
            ctx->pc = 0x21A748u;
            goto label_21a748;
        }
    }
    ctx->pc = 0x21A614u;
    // 0x21a614: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x21a614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21a618: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21a61c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a620: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a628: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a62c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a630: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a634: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a63c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a63cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a640: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21a644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a648: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x21a648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21a64c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A64Cu;
    SET_GPR_U32(ctx, 31, 0x21A654u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A64Cu, 0x21A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A654u;
label_21a654:
    // 0x21a654: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a658: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a65c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a660: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a664: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a66c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a670: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a674: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a678: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a67c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a680: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a688: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a68c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a690: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x21a690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a694: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a698: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a69c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a69cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6a8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6b4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6c0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6cc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6d8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a6dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6e0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a6e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A6E4u;
    SET_GPR_U32(ctx, 31, 0x21A6ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A6E4u, 0x21A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A6ECu;
label_21a6ec:
    // 0x21a6ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6f0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a6f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a6f8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a6fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a700: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a704: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A704u;
    {
        const bool branch_taken_0x21a704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a704) {
            ctx->pc = 0x21A718u;
            goto label_21a718;
        }
    }
    ctx->pc = 0x21A70Cu;
    // 0x21a70c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21a70cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A710u;
    {
        const bool branch_taken_0x21a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a710) {
            ctx->pc = 0x21A734u;
            goto label_21a734;
        }
    }
    ctx->pc = 0x21A718u;
label_21a718:
    // 0x21a718: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a71c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a720: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a724: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a728: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x21a728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21a72c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x21a72cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a730: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21a730u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21a734:
    // 0x21a734: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a738: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x21a738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a73c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21a73cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a740: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21A740u;
    {
        const bool branch_taken_0x21a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a740) {
            ctx->pc = 0x21A850u;
            goto label_21a850;
        }
    }
    ctx->pc = 0x21A748u;
label_21a748:
    // 0x21a748: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21a74c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a750: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x21a750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21a754: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21a754u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a758: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A758u;
    SET_GPR_U32(ctx, 31, 0x21A760u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A758u, 0x21A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A760u;
label_21a760:
    // 0x21a760: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a764: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a768: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a76c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a770: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a774: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a778: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a77c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a780: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a784: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a788: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a788u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a78c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a794: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a798: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a79c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x21a79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a7a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7a8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7b4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7c0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7cc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7d8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7e4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a7e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7ec: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a7f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A7F0u;
    SET_GPR_U32(ctx, 31, 0x21A7F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A7F0u, 0x21A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A7F8u;
label_21a7f8:
    // 0x21a7f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a7fc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a7fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a804: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a804u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a808: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a80c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a810: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A810u;
    {
        const bool branch_taken_0x21a810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a810) {
            ctx->pc = 0x21A824u;
            goto label_21a824;
        }
    }
    ctx->pc = 0x21A818u;
    // 0x21a818: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21a818u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a81c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A81Cu;
    {
        const bool branch_taken_0x21a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a81c) {
            ctx->pc = 0x21A840u;
            goto label_21a840;
        }
    }
    ctx->pc = 0x21A824u;
label_21a824:
    // 0x21a824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a828: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a82c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a830: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a834: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21a838: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x21a838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21a83c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21a83cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21a840:
    // 0x21a840: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a844: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x21a844u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a848: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21a848u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a84c: 0x0  nop
    ctx->pc = 0x21a84cu;
    // NOP
label_21a850:
    // 0x21a850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a858: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21A858u;
    {
        const bool branch_taken_0x21a858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a858) {
            ctx->pc = 0x21A8B0u;
            goto label_21a8b0;
        }
    }
    ctx->pc = 0x21A860u;
    // 0x21a860: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a864: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a864u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a868: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x21a86c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a870: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a874: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a874u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a878: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x21a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x21a87c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a880: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x21a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21a884: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a884u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a888: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x21a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x21a88c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a890: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21a894: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a894u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a898: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x21a89c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a8a0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a8a4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21a8a8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x21a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a8ac: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21a8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_21a8b0:
    // 0x21a8b0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x21a8b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a8b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21a8b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a8b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21a8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a8bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21a8bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a8c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21a8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a8c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a8d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A8DCu;
}
