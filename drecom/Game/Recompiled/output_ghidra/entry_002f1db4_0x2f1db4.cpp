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

// Function: entry_002f1db4
// Address: 0x2f1db4 - 0x2f1ebc
void entry_002f1db4_0x2f1db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1db4_0x2f1db4");
#endif

    switch (ctx->pc) {
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1e90u: goto label_2f1e90;
        default: break;
    }

    ctx->pc = 0x2f1db4u;

    // 0x2f1db4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1db8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f1dbc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f1dc0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f1dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1dc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f1dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1dcc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f1dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f1dd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f1dd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f1dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f1dd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f1dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f1ddc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f1ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f1de0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f1de4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f1de4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1de8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f1de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1dec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F1DECu;
    SET_GPR_U32(ctx, 31, 0x2F1DF4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F1DECu, 0x2F1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DF4u;
label_2f1df4:
    // 0x2f1df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1df8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f1dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e08: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e18: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f1e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e24: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1e2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e34: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f1e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e40: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e4c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e58: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f1e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e64: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e70: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e7c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e84: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F1E88u;
    SET_GPR_U32(ctx, 31, 0x2F1E90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F1E88u, 0x2F1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E90u;
label_2f1e90:
    // 0x2f1e90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e94: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f1e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f1e98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e9c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ea0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1ea4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1ea8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1EA8u;
    {
        const bool branch_taken_0x2f1ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1ea8) {
            ctx->pc = 0x2F1EBCu;
            return;
        }
    }
    ctx->pc = 0x2F1EB0u;
    // 0x2f1eb0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f1eb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F1EB4u;
    {
        const bool branch_taken_0x2f1eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1eb4) {
            ctx->pc = 0x2F1ED8u;
            return;
        }
    }
    ctx->pc = 0x2F1EBCu;
}
