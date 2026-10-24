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

// Function: entry_0033af24
// Address: 0x33af24 - 0x33af40
void entry_0033af24_0x33af24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033af24_0x33af24");
#endif

    switch (ctx->pc) {
        case 0x33af38u: goto label_33af38;
        default: break;
    }

    ctx->pc = 0x33af24u;

    // 0x33af24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33af28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33af28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33af2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33af30: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33AF30u;
    SET_GPR_U32(ctx, 31, 0x33AF38u);
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x33AF30u, 0x33AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF38u;
label_33af38:
    // 0x33af38: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33AF38u;
    {
        const bool branch_taken_0x33af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af38) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33AF40u;
}
