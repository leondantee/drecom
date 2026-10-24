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

// Function: entry_0033ac48
// Address: 0x33ac48 - 0x33ac70
void entry_0033ac48_0x33ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ac48_0x33ac48");
#endif

    switch (ctx->pc) {
        case 0x33ac68u: goto label_33ac68;
        default: break;
    }

    ctx->pc = 0x33ac48u;

    // 0x33ac48: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33ac4c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AC4Cu;
    {
        const bool branch_taken_0x33ac4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ac4c) {
            ctx->pc = 0x33AC70u;
            return;
        }
    }
    ctx->pc = 0x33AC54u;
    // 0x33ac54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33ac58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ac5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ac60: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AC60u;
    SET_GPR_U32(ctx, 31, 0x33AC68u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AC60u, 0x33AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC68u;
label_33ac68:
    // 0x33ac68: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x33AC68u;
    {
        const bool branch_taken_0x33ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac68) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AC70u;
}
