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

// Function: entry_0033faa0
// Address: 0x33faa0 - 0x33fba0
void entry_0033faa0_0x33faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033faa0_0x33faa0");
#endif

    switch (ctx->pc) {
        case 0x33fae4u: goto label_33fae4;
        case 0x33fb74u: goto label_33fb74;
        default: break;
    }

    ctx->pc = 0x33faa0u;

    // 0x33faa0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x33faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33faa4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x33faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33faa8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33faac: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33fab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fab4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fab8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33fabc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33fabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33fac0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33fac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fac8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33fac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33facc: 0x34048100  ori         $a0, $zero, 0x8100
    ctx->pc = 0x33faccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x33fad0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33fad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fad4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33fad8: 0x24462960  addiu       $a2, $v0, 0x2960
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x33fadc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33FADCu;
    SET_GPR_U32(ctx, 31, 0x33FAE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33FADCu, 0x33FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAE4u;
label_33fae4:
    // 0x33fae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fae8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x33fae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x33faec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33faf0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33faf4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x33faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x33faf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fafc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb00: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x33fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb0c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x33fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb18: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x33fb18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb24: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x33fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb30: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x33fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb3c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x33fb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb44: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb48: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x33fb48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb50: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb54: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x33fb54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb60: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x33fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb68: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x33fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33FB6Cu;
    SET_GPR_U32(ctx, 31, 0x33FB74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33FB6Cu, 0x33FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB74u;
label_33fb74:
    // 0x33fb74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb78: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x33fb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x33fb7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb80: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x33fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fb84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33fb88: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33fb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33fb8c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FB8Cu;
    {
        const bool branch_taken_0x33fb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fb8c) {
            ctx->pc = 0x33FBA0u;
            return;
        }
    }
    ctx->pc = 0x33FB94u;
    // 0x33fb94: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33fb94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fb98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FB98u;
    {
        const bool branch_taken_0x33fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb98) {
            ctx->pc = 0x33FBBCu;
            return;
        }
    }
    ctx->pc = 0x33FBA0u;
}
