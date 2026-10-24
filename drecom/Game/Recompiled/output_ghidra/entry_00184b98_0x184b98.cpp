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

// Function: entry_00184b98
// Address: 0x184b98 - 0x184bb8
void entry_00184b98_0x184b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184b98_0x184b98");
#endif

    switch (ctx->pc) {
        case 0x184bb0u: goto label_184bb0;
        default: break;
    }

    ctx->pc = 0x184b98u;

    // 0x184b98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x184b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184b9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x184B9Cu;
    {
        const bool branch_taken_0x184b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184b9c) {
            ctx->pc = 0x184BB8u;
            return;
        }
    }
    ctx->pc = 0x184BA4u;
    // 0x184ba4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x184ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184ba8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x184BA8u;
    SET_GPR_U32(ctx, 31, 0x184BB0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x184BA8u, 0x184BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BB0u;
label_184bb0:
    // 0x184bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184BC8u;
            return;
        }
    }
    ctx->pc = 0x184BB8u;
}
