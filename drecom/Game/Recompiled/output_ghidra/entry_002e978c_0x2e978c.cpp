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

// Function: entry_002e978c
// Address: 0x2e978c - 0x2e9894
void entry_002e978c_0x2e978c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e978c_0x2e978c");
#endif

    switch (ctx->pc) {
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e9868u: goto label_2e9868;
        default: break;
    }

    ctx->pc = 0x2e978cu;

    // 0x2e978c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e9790: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e9794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9798: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e979c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e97a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e97a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e97a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e97a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e97ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e97acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e97b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e97b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e97b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e97b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e97b8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e97bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e97bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e97c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e97c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e97c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E97C4u;
    SET_GPR_U32(ctx, 31, 0x2E97CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E97C4u, 0x2E97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97CCu;
label_2e97cc:
    // 0x2e97cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97d0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e97d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e97d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97e0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e97e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e97e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e97e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97f0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e97f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e97f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e97f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e97fc: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e97fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9804: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9808: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e980c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e980cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9810: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9814: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9818: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e981c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9820: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9824: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9828: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e982c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e982cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9830: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9834: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9838: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e983c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e983cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9844: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9848: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e984c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9850: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9854: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e9854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e985c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e985cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9860: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9860u;
    SET_GPR_U32(ctx, 31, 0x2E9868u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9860u, 0x2E9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9868u;
label_2e9868:
    // 0x2e9868: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e986c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e986cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9870: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9874: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e9874u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9878: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e987c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9880: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9894u;
            return;
        }
    }
    ctx->pc = 0x2E9888u;
    // 0x2e9888: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e9888u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e988c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E988Cu;
    {
        const bool branch_taken_0x2e988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e988c) {
            ctx->pc = 0x2E98B8u;
            return;
        }
    }
    ctx->pc = 0x2E9894u;
}
