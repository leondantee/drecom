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

// Function: entry_0033af40
// Address: 0x33af40 - 0x33af68
void entry_0033af40_0x33af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033af40_0x33af40");
#endif

    switch (ctx->pc) {
        case 0x33af60u: goto label_33af60;
        default: break;
    }

    ctx->pc = 0x33af40u;

    // 0x33af40: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x33af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x33af44: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF44u;
    {
        const bool branch_taken_0x33af44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af44) {
            ctx->pc = 0x33AF68u;
            return;
        }
    }
    ctx->pc = 0x33AF4Cu;
    // 0x33af4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33af58: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF58u;
    SET_GPR_U32(ctx, 31, 0x33AF60u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF58u, 0x33AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF60u;
label_33af60:
    // 0x33af60: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x33AF60u;
    {
        const bool branch_taken_0x33af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af60) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AF68u;
}
