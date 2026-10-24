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

// Function: entry_00336b6c
// Address: 0x336b6c - 0x336b88
void entry_00336b6c_0x336b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336b6c_0x336b6c");
#endif

    switch (ctx->pc) {
        case 0x336b80u: goto label_336b80;
        default: break;
    }

    ctx->pc = 0x336b6cu;

    // 0x336b6c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336b70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b78: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336B78u;
    SET_GPR_U32(ctx, 31, 0x336B80u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336B78u, 0x336B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B80u;
label_336b80:
    // 0x336b80: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x336B80u;
    {
        const bool branch_taken_0x336b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b80) {
            ctx->pc = 0x336D00u;
            return;
        }
    }
    ctx->pc = 0x336B88u;
}
