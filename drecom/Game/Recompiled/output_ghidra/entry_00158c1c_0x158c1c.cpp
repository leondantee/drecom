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

// Function: entry_00158c1c
// Address: 0x158c1c - 0x158c88
void entry_00158c1c_0x158c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c1c_0x158c1c");
#endif

    switch (ctx->pc) {
        case 0x158c4cu: goto label_158c4c;
        default: break;
    }

    ctx->pc = 0x158c1cu;

    // 0x158c1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c20: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158c24: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x158c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158c28: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x158c2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x158c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158c30: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x158c34: 0x3442020c  ori         $v0, $v0, 0x20C
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)524);
    // 0x158c38: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x158c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x158c3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x158c40: 0x2445e9d0  addiu       $a1, $v0, -0x1630
    ctx->pc = 0x158c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961616));
    // 0x158c44: 0xc059b14  jal         func_166C50
    ctx->pc = 0x158C44u;
    SET_GPR_U32(ctx, 31, 0x158C4Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x158C44u, 0x158C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C4Cu;
label_158c4c:
    // 0x158c4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c50: 0x8c24f840  lw          $a0, -0x7C0($at)
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EF840u));
    // 0x158c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158c58: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x158C58u;
    {
        const bool branch_taken_0x158c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c58) {
            ctx->pc = 0x158CC4u;
            return;
        }
    }
    ctx->pc = 0x158C60u;
    // 0x158c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158c64: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c64) {
            ctx->pc = 0x158CB0u;
            return;
        }
    }
    ctx->pc = 0x158C6Cu;
    // 0x158c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158c70: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158C70u;
    {
        const bool branch_taken_0x158c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158c70) {
            ctx->pc = 0x158C88u;
            return;
        }
    }
    ctx->pc = 0x158C78u;
    // 0x158c78: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158C78u;
    {
        const bool branch_taken_0x158c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c78) {
            ctx->pc = 0x158CF0u;
            return;
        }
    }
    ctx->pc = 0x158C80u;
    // 0x158c80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x158C80u;
    {
        const bool branch_taken_0x158c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c80) {
            ctx->pc = 0x158CF0u;
            return;
        }
    }
    ctx->pc = 0x158C88u;
}
