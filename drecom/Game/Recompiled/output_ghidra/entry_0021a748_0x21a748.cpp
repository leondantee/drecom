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

// Function: entry_0021a748
// Address: 0x21a748 - 0x21a824
void entry_0021a748_0x21a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a748_0x21a748");
#endif

    switch (ctx->pc) {
        case 0x21a760u: goto label_21a760;
        case 0x21a7f8u: goto label_21a7f8;
        default: break;
    }

    ctx->pc = 0x21a748u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x21A824u;
}
