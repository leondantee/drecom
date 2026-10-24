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

// Function: entry_00313824
// Address: 0x313824 - 0x313928
void entry_00313824_0x313824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313824_0x313824");
#endif

    switch (ctx->pc) {
        case 0x313864u: goto label_313864;
        case 0x3138fcu: goto label_3138fc;
        default: break;
    }

    ctx->pc = 0x313824u;

    // 0x313824: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x313824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313828: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x313828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31382c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31382cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x313830: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x313830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x313834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31383c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x313840: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x313840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x313844: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x313848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31384c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31384cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x313850: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x313850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x313854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x313854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313858: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x313858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31385c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31385Cu;
    SET_GPR_U32(ctx, 31, 0x313864u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31385Cu, 0x313864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313864u;
label_313864:
    // 0x313864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313868: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x313868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x31386c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x313870: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x313870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31387c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x31387cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x313880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313888: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x313888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x31388c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x313890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x313894: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x313894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x313898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31389c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31389cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138a0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x3138a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138ac: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3138acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138b8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3138b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138c4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3138c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138d0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3138d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138dc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3138dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3138e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138e8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3138e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3138ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3138f0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3138f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3138F4u;
    SET_GPR_U32(ctx, 31, 0x3138FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3138F4u, 0x3138FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138FCu;
label_3138fc:
    // 0x3138fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313900: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x313900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x313904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x313904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313908: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x313908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x31390c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313910: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x313914: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313914u;
    {
        const bool branch_taken_0x313914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x313914) {
            ctx->pc = 0x313928u;
            return;
        }
    }
    ctx->pc = 0x31391Cu;
    // 0x31391c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x31391cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313920: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x313920u;
    {
        const bool branch_taken_0x313920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313920) {
            ctx->pc = 0x313944u;
            return;
        }
    }
    ctx->pc = 0x313928u;
}
