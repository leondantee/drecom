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

// Function: entry_0033af80
// Address: 0x33af80 - 0x33af9c
void entry_0033af80_0x33af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033af80_0x33af80");
#endif

    switch (ctx->pc) {
        case 0x33af94u: goto label_33af94;
        default: break;
    }

    ctx->pc = 0x33af80u;

    // 0x33af80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33af8c: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF8Cu;
    SET_GPR_U32(ctx, 31, 0x33AF94u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF8Cu, 0x33AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF94u;
label_33af94:
    // 0x33af94: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x33AF94u;
    {
        const bool branch_taken_0x33af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af94) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AF9Cu;
}
