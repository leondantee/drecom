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

// Function: entry_00268a3c
// Address: 0x268a3c - 0x268b20
void entry_00268a3c_0x268a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268a3c_0x268a3c");
#endif

    switch (ctx->pc) {
        case 0x268a64u: goto label_268a64;
        case 0x268af4u: goto label_268af4;
        default: break;
    }

    ctx->pc = 0x268a3cu;

    // 0x268a3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x268a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x268a40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268a44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268a48: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x268a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x268a4c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x268a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268a50: 0x24042109  addiu       $a0, $zero, 0x2109
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8457));
    // 0x268a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x268a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268a58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268a58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268a5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x268A5Cu;
    SET_GPR_U32(ctx, 31, 0x268A64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x268A5Cu, 0x268A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A64u;
label_268a64:
    // 0x268a64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a68: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x268a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x268a6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a74: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x268a74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a80: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x268a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a8c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x268a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a98: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x268a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268aa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268aa4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x268aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x268aa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268aac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ab0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x268ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ab4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ab8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268abc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x268abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ac0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ac4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ac8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x268ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x268acc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ad0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ad4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x268ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ad8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268adc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ae0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x268ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ae8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x268ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x268aec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x268AECu;
    SET_GPR_U32(ctx, 31, 0x268AF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x268AECu, 0x268AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AF4u;
label_268af4:
    // 0x268af4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268af8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x268af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x268afc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268b00: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x268b00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268b08: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268b0c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x268B0Cu;
    {
        const bool branch_taken_0x268b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x268b0c) {
            ctx->pc = 0x268B20u;
            return;
        }
    }
    ctx->pc = 0x268B14u;
    // 0x268b14: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x268b14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268b18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268B18u;
    {
        const bool branch_taken_0x268b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b18) {
            ctx->pc = 0x268B3Cu;
            return;
        }
    }
    ctx->pc = 0x268B20u;
}
