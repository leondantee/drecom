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

// Function: entry_00187fbc
// Address: 0x187fbc - 0x187fd0
void entry_00187fbc_0x187fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fbc_0x187fbc");
#endif

    switch (ctx->pc) {
        case 0x187fc8u: goto label_187fc8;
        default: break;
    }

    ctx->pc = 0x187fbcu;

    // 0x187fbc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x187fc0: 0xc061014  jal         func_184050
    ctx->pc = 0x187FC0u;
    SET_GPR_U32(ctx, 31, 0x187FC8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FC0u, 0x187FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x187FC8u;
    {
        const bool branch_taken_0x187fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fc8) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187FD0u;
}
