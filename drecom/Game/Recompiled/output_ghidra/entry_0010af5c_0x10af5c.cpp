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

// Function: entry_0010af5c
// Address: 0x10af5c - 0x10af74
void entry_0010af5c_0x10af5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af5c_0x10af5c");
#endif

    switch (ctx->pc) {
        case 0x10af64u: goto label_10af64;
        default: break;
    }

    ctx->pc = 0x10af5cu;

    // 0x10af5c: 0xc041dac  jal         func_1076B0
    ctx->pc = 0x10AF5Cu;
    SET_GPR_U32(ctx, 31, 0x10AF64u);
    ctx->pc = 0x1076B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076B0u, 0x10AF5Cu, 0x10AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF64u;
label_10af64:
    // 0x10af64: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15348)));
    // 0x10af68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10af68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10af6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10af74u;
}
