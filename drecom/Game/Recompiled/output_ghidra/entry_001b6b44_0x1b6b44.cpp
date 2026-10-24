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

// Function: entry_001b6b44
// Address: 0x1b6b44 - 0x1b6b94
void entry_001b6b44_0x1b6b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b44_0x1b6b44");
#endif

    switch (ctx->pc) {
        case 0x1b6b54u: goto label_1b6b54;
        case 0x1b6b7cu: goto label_1b6b7c;
        default: break;
    }

    ctx->pc = 0x1b6b44u;

    // 0x1b6b44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b48: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1b6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1b6b4c: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1B6B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B54u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B6B4Cu, 0x1B6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B54u;
label_1b6b54:
    // 0x1b6b54: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1B6B54u;
    {
        const bool branch_taken_0x1b6b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b54) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6B5Cu;
    // 0x1b6b5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b60: 0x90a309db  lbu         $v1, 0x9DB($a1)
    ctx->pc = 0x1b6b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x1b6b64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b6b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b6b68: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x1b6b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1b6b6c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6B6Cu;
    {
        const bool branch_taken_0x1b6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b6c) {
            ctx->pc = 0x1B6B94u;
            return;
        }
    }
    ctx->pc = 0x1B6B74u;
    // 0x1b6b74: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1B6B74u;
    SET_GPR_U32(ctx, 31, 0x1B6B7Cu);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B6B74u, 0x1B6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6B7Cu;
    {
        const bool branch_taken_0x1b6b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b7c) {
            ctx->pc = 0x1B6B94u;
            return;
        }
    }
    ctx->pc = 0x1B6B84u;
    // 0x1b6b84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6b88: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1b6b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6b8c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1B6B8Cu;
    {
        const bool branch_taken_0x1b6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b8c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6B94u;
}
