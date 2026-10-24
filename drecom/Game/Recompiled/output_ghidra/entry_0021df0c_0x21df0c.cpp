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

// Function: entry_0021df0c
// Address: 0x21df0c - 0x21e014
void entry_0021df0c_0x21df0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021df0c_0x21df0c");
#endif

    switch (ctx->pc) {
        case 0x21df3cu: goto label_21df3c;
        case 0x21df58u: goto label_21df58;
        case 0x21dfe8u: goto label_21dfe8;
        default: break;
    }

    ctx->pc = 0x21df0cu;

    // 0x21df0c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df10: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21df14: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21df18: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x21df18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x21df1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df28: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x21df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x21df2c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x21df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21df30: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x21df30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21df34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x21DF34u;
    SET_GPR_U32(ctx, 31, 0x21DF3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x21DF34u, 0x21DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF3Cu;
label_21df3c:
    // 0x21df3c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21df40: 0x24040309  addiu       $a0, $zero, 0x309
    ctx->pc = 0x21df40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x21df44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21df44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21df48: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21df4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21df4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21df50: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21DF50u;
    SET_GPR_U32(ctx, 31, 0x21DF58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21DF50u, 0x21DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF58u;
label_21df58:
    // 0x21df58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df5c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21df5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21df60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df68: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21df68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df74: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21df74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df80: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21df80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df8c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21df94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21df98: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21df98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21df9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfa4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfb0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21dfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfbc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfc8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21dfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfd0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfd4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21dfd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfdc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21dfe0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21DFE0u;
    SET_GPR_U32(ctx, 31, 0x21DFE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21DFE0u, 0x21DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFE8u;
label_21dfe8:
    // 0x21dfe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dfec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21dfecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21dff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21dff4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21dff8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21dffc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21dffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21e000: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E000u;
    {
        const bool branch_taken_0x21e000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e000) {
            ctx->pc = 0x21E014u;
            return;
        }
    }
    ctx->pc = 0x21E008u;
    // 0x21e008: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21e008u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e00c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E00Cu;
    {
        const bool branch_taken_0x21e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e00c) {
            ctx->pc = 0x21E030u;
            return;
        }
    }
    ctx->pc = 0x21E014u;
}
