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

// Function: entry_00184bc8
// Address: 0x184bc8 - 0x184be8
void entry_00184bc8_0x184bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184bc8_0x184bc8");
#endif

    switch (ctx->pc) {
        case 0x184be0u: goto label_184be0;
        default: break;
    }

    ctx->pc = 0x184bc8u;

    // 0x184bc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184bcc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x184BCCu;
    {
        const bool branch_taken_0x184bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184bcc) {
            ctx->pc = 0x184BE8u;
            return;
        }
    }
    ctx->pc = 0x184BD4u;
    // 0x184bd4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x184bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184bd8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x184BD8u;
    SET_GPR_U32(ctx, 31, 0x184BE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x184BD8u, 0x184BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BE0u;
label_184be0:
    // 0x184be0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x184BE0u;
    {
        const bool branch_taken_0x184be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184be0) {
            ctx->pc = 0x184C18u;
            return;
        }
    }
    ctx->pc = 0x184BE8u;
}
