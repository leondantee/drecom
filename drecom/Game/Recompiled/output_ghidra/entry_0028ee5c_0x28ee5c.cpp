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

// Function: entry_0028ee5c
// Address: 0x28ee5c - 0x28eed0
void entry_0028ee5c_0x28ee5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ee5c_0x28ee5c");
#endif

    switch (ctx->pc) {
        case 0x28ee74u: goto label_28ee74;
        case 0x28eec8u: goto label_28eec8;
        default: break;
    }

    ctx->pc = 0x28ee5cu;

    // 0x28ee5c: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28ee64: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x28EE64u;
    {
        const bool branch_taken_0x28ee64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee64) {
            ctx->pc = 0x28F03Cu;
            return;
        }
    }
    ctx->pc = 0x28EE6Cu;
    // 0x28ee6c: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28EE6Cu;
    SET_GPR_U32(ctx, 31, 0x28EE74u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28EE6Cu, 0x28EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE74u;
label_28ee74:
    // 0x28ee74: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x28EE74u;
    {
        const bool branch_taken_0x28ee74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee74) {
            ctx->pc = 0x28F03Cu;
            return;
        }
    }
    ctx->pc = 0x28EE7Cu;
    // 0x28ee7c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ee80: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ee84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28ee88: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28ee8c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ee8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ee90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ee90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ee94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28EE94u;
    {
        const bool branch_taken_0x28ee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee94) {
            ctx->pc = 0x28EED0u;
            return;
        }
    }
    ctx->pc = 0x28EE9Cu;
    // 0x28ee9c: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28ee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28eea0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28eea0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28eea4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eea8: 0x8c242838  lw          $a0, 0x2838($at)
    ctx->pc = 0x28eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622838u));
    // 0x28eeac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28eeacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28eeb0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x28eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28eeb4: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x28eeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28eeb8: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28eebc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x28eec0: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28EEC0u;
    SET_GPR_U32(ctx, 31, 0x28EEC8u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28EEC0u, 0x28EEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEC8u;
label_28eec8:
    // 0x28eec8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28EEC8u;
    {
        const bool branch_taken_0x28eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eec8) {
            ctx->pc = 0x28EF10u;
            return;
        }
    }
    ctx->pc = 0x28EED0u;
}
