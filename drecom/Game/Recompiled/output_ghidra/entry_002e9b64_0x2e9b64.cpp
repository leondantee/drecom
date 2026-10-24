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

// Function: entry_002e9b64
// Address: 0x2e9b64 - 0x2e9c6c
void entry_002e9b64_0x2e9b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9b64_0x2e9b64");
#endif

    switch (ctx->pc) {
        case 0x2e9ba4u: goto label_2e9ba4;
        case 0x2e9c40u: goto label_2e9c40;
        default: break;
    }

    ctx->pc = 0x2e9b64u;

    // 0x2e9b64: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2e9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e9b68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2e9b6c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9b70: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e9b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9b78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e9b7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e9b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e9b80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9b84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9b88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9b8c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e9b8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9b90: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9b94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9b94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9b98: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e9b9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E9B9Cu;
    SET_GPR_U32(ctx, 31, 0x2E9BA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E9B9Cu, 0x2E9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9BA4u;
label_2e9ba4:
    // 0x2e9ba4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9ba8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e9bac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bb8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9bbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9bc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bc4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bc8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2e9bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9bcc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bd0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bd4: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2e9bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9bdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9be0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9be4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2e9be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e9be8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bec: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bf0: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x2e9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9bf4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9bf8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9bfc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c04: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c08: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x2e9c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c10: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c14: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c20: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c28: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c2c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9c30: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c34: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9c38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9C38u;
    SET_GPR_U32(ctx, 31, 0x2E9C40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9C38u, 0x2E9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C40u;
label_2e9c40:
    // 0x2e9c40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c44: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e9c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9c48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c4c: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x2e9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9c50: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9c54: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9c58: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9C58u;
    {
        const bool branch_taken_0x2e9c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9c58) {
            ctx->pc = 0x2E9C6Cu;
            return;
        }
    }
    ctx->pc = 0x2E9C60u;
    // 0x2e9c60: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e9c60u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9C64u;
    {
        const bool branch_taken_0x2e9c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9c64) {
            ctx->pc = 0x2E9C88u;
            return;
        }
    }
    ctx->pc = 0x2E9C6Cu;
}
